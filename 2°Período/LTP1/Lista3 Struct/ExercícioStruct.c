#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[40];
	char genero[40];
	int integrantes;
	int ranking;
}tbandas;

int qnt = 0;

void addBanda(tbandas bandas[]){
	printf("Nome da Banda: ");
	fflush(stdin);
	gets(bandas[qnt].nome);
	printf("Genero da Banda: ");
	fflush(stdin);
	gets(bandas[qnt].genero);
	printf("Quantidade de integrantes: ");
	scanf("%d", &bandas[qnt].integrantes);
	printf("Ranking: ");
	scanf("%d", &bandas[qnt].ranking);
	qnt++;
}

void listaBanda(tbandas bandas[]){
	int i;
	
	for(i = 0; i < qnt; i++){
		printf("----------------\n");
		printf("Nome: %s\n", bandas[i].nome);
		printf("Genero: %s\n", bandas[i].genero);
		printf("Quantidade de integrantes: %d\n", bandas[i].integrantes);
		printf("Raking: %d\n", bandas[i].ranking);
		printf("----------------\n");
	}
}

void listaRanking(tbandas bandas[]){
	int i, opcao;
	printf("Filtro: ");
	scanf("%d", &opcao);
	
	for(i = 0; i < qnt; i++){
		if(opcao == bandas[i].ranking){
			printf("----------------\n");
			printf("Nome: %s\n", bandas[i].nome);
			printf("Genero: %s\n", bandas[i].genero);
			printf("Quantidade de integrantes: %d\n", bandas[i].integrantes);
			printf("Raking: %d\n", bandas[i].ranking);
			printf("----------------\n");
		}
	}
}

void listaGenero(tbandas bandas[]){
	int i;
	char opcao[40], aux[40];
	printf("Filtro: ");
	fflush(stdin);
	gets(opcao);
	strupr(opcao);
	for(i = 0; i < qnt; i++){
		strcpy(aux,bandas[i].genero);
		strupr(aux);
		if(strcmp(opcao, aux) == 0){
			printf("----------------\n");
			printf("Nome: %s\n", bandas[i].nome);
			printf("Genero: %s\n", bandas[i].genero);
			printf("Quantidade de integrantes: %d\n", bandas[i].integrantes);
			printf("Raking: %d\n", bandas[i].ranking);
			printf("----------------\n");
		}
	}
}

int listaNome(tbandas bandas[]){
	int i;
	char opcao[100], aux[100];
	printf("Nome da banda: ");
	fflush(stdin);
	gets(opcao);
	strupr(opcao);
	
	for(i = 0; i < qnt; i++){
		strcpy(aux, bandas[i].nome);
		strupr(aux);
		if(strcmp(opcao, aux) == 0){
			printf("----------------\n");
			printf("Nome: %s\n", bandas[i].nome);
			printf("Genero: %s\n", bandas[i].genero);
			printf("Quantidade de integrantes: %d\n", bandas[i].integrantes);
			printf("Raking: %d\n", bandas[i].ranking);
			printf("----------------\n");
			return i;
		}
	}
	return -1;
}

void removeBanda(tbandas bandas[]){
	int opcao, posicao;
	posicao = listaNome(bandas);
	if(posicao == -1){
		printf("Banda nao encontrada\n");
		return;
	}
	printf("Tem certeza que deseja remover? [1-Sim | 2-Nao]");
	scanf("%d", &opcao);
	if(opcao == 1){
		bandas[posicao] = bandas[qnt-1];
		qnt--;
	}else
		printf("Operacao cancelada\n");
}

void salvaArquivo(tbandas bandas[]){
	FILE *arq;
	int i=0;
	arq=fopen("dadosBandas.txt","wb");
	fwrite(&bandas[i],sizeof(tbandas),qnt,arq);
	printf("Dados salvos com sucesso\n");
	fclose(arq);
}

void carregaArquivo(tbandas bandas[]){
	FILE *arq;
	arq=fopen("dadosBandas.txt","rb");
	if(arq==NULL){
	  printf("Arquivo nao encontrado :(\n");
	  return;
	  }// fim if
	 while(fread(&bandas[qnt],sizeof(tbandas),1,arq) >0 )
	      qnt++;  
	 printf("Dados carregados com sucesso !\n");
	fclose(arq);
}

int menu(){
	int opcao;
	printf("\n*** Sistema de Cadastro Rock4You ***\n");
	printf("1- Cadastrar\n");
	printf("2- Listar\n");
	printf("3- Filtro por ranking\n");
	printf("4- Filtro por genero\n");
	printf("5- Filtro por nome\n");
	printf("6- Remover banda\n");
	printf("0 - Sair\n");
	scanf("%d",&opcao);
	return opcao;
}

int main(){
	tbandas bandas[100];
	int opcao;
	
	carregaArquivo(bandas);
	
	do{
		opcao = menu();
		switch (opcao){
			case 1:
				printf("----------------\n");
				printf("Adicionar Banda\n");
				printf("----------------\n");
				addBanda(bandas);
			break;
			
			case 2:
				printf("----------------\n");
				printf("Listar Bandas\n");
				printf("----------------\n");
				listaBanda(bandas);
			break;
			
			case 3:
				printf("----------------\n");
				printf("Listar Ranking\n");
				printf("----------------\n");
				listaRanking(bandas);
			break;
			
			case 4:
				printf("----------------\n");
				printf("Listar Genero\n");
				printf("----------------\n");
				listaGenero(bandas);
			break;
			
			case 5:
				printf("----------------\n");
				printf("Listar Nome\n");
				printf("----------------\n");
				listaNome(bandas);
			break;
			
			case 6:
				printf("----------------\n");
				printf("Remove Banda\n");
				printf("----------------\n");
				removeBanda(bandas);
			break;
			
			case 0:
				printf("Saindo...\n");
				salvaArquivo(bandas);
			break;
			
			default:
				printf("Opcao Invalida\n");
		}
	getch();
	system("cls");
	}while (opcao != 0);
	return 0;
}
