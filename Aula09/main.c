#include <stdio.h>
#include <string.h>

typedef struct {
	
	char nome[50];
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	
} Aluno;

int main () {
	
	Aluno primeiro;
	Aluno segundo;
	
	// Atribuindo strings
	strcpy(primeiro.nome, "Bruna");
	printf("%s\n", primeiro.nome);
	
	// Atribuindo valores
	primeiro.nota1 = 5.0f;
	printf("%.2f\n", primeiro.nota1);
	primeiro.nota2 = 6.5f;
	printf("%.2f\n", primeiro.nota2);
	primeiro.nota3 = 5.5f;
	printf("%.2f\n", primeiro.nota3);
	
	
	return 0;
	
}
