#include <stdio.h>
#define TAM 5


int main () {

    // Cria um arquivos "notas.txt" 
    //FILE *notas = fopen("notas.txt", "w");
    
    float notas[TAM], saida[TAM];
    int i = 0;
    FILE *arq_notas;

    // Entrada no teclado das notas
    for (i = 0; i < TAM; i++ ){
        scanf("%f", &notas[i]);
    }

    // Abre o arquivo e limpa os resultados anteriores
    arq_notas = fopen("notas.txt", "w");

    // Validação de arquivo nulo
    if (arq_notas == NULL) {

        printf("Arquivo inválido");

        return 1;

    } 
    else{

        for(i = 0; i < TAM;i++){

            fprintf(arq_notas, "%.1f\n", notas[i]);
        }

    } fclose(arq_notas);

    arq_notas = fopen("notas.txt", "r");
    if(arq_notas == NULL) {

        printf("Arquivo inválido");

        return 1;

    } else {

        for(i = 0; i < TAM; i++){
            fscanf(arq_notas, "%f", &saida[i]);
        }
    }fclose(arq_notas);

        
    printf("Notas lidas de notas.txt:\n");

    for(i = 0; i < TAM; i++){

        printf("%.1f\n", saida[i]);
        
    }

    return 0;
}