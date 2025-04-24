#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", coluna[i]);
    }
    printf("\n");


    tabuleiro[8][1] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[8][3] = 3;

    tabuleiro[1][6] = 3;
    tabuleiro[2][6] = 3;
    tabuleiro[3][6] = 3;

    for (int a = 0; a < 3; a++) {
        tabuleiro[a][a] = 3;
    }

    for (int a = 0; a < 3; a++) {
        tabuleiro[a][9 - a] = 3;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
