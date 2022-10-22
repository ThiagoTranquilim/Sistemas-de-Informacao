#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char data[11];
	char nomePessoa[30];
	char emprestado;
}temp;

typedef struct{
	char titulo[30];
	char console[15];
	int ano;
	int ranking;
	temp emp[100];
}tjogo;

int qnt = 0;

void addJogo(tjogo jogos[]){
	printf("---------------\n");
	printf("Titulo: ");
	fflush(stdin);
	gets(jogos[qnt].titulo);
	printf("Console: ");
	fflush(stdin);
	gets(jogos[qnt].console);
	printf("Ano: ");
	scanf("%d", &jogos[qnt].ano);
	printf("Ranking: ");
	scanf("%d", &jogos[qnt].ranking);
	jogos[qnt].emp->emprestado = 'N';
	printf("---------------\n");
	qnt++;
}

void listaJogo(tjogo jogos[]){
	int i;
	for(i = 0; i < qnt; i++){
		printf("--------------------\n");
		printf("Titulo: %s\n", jogos[i].titulo);
		printf("Console: %s\n", jogos[i].console);
		printf("Ano: %d\n", jogos[i].ano);
		printf("Ranking: %d\n", jogos[i].ranking);
		
		if(jogos[i].emp->emprestado == 'S'){
			printf("Emprestado: Sim\n");
		}else
			printf("Emprestado: Nao\n");
		printf("--------------------\n");
	}
}

void buscarJogo(tjogo jogos[]){
	int i;
	char opcao[30], aux[30];
	printf("Filtro: ");
	fflush(stdin);
	gets(opcao);
	strlwr(opcao);
	
	for(i = 0; i < qnt; i++){
		strcpy(aux, jogos[i].titulo);
		strlwr(aux);
		if(strcmp(aux, opcao) == 0){
			printf("--------------------\n");
			printf("Titulo: %s\n", jogos[i].titulo);
			printf("Console: %s\n", jogos[i].console);
			printf("Ano: %d\n", jogos[i].ano);
			printf("Ranking: %d\n", jogos[i].ranking);
		
			if(jogos[i].emp->emprestado == 'S'){
				printf("Emprestado: Sim\n");
			}else
				printf("Emprestado: Nao\n");
			printf("--------------------\n");
		}
	}
}

void buscarConsole(tjogo jogos[]){
	int i;
	char opcao[15], aux[15];
	printf("Filtro: ");
	fflush(stdin);
	gets(opcao);
	strlwr(opcao);
	
	for(i = 0; i < qnt; i++){
		strcpy(aux, jogos[i].console);
		strlwr(aux);
		if(strcmp(aux, opcao) == 0){
			printf("--------------------\n");
			printf("Titulo: %s\n", jogos[i].titulo);
			printf("Console: %s\n", jogos[i].console);
			printf("Ano: %d\n", jogos[i].ano);
			printf("Ranking: %d\n", jogos[i].ranking);
		
			if(jogos[i].emp->emprestado == 'S'){
				printf("Emprestado: Sim\n");
			}else
				printf("Emprestado: Nao\n");
			printf("--------------------\n");
		}
	}
}

void emprestimosJogo(tjogo jogos[]){
	int opcao, i, devolucao;
	char opcaoNome[30], aux[30];
	printf("1 - Realizar emprestimos\n");
	printf("2 - Devolver jogo\n");
	printf("3 - Jogos emprestados\n");
	scanf("%d", &opcao);
	
	switch (opcao){
	case 1:
			printf("Qual o nome do jogo? ");
			fflush(stdin);
			gets(opcaoNome);
			strlwr(opcaoNome);
		
			for(i = 0; i < qnt; i++){
				strcpy(aux, jogos[i].titulo);
				strlwr(aux);
				if(strcmp(aux, opcaoNome) == 0){
					printf("--------------------\n");
					printf("Titulo: %s\n", jogos[i].titulo);
					printf("Console: %s\n", jogos[i].console);
					printf("Ano: %d\n", jogos[i].ano);
					printf("Ranking: %d\n", jogos[i].ranking);
					printf("--------------------\n");
						if(jogos[i].emp->emprestado == 'S')
						printf("Este Jogo ja esta sendo emprestado!");
							else{
								printf("Nome da pessoa: ");
								fflush(stdin);
								gets(jogos[i].emp->nomePessoa);
								
								printf("Data (DD/MM/AAAA): ");
								fflush(stdin);
								gets(jogos[i].emp->data);	
								jogos[i].emp->emprestado = 'S';
							}
						}
					}
	break;
	case 2:
			printf("Qual o nome do jogo? ");
			fflush(stdin);
			gets(opcaoNome);
			strlwr(opcaoNome);
		
			for(i = 0; i < qnt; i++){
				strcpy(aux, jogos[i].titulo);
				strlwr(aux);
				if(strcmp(aux, opcaoNome) == 0){
					printf("--------------------\n");
					printf("Titulo: %s\n", jogos[i].titulo);
					printf("Console: %s\n", jogos[i].console);
					printf("Ano: %d\n", jogos[i].ano);
					printf("Ranking: %d\n", jogos[i].ranking);
					printf("--------------------\n");
					if(jogos[i].emp->emprestado == 'N')
						printf("Este jogo nao foi emprestado");
							else{
								printf("Nome da pessoa: %s\n", jogos[i].emp->nomePessoa);
								printf("Data: %s\n", jogos[i].emp->data);
								printf("Deseja devolver? 1 - Sim e 2 - Nao\n");
								scanf("%d", &devolucao);
								if(devolucao == 1){
									jogos[i].emp->emprestado = 'N';
								}else
									if(devolucao == 2){
										printf("Jogo nao devolvido");
									}else
										printf("Opcao invalida");
							}
						}
					}
	break;
	case 3:
			for(i = 0; i < qnt; i++){
				if(jogos[i].emp->emprestado == 'S'){
					printf("---------------------\n");
					printf("Titulo: %s\n", jogos[i].titulo);
					printf("Pessoa: %s\n", jogos[i].emp->nomePessoa);
					printf("Data: %s\n", jogos[i].emp->data);
					printf("---------------------\n");
				}
			}
	break;
	}//opcao
}

int menu(){
	int opcao;
	
	printf("*** Catalogo de Jogos ***\n\n");
	printf("1- Cadastrar\n");
	printf("2- Listar Jogos\n");
	printf("3- Buscar Jogo\n");
	printf("4- Filtro Console\n");
	printf("5- Emprestimos\n");
	printf("0- Sair\n");
	scanf("%d", &opcao);
	
	return opcao;
}

void salvaArq(tjogo jogos[]){
	FILE *arq;
	int i = 0;
	arq = fopen("dadosJogos.txt","wb");
	fwrite(&jogos[i], sizeof(tjogo), qnt, arq);
	printf("Dados salvos com sucesso\n");
	fclose(arq);
}

void carregaArq(tjogo jogos[]){
	FILE *arq;
	arq = fopen("dadosJogos.txt","rb");
	if(arq == NULL){
		printf("Arquivo nao encontrado :(\n");
		return;
	}
	while(fread(&jogos[qnt], sizeof(tjogo), 1, arq) > 0)
		qnt++;
		
	printf("Dados carregados com sucesso! \n");
	fclose(arq);
}

int main(){
	tjogo jogos[100];
	int opcao;
	
	carregaArq(jogos);
	
	do{
		opcao = menu();
		switch (opcao){
			case 1:
					printf("Cadastro:\n");
					addJogo(jogos);
			break;
			case 2:
					printf("Listar Jogos:\n");
					listaJogo(jogos);
			break;
			case 3:
					printf("Buscar Jogos\n");
					buscarJogo(jogos);
			break;
			case 4:
					printf("Buscar Console\n");
					buscarConsole(jogos);
			break;
			case 5:
					printf("Emprestimos Jogo\n");
					emprestimosJogo(jogos);
			break;
			case 0:
					printf("Saindo\n");
					salvaArq(jogos);
			break;
			default:
					printf("Opcao Invalida\n");
			break;
		}
		getch();
		system("cls");
	}while (opcao != 0);
}