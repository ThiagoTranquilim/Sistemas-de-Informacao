#include <stdio.h>
#include <string.h>

typedef struct{
	char titulos[30];
	char autor[15];
	int prateleira;
	int ano;
}tlivros;

int qnt = 0;

void addLivros(tlivros livros[]){
	printf("Titulo: ");
	fflush(stdin);
	gets(livros[qnt].titulos);
	printf("Autor: ");
	fflush(stdin);
	gets(livros[qnt].autor);
	printf("Prateleira: ");
	scanf("%d", &livros[qnt].prateleira);
	printf("Ano: ");
	scanf("%d", &livros[qnt].ano);
	qnt++;
}

void listaTitulos(tlivros livros[]){
	int a;
	char opcao[30], aux[30];
	printf("Filtro: ");
	fflush(stdin);
	gets(opcao);
	strupr(opcao);
	
	for(a = 0; a < qnt; a++){
		strcpy(aux, livros[a].titulos);
		strupr(aux);
		if(strcmp(opcao, aux) == 0){
			printf("----------------\n");
			printf("Titulo: %s\n", livros[a].titulos);
			printf("Autor: %s\n", livros[a].autor);
			printf("Prateleira: %d\n", livros[a].prateleira);
			printf("Ano: %d\n", livros[a].ano);
			printf("----------------\n");
		}
	}
}

void listaLivros(tlivros livros[]){
	int i;
	for(i = 0; i < qnt; i++){
		printf("--------------------\n");
		printf("Titulo: %s\n", livros[i].titulos);
		printf("Autor: %s\n", livros[i].autor);
		printf("Prateleira: %d\n", livros[i].prateleira);
		printf("Ano: %d\n", livros[i].ano);
		printf("--------------------\n");
	}
}

void listaAno(tlivros livros[]){
	int opcao, a;
	printf("Filtro: ");
	scanf("%d", &opcao);
	
	for(a = 0; a < qnt; a++){
		if(opcao <= livros[a].ano){
			printf("--------------------\n");
			printf("Titulo: %s\n", livros[a].titulos);
			printf("Autor: %s\n", livros[a].autor);
			printf("Prateleira: %d\n", livros[a].prateleira);
			printf("Ano: %d\n", livros[a].ano);
			printf("--------------------\n");
		}
	}
}

int menu(){
	int opcao;
	printf("\n*** Sistema de Cadastro de Livros ***\n");
	printf("1- Cadastrar\n");
	printf("2- Filtro por titulo\n");
	printf("3- Listar\n");
	printf("4- Filtro por ano\n");
	printf("0 - Sair\n");
	scanf("%d",&opcao);
	return opcao;
}

int main(){
	tlivros livros[100];
	int opcao;
	
	do{
		opcao = menu();
		switch (opcao){
			case 1:
					printf("-------------------\n");
					printf("Cadastrar Livros\n");
					printf("-------------------\n");
					addLivros(livros);
			break;
			case 2:
					printf("-------------------\n");
					printf("Filtro por Titulos\n");
					printf("-------------------\n");
					listaTitulos(livros);
			break;
			case 3:
					printf("-------------------\n");
					printf("Listar Livros\n");
					printf("-------------------\n");
					listaLivros(livros);
			break;
			case 4:
					printf("-------------------\n");
					printf("Listar Livros\n");
					printf("-------------------\n");
					listaAno(livros);
			break;
			case 0:
					printf("Saindo...");
		}
	getch();
	system("cls");
	}while (opcao != 0);
}
