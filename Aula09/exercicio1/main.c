#include <stdio.h>


typedef struct {
	
	char nome[30];
	char categoria[20];
	int quantidade;
	float precoCompra;
	float precoAtual;
	
} Ativo;

int main() {
	
	Ativo ativo[];
	int nav;
	
	while( nav != 0){
		
		exibirMenu();
		scanf("%d", &nav)
		
		switch(nav){
			
			case 1:
				
				printf("")
				
				scanf("%49s %19s %d %f %f", ativo.nome, ativo.categoria, &ativo.quantidade, &ativo.precoCompra, &ativo.precoAtual);

			
		}
		
	}
	

	return 0;
}

void exibirMenu(){
	
	printf("=== Controle de Carteira ===\n"
       "1 - Cadastrar ativo\n"
       "2 - Listar ativos\n"
       "3 - Valor total da carteira\n"
       "0 - Sair\n"
       "Escolha: ");
	
}
