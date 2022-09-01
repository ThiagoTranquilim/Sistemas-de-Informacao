#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mat[100][100], x, n, m, y, p, a = 0;
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
	
	scanf("%d", &p);
	for(x = 0; x < n; x++){
		for(y = 0; y < m; y++){
			if(mat[x][y] == p){
			a++;
			}
		}
	}
	printf("%d", a);
}
