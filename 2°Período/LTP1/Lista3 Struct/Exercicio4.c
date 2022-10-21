#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[30];
	float potencia;
	float TML;
}teletro;

int qnt = 0;

void addEletro(teletro eletro[]){
	printf("Nome: ");
	fflush(stdin);
	gets(eletro[qnt].nome);
	printf("Potencia em Watts: ");
	scanf("%f", &eletro[qnt].potencia);
	printf("Tempo medio ativo por dia: ");
	scanf("%f", &eletro[qnt].TML);
	qnt++;
}

void listarEletro(teletro eletro[]){
	int i;
	for(i = 0; i < qnt; i++){
		printf("-------------------\n");
		printf("Nome: %s\n", eletro[i].nome);
		printf("Potencia: %.1fW\n", eletro[i].potencia);
		printf("Tempo Ligado: %.1fh\n", eletro[i].TML);
		printf("-------------------\n");
	}
}

void buscarEletro(teletro eletro[]){
	int i;
	char opcao[30], aux[30];
	printf("Filtro: ");
	fflush(stdin);
	gets(opcao);
	strlwr(opcao);
	
	for(i = 0; i < qnt; i++){
		strcpy(aux, eletro[i].nome);
		strlwr(aux);
		if(strcmp(aux, opcao) == 0){
				printf("-------------------\n");
				printf("Nome: %s\n", eletro[i].nome);
				printf("Potencia: %.1fW\n", eletro[i].potencia);
				printf("Tempo ligado: %.1fh\n", eletro[i].TML);
				printf("-------------------\n");
			}
	}
}

void filtroEletro(teletro eletro[]){
	int i;
	float kwh, opcao, gasto;
	printf("Filtro kwh: ");
	scanf("%f", &kwh);
	printf("Filtro R$: ");
	scanf("%f", &opcao);
	
	for(i = 0; i < qnt; i++){
		gasto = ((eletro[i].potencia * eletro[i].TML * 1)/1000) * kwh;
			if(gasto * 30 >= opcao){
				printf("-------------------\n");
				printf("Nome: %s\n", eletro[i].nome);
				printf("Potencia: %.1f W\n", eletro[i].potencia);
				printf("Tempo ligado: %.1f h\n", eletro[i].TML);
				printf("O %s tem um gasto de R$%.1f por mes e R$%.1f por dia!\n", eletro[i].nome, gasto*30, gasto);
				printf("-------------------\n");
			}
	}
}

void gastosEletro(teletro eletro[]){
	int i;
	float kwh, res;
	printf("Filtro kwh: ");
	scanf("%f", &kwh);
	
	for(i = 0; i < qnt; i++){
		res += (eletro[i].potencia * eletro[i].TML * 1)/1000;
	}
	
	printf("Diario: %.1fkwH/h | R$%.1f\n", res, res*kwh);
	printf("Mensal: %.1fkwH/h | R$%.1f", res*30, (res*kwh)*30);
}

int menu(){
	int opcao;
	
	printf("*** Sistema Eletro ***\n\n");
	printf("1- Cadastrar\n");
	printf("2- Listar Eletrodomesticos\n");
	printf("3- Busca Eletrodomestico\n");
	printf("4- Filtro\n");
	printf("5- Gastos\n");
	printf("0- Sair\n");
	printf("Digite uma opcao: ");
	scanf("%d", &opcao);
	printf("\n");
	
	return opcao;
}

void salvaArq(teletro eletro[]){
	FILE *arq;
	int i = 0;
	arq = fopen("dadosEletro.txt","wb");
	fwrite(&eletro[i], sizeof(eletro), qnt, arq);
	printf("Dados salvos com sucesso\n");
	fclose(arq);
}

void carregaArq(teletro eletro[]){
	FILE *arq;
	arq = fopen("dadosEletro.txt","rb");
	if(arq == NULL){
		printf("Arquivo nao encontrado :(\n");
		return;
	}
	while(fread(&eletro[qnt], sizeof(teletro), 1, arq) > 0)
		qnt++;
		
	printf("Dados carregados com sucesso! \n");
	fclose(arq);
}

int main(){
	teletro eletro[100];
	int opcao;
	
	carregaArq(eletro);
	do{
		opcao = menu();
		switch (opcao){
			case 1:
					printf("Cadastro:\n");
					addEletro(eletro);
			break;
			case 2:
					printf("Listar Eletrodomesticos:\n");
					listarEletro(eletro);
			break;
			case 3:
					printf("Buscar Eletrodomesticos:\n");
					buscarEletro(eletro);
			break;
			case 4:
					printf("Filtro:\n");
					filtroEletro(eletro);
			break;
			case 5:
					printf("Gastos:\n");
					gastosEletro(eletro);
			break;
			case 0:
					printf("Saindo\n");
					salvaArq(eletro);
			break;	
		}
		getch();
		system("cls");
	}while(opcao != 0);
}
