#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

 
    printf("   "); 
    for (int i = 0; i < 10; i++) {
        printf("%c ", coluna[i]);
    }
    printf("\n");

    tabuleiro[5][1] = 3;
    tabuleiro[5][2] = 3;
    tabuleiro[5][3] = 3;

    tabuleiro[1][8] = 3;
    tabuleiro[2][8] = 3;
    tabuleiro[3][8] = 3;

    for (int i = 0; i < 10; i++) {
        printf("%d  ", i); 
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
