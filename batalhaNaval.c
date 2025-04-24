#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", coluna[i]);
    }
    printf("\n");

    int Cone1 = 0, Cone1SegundaParte = 0;
    tabuleiro[Cone1][Cone1SegundaParte + 2] = 3;
    tabuleiro[Cone1 + 1][Cone1SegundaParte + 1] = 3;
    tabuleiro[Cone1 + 1][Cone1SegundaParte + 3] = 3;
    tabuleiro[Cone1 + 2][Cone1SegundaParte] = 3;
    tabuleiro[Cone1 + 2][Cone1SegundaParte + 1] = 3;
    tabuleiro[Cone1 + 2][Cone1SegundaParte + 2] = 3;
    tabuleiro[Cone1 + 2][Cone1SegundaParte + 3] = 3;
    tabuleiro[Cone1 + 2][Cone1SegundaParte + 4] = 3;
    tabuleiro[Cone1 + 1][Cone1SegundaParte + 2] = 3;

    int Cruz1 = 7, Cruz1SegundaParte = 1;
    for (int i = Cruz1SegundaParte - 2; i <= Cruz1SegundaParte + 2; i++) {
        tabuleiro[Cruz1][i] = 3;
    }
    for (int i = Cruz1 - 1; i <= Cruz1 + 1; i++) {
        tabuleiro[i][Cruz1SegundaParte] = 3;
    }

    int Octaedro1 = 1, Octaedro1SegundaParte = 7;
    tabuleiro[Octaedro1][Octaedro1SegundaParte] = 3;
    tabuleiro[Octaedro1 - 1][Octaedro1SegundaParte] = 3;
    tabuleiro[Octaedro1 + 1][Octaedro1SegundaParte] = 3;
    tabuleiro[Octaedro1][Octaedro1SegundaParte - 1] = 3;
    tabuleiro[Octaedro1][Octaedro1SegundaParte + 1] = 3;
    tabuleiro[Octaedro1][Octaedro1SegundaParte] = 3;

    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
