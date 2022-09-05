#include <stdio.h>
#include <stdlib.h>

void geraMatriz(int a, int mat[][100]){
	
	int x, y;
	for(x = 0; x < a; x++){
		for(y = 0; y < a; y++){
			printf("Na posicao %d x e %d y o valor e: ", x, y);
			scanf("%d", &mat[x][y]);
		}
	}
	system("cls");
}

void printMatriz(int a, int mat[][100]){
	int x, y;
	
	for(x = 0; x < a; x++){
		for(y = 0; y < a; y++){
			printf("%d |", mat[x][y]);
		}
		printf("\n");
	}
}

int bitMatriz(int a, int mat[][100]){
	int x, y, q = 0;
	for(x = 0; x < a; x++){
		for(y = 0; y< a; y++){
			if(mat[x][y] != 0 && mat[x][y] != 1){
				q++;
			}
		}
	}
	if(q != 0){
		return 0;
	}else
		return 1;
}

int main(){
	int mat[100][100], x, y, a, l;
	printf("Qual o tamanho da matriz?\n");
	scanf("%d", &a);
	
	geraMatriz(a, mat);
	printMatriz(a, mat);
	l = bitMatriz(a, mat);
	printf("%d", l);
}