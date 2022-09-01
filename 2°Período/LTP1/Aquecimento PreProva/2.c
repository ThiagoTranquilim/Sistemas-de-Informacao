#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mat[100][100], a, x, y, p = 0, d;
	srand(time(NULL));
	
	scanf("%d", &a);
	for(x = 0; x < a; x++){
		for(y = 0; y < a; y++){
			mat[x][y] = rand()%9 + 1;
			printf("%d |", mat[x][y]);
		}
		printf("\n");
	}
	
	for(x = 0; x < a; x++){
		for(y = 0; y < a; y++){
			if(mat[x][y] % 2 == 0){
				p++;
			}else
			d++;
		}
	}
	d = d - 1;
	printf("Par: %d\n", p);
	printf("Impar: %d", d);
}