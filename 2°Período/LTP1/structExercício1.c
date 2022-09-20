#include <stdio.h>

typedef struct{
	char nome[40];
	char genero[40];
	int integrantes;
	int ranking;
}tbanda;
int qtd=0;

void cadastro(tbanda b[]){
	printf("Nome da banda: ");
	fflush(stdin);
	gets(b[qtd].nome);
	printf("Genero da banda: ");
	fflush(stdin);
	gets(b[qtd].genero);
	printf("Quantidade de integrantes: ");
	fflush(stdin);
	scanf("%d", &b[qtd].integrantes);
	printf("Ranking: ");
	scanf("%d", &b[qtd].ranking);
	qtd++;
}

void lista(tbanda b[]){
	int i;
	for( i = 0; i < qtd; i++){
		printf("\nBanda %d\n", i+1);
		printf("Nome: %s\n", b[i].nome);
		printf("Genero: %s\n", b[i].genero);
		printf("Ranking: %d\n", b[i].ranking);
	}
}

int menu(){
	int opcao;
	printf("*** Sistemas de Cadastro Rock4You ***\n");
	printf("1- Cadastrar\n");
	printf("2- Listar\n");
	printf("3- Sair\n");
	scanf("%d", &opcao);
	return opcao;
}

int main(){
	tbanda bandas[100];
	int opcao;
	
	do{
		opcao = menu();
		switch(opcao){
			
			case 1:
			printf("Cadastrar\n");
			cadastro(bandas);
			 break;
			 
			case 2:
			printf("Listar\n");
			lista(bandas);
			 break;
			 
			case 3:
			printf("Saindo...\n");
			 break;
			 
			 default: printf("Opcao Invalida\n");		
		}
		getch();
		system("cls");
	}while(opcao != 3);
	return 0;
}
