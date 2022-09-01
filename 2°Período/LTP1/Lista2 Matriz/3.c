#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mat[100][100], x, n, m, y, menor;
	srand(time(NULL));
	
	scanf("%d", &m);
	scanf("%d", &n);
	
	
	for(x = 0; x < n; x++){
		for(y = 0; y < m; y++){
			mat[x][y] = rand()%9 + 1;
			printf(" %d |", mat[x][y]);
		}
		printf("\n");
	}
	
	menor = mat[0][0];
	for(x = 0; x < n; x++){
		for(y = 0; y < m; y++){
			if(mat[x][y] < menor){
			menor = mat[x][y];
			}
		}
	}
	printf("\n%d\n", menor);
}