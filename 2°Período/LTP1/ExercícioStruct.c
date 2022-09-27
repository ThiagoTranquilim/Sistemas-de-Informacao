#include <stdio.h>
#include <string.h>

typedef struct{
	char nomeBanda[100];
	char tipoMusica[100];
	int nmrIntegrantes;
	int ranking;
}tbanda;

int qtd = 0;

void addBanda(tbanda Banda[]){
	printf("Nome da banda: ");
	fflush(stdin);
	gets(Banda[qtd].nomeBanda);
	printf("Genero: ");
	fflush(stdin);
	gets(Banda[qtd].tipoMusica);
	printf("Quantidade integrantes: ");
	fflush(stdin);
	scanf("%d", &Banda[qtd].nmrIntegrantes);
	printf("Qual o ranking: ");
	fflush(stdin);
	scanf("%d", &Banda[qtd].ranking);
	qtd++;
}

void listaBanda(tbanda Banda[]){
	int i;
	for(i = 0; i < qtd; i++){
		printf("\nBanda: %d\n", i + 1);
		printf("Nome: %s\n", Banda[i].nomeBanda);
		printf("Genero: %s\n", Banda[i].tipoMusica);
		printf("Ranking: %d\n", Banda[i].ranking);
	}
}

void listaRanking(tbanda Banda[]){
	int i, opcao;
	printf("Qual o ranking: \n");
	scanf("%d", &opcao);
	opcao--;
	for( i = 0; i < qtd; i++){
		if(i == opcao){
			printf("\nBanda: %d\n", i+1);
			printf("Nome: %s\n", Banda[i].nomeBanda);
			printf("Genero: %s\n", Banda[i].tipoMusica);
			printf("Numero de integrantes: %d\n", Banda[i].nmrIntegrantes);
			printf("Ranking: %d", Banda[i].ranking);
		}
	}
	
}

void listaGenero(tbanda Banda[]){
	int i;
	char opcao[40];
	printf("Qual o genero: \n");
	fflush(stdin);
	gets(opcao);
	
	for(i = 0; i < qtd; i++){
		if(strcmp(opcao, Banda[i].tipoMusica) == 0){
			printf("\nBanda: %d\n", i+1);
			printf("Nome: %s\n", Banda[i].nomeBanda);
			printf("Genero: %s\n", Banda[i].tipoMusica);
			printf("Numero de integrantes: %d\n", Banda[i].nmrIntegrantes);
			printf("Ranking: %d\n", Banda[i].ranking);
			}
	}
	
}

int menu(){
	int opcao;
	printf("*** Sistemas de Cadastro Rock4you ***\n");
	printf("1 - Cadastrar\n");
	printf("2 - Listar\n");
	printf("3 - Buscar por ranking\n");
	printf("4 - Buscar por genero\n");
	printf("5 - Sair\n");
	scanf("%d", &opcao);
	return opcao;
}

void carregaArquivo(tbanda Banda[]){
	FILE *arq;
	int i = 0;
	arq = fopen("dadosBandas.txt", "rb");
	if(arq == NULL){
		printf("Arquivo nao encontrado\n");
		return;
	}while(fread(&Banda[qtd], sizeof(tbanda),1,arq) > 0)
	qtd++;
	printf("Dados carregados com sucesso\n");
	fclose(arq);
}

void salvaArquivo(tbanda Banda[]){
	FILE *arq;
	int i=0;
	arq=fopen("dadosBandas.txt","wb");
	fwrite(&Banda[i],sizeof(tbanda),qtd,arq);
	printf("Dados salvos com sucesso\n");
	fclose(arq);
}

int main(){
	tbanda Banda[10];
	int opcao;
	carregaArquivo(Banda);
	
	do{
		opcao = menu();
		switch (opcao){
			case 1:
				printf("Cadastrar\n");
				addBanda(Banda);
				break;
				
			case 2:
				printf("Lista\n");
				listaBanda(Banda);
				break;
				
				
			case 3:
				printf("Buscar por ranking\n");
				listaRanking(Banda);
				break;
				
			case 4:
				printf("Buscar por genero\n");
				listaGenero(Banda);
				break;
				
			case 5:
				printf("Saindo...\n");
				salvaArquivo(Banda);
				break;
				
			default: printf("Opcao invalida");
		}
		getch();
		system("cls");
	}while (opcao != 5);
	return 0;
}
