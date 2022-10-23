#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int mes;
	int ano;
}data;

typedef struct{
	int codigo;
	int leite;
	int alimento;
	data nascimento;
	char abate;
}tboi;

int qnt = 0;
int leiteSemanal = 0;
int alimentoSemanal = 0;

void addBoi(tboi boi[]){
	int opcaoAbate;
	
	printf("codigo: ");
	scanf("%d", &boi[qnt].codigo);
	
	printf("Numero de litros de leite produzidos: ");
	scanf("%d", &boi[qnt].leite);
	
	leiteSemanal += boi[qnt].leite;
	
	printf("Quantidade em kg ingerida:");
	scanf("%d", &boi[qnt].alimento);
	
	alimentoSemanal += boi[qnt].alimento;
	
	printf("Data de nascimento mes: ");
	scanf("%d", &boi[qnt].nascimento.mes);
	
	printf("Data de nascimento ano (AAAA): ");
	scanf("%d", &boi[qnt].nascimento.ano);
	
	if(boi[qnt].nascimento.ano >= 2017 || boi[qnt].leite > 40){
		printf("Esse animal nao podera ser abatido\n");
		boi[qnt].abate = 'N';
		printf("Abate: N");
		
	}else{
		printf("Esse animal ira para o abate: (1 - Sim e 2 - Nao)");
		scanf("%d", &opcaoAbate);
		
		if(opcaoAbate == 1){
			boi[qnt].abate = 'S';
			printf("Abate: S");
		}else
			if(opcaoAbate == 2){
			boi[qnt].abate = 'N';
			printf("Abate: N");
			}
	}
	qnt++;
}

void listaBoi(tboi boi[]){
	int i;
	for(i = 0; i < qnt; i++){
		printf("--------------------\n");
		printf("Codigo: %d\n", boi[i].codigo);
		printf("Leite produzido: %d\n", boi[i].leite);
		printf("Alimento consumido: %d\n", boi[i].alimento);
		printf("Abate: %c\n", boi[i].abate);
		printf("Data de nascimento %d/%d\n", boi[i].nascimento.mes, boi[i].nascimento.ano);
		printf("--------------------\n");
	}
}

void abatesBoi(tboi boi[]){
	int i;
	for(i = 0; i < qnt; i++){
		if(boi[i].abate == 'S'){
			printf("--------------------\n");
			printf("Codigo: %d\n", boi[i].codigo);
			printf("Leite produzido: %d\n", boi[i].leite);
			printf("Alimento consumido: %d\n", boi[i].alimento);
			printf("Abate: %c\n", boi[i].abate);
			printf("Data de nascimento %d/%d\n", boi[i].nascimento.mes, boi[i].nascimento.ano);
			printf("--------------------\n");
		}
	}
}

int menu(){
	int opcao;
	
	printf("*** Sistema Boi ***\n\n");
	printf("1- Cadastrar\n");
	printf("2- Listar boi\n");
	printf("3- Total de litros semanal\n");
	printf("4- Total de kg consumidos semanal\n");
	printf("5- Animais abates\n");
	printf("0- Sair\n");
	printf("Digite uma opcao: ");
	scanf("%d", &opcao);
	
	return opcao;
}

void salvaArq(tboi boi[]){
	FILE *arq;
	int i = 0;
	arq = fopen("dadosBoi.txt","wb");
	fwrite(&boi[i], sizeof(tboi), qnt, arq);
	printf("Dados salvos com sucesso\n");
	fclose(arq);
}

void carregaArq(tboi boi[]){
	FILE *arq;
	arq = fopen("dadosBoi.txt","rb");
	if(arq == NULL){
		printf("Arquivo nao encontrado :(\n");
		return;
	}
	while(fread(&boi[qnt], sizeof(tboi), 1, arq) > 0)
		qnt++;
		
	printf("Dados carregados com sucesso! \n");
	fclose(arq);
}

int main(){
	tboi boi[100];
	int opcao;
	
	carregaArq(boi);
	
	do{
		opcao = menu();
		switch(opcao){
			
			
			case 1:
					printf("Cadastro boi:\n");
					addBoi(boi);
			break;
			case 2:
					printf("Listar boi:\n");
					listaBoi(boi);
			break;
			case 3:
					printf("Litros de leite:\n");
					printf("Total de leite produzido na semana %dl\n", leiteSemanal);
			break;
			case 4:
					printf("Alimentos consumidos:\n");
					printf("Total de alimento consumido na semana %dkg\n", alimentoSemanal);
			break;
			case 5:
					printf("Animais abates:\n");
					abatesBoi(boi);
			break;
			case 0:
					printf("Saindo\n");
					salvaArq(boi);
		}
	getch();
	system("cls");
	}while (opcao != 0);
}