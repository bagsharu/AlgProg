#include <stdio.h>
#define TAM 5


int main () {

    // Cria um arquivos "notas.txt" 
    //FILE *notas = fopen("notas.txt", "w");
    
    int notas[TAM], i;

    for (i = 0; i < TAM; i++ ){
        scanf("%d", &notas[i]);
    }
    
    for (i = 0; i < TAM; i++ ){
        printf("%d ", notas[i]);
    }
    return 0;
}