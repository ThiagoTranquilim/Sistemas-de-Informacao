#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	float mat[100][100], mat2[100][100], mat3[100][100], m, n, c;
	int x, y;
	char escolha;
	srand(time(NULL));
	
	scanf("%f", &m);
	scanf("%f", &n);
	
	printf("Matriz 1:\n");
	for( x = 0.0; x < m; x++){
		for(y = 0.0; y < n; y++){
			mat[x][y] = rand()%9 + 1;
			printf("%.2f |", mat[x][y]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Matriz 2:\n");
	for( x = 0.0; x < m; x++){
		for(y = 0.0; y < n; y++){
			mat2[x][y] = rand()%9 + 1;
			printf("%.2f |", mat2[x][y]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("A - Somar matriz\n");
	printf("B - Subtrair matriz\n");
	printf("C - Adicionar uma constante a matriz\n");
	printf("D - Imprimir as matrizes\n");
	
	do{
	scanf("%s", &escolha);
	
	switch (escolha){
		case 'A':
			printf("Matriz Soma:\n");
			for(x = 0.0; x < m; x++){
				for(y = 0.0; y < n; y++){
					mat3[x][y] = mat[x][y] + mat2[x][y];
					printf("%.2f |", mat3[x][y]);
				}
				printf("\n");
			}
			break;
			
		case 'B':
			printf("Matriz Subtracao:\n");
			for(x = 0.0; x < m; x++){
				for(y = 0.0; y < n; y++){
					mat3[x][y] = mat[x][y] - mat2[x][y];
					printf("%.2f |", mat3[x][y]);
				}
				printf("\n");
			}
			break;
			
		case 'C':
			scanf("%f", &c);
			printf("Matriz 1 com constante:\n");
			for(x = 0.0; x < m; x++){
				for(y = 0.0; y < n; y++){
					mat[x][y] = c*mat[x][y];
					printf("%.2f |", mat[x][y]);
				}
				printf("\n");
			}
			printf("\n");
			printf("Matriz 2 com constante:\n");
			for(x = 0.0; x < m; x++){
				for(y = 0.0; y < n; y++){
					mat2[x][y] = c*mat2[x][y];
					printf("%.2f |", mat2[x][y]);
				}
				printf("\n");
			}
			break;
		}
	}while (escolha != 'D');
	
	printf("\n");
	printf("Matriz 1:\n");
	for(x = 0; x < m; x++){
		for(y = 0; y < n; y++){
			printf("%.2f |", mat[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Matriz 2:\n");
	for(x = 0; x < m; x++){
		for(y = 0; y < n; y++){
			printf("%.2f |", mat2[x][y]);
		}
		printf("\n");
	}
	if(mat3[0][0] != 0){
		printf("\n");
	printf("Matriz Soma ou Subtracao:\n");
	for(x = 0; x < m; x++){
		for(y = 0; y < n; y++){
			printf("%.2f |", mat3[x][y]);
		}
		printf("\n");
		}
	}
}