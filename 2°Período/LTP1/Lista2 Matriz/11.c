#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mat[100][100], x, y, m, n, l;
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
	
	scanf("%d", &l);
	printf("\n");
	
	for(x = 0; x < m; x++){
		for(y = 0; y < n; y++){
			mat[x][y] = mat[x][y] * l;
			printf("%d |", mat[x][y]);
		}
		printf("\n");
	}
}