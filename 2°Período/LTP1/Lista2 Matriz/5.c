#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mat[100][100], x, y, m, n;
	srand(time(NULL));
	
	scanf("%d", &m);
	scanf("%d", &n);
	
	for(x = 0; x < m; x++){
		for(y = 0; y < n; y++){
			mat[x][y] = rand()%9 + 1;
			printf(" %d |", mat[x][y]);
		}
		printf("\n");
	}
	
	for(x = 0; x < m; x++){
		for(y = 0; y < n; y++){
			if(x == y){
				printf("%d |", mat[x][y]);
			}
		}
	}
}