#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mat[100][100], mat2[100][100], m, n, x, y, aux;
	srand(time(NULL));
	
	scanf("%d", &m);
	scanf("%d", &n);
	
	for(x = 0; x < m; x++){
		for(y = 0; y < n; y++){
			mat[x][y] = rand()%9 + 1;
			printf("%d |", mat[x][y]);
			}
			printf("\n");
	}
	printf("\n");
	
	aux = m;
	m = n;
	n = aux;
	 
	for(x = 0; x < m; x++){
		for(y = 0; y < n; y++){
			mat2[x][y] = mat[y][x];
			printf("%d |", mat2[x][y]);
			}
			printf("\n");
	}
}