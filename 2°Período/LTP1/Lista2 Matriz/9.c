#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mat[100][100], mat2[100][100], mat3[100][100], x, y, m1, n1, m2, n2;
	srand(time(NULL));
	scanf("%d", &m1);
	scanf("%d", &n1);
	scanf("%d", &m2);
	scanf("%d", &n2);
	
	printf(" Matriz 1\n");
	for(x = 0; x < m1; x++){
		for(y = 0; y < n1; y++){
			mat[x][y] = rand()%9 + 1;
			printf("%d |", mat[x][y]);
		}
		printf("\n");
	}		
	printf("Matriz 2\n");
	for(x = 0; x < m2; x++){
		for(y = 0; y < n2; y++){
			mat2[x][y] = rand()%9 + 1;
			printf(" %d |", mat2[x][y]);
		}
		printf("\n");
	}
	
	if(m1 == m2 && n1 == n2){
		printf("Matriz 3\n");
		for(x = 0; x < m1; x++){
			for(y = 0; y < n1; y++){
				mat3[x][y] = mat[x][y] + mat2[x][y];
				printf("%d |", mat3[x][y]);
			}
			printf("\n");
		}
	}else
	printf("Erro colunas linhas diferentes\n");
}