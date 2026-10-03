#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main() {
    int A[LINHA][COLUNA], B[LINHA][COLUNA], soma[LINHA][COLUNA];
    int diagonal = 0;
    int i, j;

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            soma[i][j] = A[i][j] + B[i][j];
        }
    }

    for (i = 0; i < LINHA; i++) {
        diagonal += A[i][i];
    }

    printf("Soma A + B:\n");

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal de A: %d\n", diagonal);

    printf("Transposta de A:\n");

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }

    return 0;
}