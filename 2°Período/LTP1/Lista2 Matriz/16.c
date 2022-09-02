#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mat[100][100], a, x, y, auxp = 1, auxs = 1, auxp1 = 1, auxp2 = 1, auxp3 = 1, auxs1 = 1, auxs2 = 1, auxs3 = 1;
	srand(time(NULL));
	
	scanf("%d", &a);
	for(x = 0; x < a; x++){
		for(y = 0; y < a; y++){
			mat[x][y] = rand()%9 + 1;
			printf("%d |", mat[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	if(a == 2){
	for(x = 0; x < a; x++){
		for(y = 0; y < a; y++){
			if(x == y){
				auxp *= mat[x][y];
			}else
				if(y > x || x > y){
					auxs *= mat[x][y];
				}
			}
		}
		printf("DET = %d", auxp - auxs);
	}else
		if(a == 3){
			for(x = 0; x < a; x++){
				for(y = 0; y < a; y++){
					if(x == y){
						auxp1 *= mat[x][y];
					}else
						if(x + 1 == y){
							auxp2 *= mat[x][y];
						}
				}
			}
			
			auxp2 *= mat[2][0];
			auxp3 *= mat[0][2] * mat[1][0] * mat[2][1];
			auxs1 *= mat[0][2] * mat[1][1] * mat[2][0];
			auxs2 *= mat[0][0] * mat[1][2] * mat[2][1];
			auxs3 *= mat[0][1] * mat[1][0] * mat[2][2];
			printf("DET = %d", auxp1 + auxp2 + auxp3 -auxs1 - auxs2 - auxs3);
		}
}
