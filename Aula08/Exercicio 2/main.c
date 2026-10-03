#include <stdio.h>
#define TAM 5


int main () {

    // Cria um arquivos "notas.txt" 
    //FILE *notas = fopen("notas.txt", "w");
    
    float notas[TAM];
    FILE *arq_notas;

    // Entrada no teclado das notas
    for (int i = 0; i < TAM; i++ ){
        scanf("%f", &notas[i]);
    }

    arq_notas = fopen("notas.txt", "w");
    if (arq_notas == NULL) {

        printf("Arquivo inválido");

        return 1;

    } 
    else{

        for(int i = 0; i < TAM;i++){

            fprintf(arq_notas, "%.1f\n", notas[i]);
        }

    }

    // for (i = 0; i < TAM; i++ ){
    //     printf("%d ", notas[i]);
    // }

    return 0;
}