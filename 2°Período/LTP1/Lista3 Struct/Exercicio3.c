#include <stdio.h>
#include <string.h>

typedef struct{
	char matricula[30];
	char nome[30];
	int nota1;
	int nota2;
	int nota3;
	float media;
	int aprovacao;
}talunos;

int qnt = 0;

void addAlunos(talunos alunos[]){
	printf("Matricula: ");
	fflush(stdin);
	gets(alunos[qnt].matricula);
	printf("Nome: ");
	fflush(stdin);
	gets(alunos[qnt].nome);
	printf("nota 1: ");
	scanf("%d", &alunos[qnt].nota1);
	printf("nota 2: ");
	scanf("%d", &alunos[qnt].nota2);
	printf("nota 3: ");
	scanf("%d", &alunos[qnt].nota3);
	alunos[qnt].media =(alunos[qnt].nota1+alunos[qnt].nota2+alunos[qnt].nota3)/3;
	if(alunos[qnt].media >= 6){
		alunos[qnt].aprovacao = 1;
	}else{
		alunos[qnt].aprovacao = 0;
	}
	qnt++;
}

void listaNome(talunos alunos[]){
	int i;
	char opcao[30], aux[30];
	printf("Filtro: ");
	fflush(stdin);
	gets(opcao);
	strlwr(opcao);
	
		for(i = 0; i < qnt; i++){
			strcpy(aux, alunos[i].nome);
			strlwr(aux);
			if(strcmp(opcao, aux) == 0){
				printf("----------------\n");
				printf("Matricula: %s\n", alunos[i].matricula);
				printf("Nome: %s\n", alunos[i].nome);
				printf("Media: %.2f\n", alunos[i].media);
					if(alunos[i].aprovacao == 1){
						printf("Aprovado!\n");
					}else{
						printf("Reprovado!\n");
					}
				printf("----------------\n");
			}else
				printf("Nao encontrado\n");
		}
}

void listaAlunos(talunos alunos[]){
	int i;
	
	for( i = 0; i < qnt; i++){
		printf("----------------\n");
		printf("Matricula: %s\n", alunos[i].matricula);
		printf("Nome: %s\n", alunos[i].nome);
		printf("Media: %.2f\n", alunos[i].media);
			if(alunos[i].aprovacao == 1){
				printf("Aprovado!\n");
			}else{
				printf("Reprovado!");
			}
			printf("----------------\n");
	}
}

void listaMatricula(talunos alunos[]){
	int i;
	char aux[30], opcao[30];
	printf("Filtro: ");
	fflush(stdin);
	gets(opcao);
	strlwr(opcao);
	
		for(i = 0; i < qnt; i++){
			strcpy(aux, alunos[i].matricula);
			strlwr(aux);
			if(strcmp(opcao, aux) == 0){
				printf("----------------\n");
				printf("Matricula: %s\n", alunos[i].matricula);
				printf("Nome: %s\n", alunos[i].nome);
				printf("Media: %.2f\n", alunos[i].media);
					if(alunos[i].aprovacao == 1){
						printf("Aprovado!\n");
					}else{
						printf("Reprovado!\n");
					}
				printf("----------------\n");
			}else
				printf("Nao encontrado\n");
		}
}

void maiorMedia(talunos alunos[]){
	int i;
	float maior = 0;
	float a;
	
	for(i = 0; i < qnt; i++){
		if(maior < alunos[i].media){
			maior = alunos[i].media;
		}
	}
	for(i = 0; i < qnt; i++){
		if(maior == alunos[i].media){
			printf("----------------\n");
			printf("Matricula: %s\n", alunos[i].matricula);
			printf("Nome: %s\n", alunos[i].nome);
			printf("Media: %.2f\n", alunos[i].media);
			if(alunos[i].aprovacao == 1){
						printf("Aprovado!\n");
					}else{
						printf("Reprovado!\n");
					}
				printf("----------------\n");
		}
	}
}

int menu(){
	int opcao;
	printf("\n*** Sistema de Alunos ***\n");
	printf("1- Cadastrar Aluno\n");
	printf("2- Filtro por Nome\n");
	printf("3- Filtro por Matricula\n");
	printf("4- Listar Alunos\n");
	printf("5- Maior Nota\n");
	printf("0 - Sair\n");
	scanf("%d",&opcao);
	return opcao;
}

void carregaArquivo(talunos alunos[]){
	FILE *arq;
	arq=fopen("dadosAlunos.txt","rb");
	if(arq==NULL){
	  printf("Arquivo nao encontrado :(\n");
	  return;
	  }
	 while(fread(&alunos[qnt],sizeof(talunos),1,arq) >0 )
	      qnt++;  
	 printf("Dados carregados com sucesso !\n");
	fclose(arq);
}

void salvaArquivo(talunos alunos[]){
	FILE *arq;
	int i=0;
	arq=fopen("dadosAlunos.txt","wb");
	fwrite(&alunos[i],sizeof(talunos),qnt,arq);
	printf("Dados salvos com sucesso\n");
	fclose(arq);
}

int main(){
	talunos alunos[100];
	int opcao;
	carregaArquivo(alunos);
	
	do{
		opcao = menu();
		switch (opcao){
			
			case 1:
					printf("----------------\n");
					printf("Cadastro Aluno\n");
					printf("----------------\n");
					addAlunos(alunos);
			break;
			case 2:
					printf("----------------\n");
					printf("Filtro Nome\n");
					printf("----------------\n");
					listaNome(alunos);
			break;
			case 3:
					printf("----------------\n");
					printf("Filtro Matricula\n");
					printf("----------------\n");
					listaMatricula(alunos);
			break;
			case 4: 
					printf("----------------\n");
					printf("Listar Alunos\n");
					printf("----------------\n");
					listaAlunos(alunos);
			break;
			case 5:
					printf("----------------\n");
					printf("Maior Nota\n");
					printf("----------------\n");
					maiorMedia(alunos);
			break;
			case 0:
					printf("Saindo...\n");
					salvaArquivo(alunos);
			break;
					printf("Opcao invalida");
		}
	getch();
	system("cls");
	}while (opcao != 0);
}
