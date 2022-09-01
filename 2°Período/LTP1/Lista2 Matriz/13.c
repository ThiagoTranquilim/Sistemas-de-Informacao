#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int matM[2][3] = {1, 0, 2, -1, 3, 1}, matN[3][2] = {3, 1, 2, 1, 1, 0}, mult[2][2], x, y, aux, a;
	
	for(x = 0; x < 2; x++){
		for(y = 0; y < 3; y++){
			printf("%d |", matM[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	for(x = 0; x < 3; x++){
		for(y = 0; y < 2; y++){
			printf("%d |", matN[x][y]);
		}
		printf("\n");
	}
	printf("\n");
	
	aux = 0;
	x = 0;
	a = 0;
	for(y = 0; y < 3; y++){
		aux += matM[x][y] * matN[x + a][0];
		a++;
	}
	mult[0][0] = aux;
	
	aux = 0;
	x = 1;
	a = 0;
	for(y = 0; y < 3; y++){
		aux += matM[x][y] * matN[0 + a][0];
		a++;
	}
	mult[1][0] = aux;
	
	aux = 0;
	x = 0;
	a = 0;
	for(y = 0; y < 3; y++){
		aux += matM[x][y] * matN[x + a][1];
		a++;
	}
	mult[0][1] = aux;
	
	aux = 0;
	x = 1;
	a = 0;
	for(y = 1; y < 3; y++){
		aux = matM[x][y] + matN[0 + a][1];
		a++;
	}
	mult[1][1] = aux;
	
	for(x = 0; x < 2; x++){
		for(y = 0; y < 2; y++){
			printf("%d |", mult[x][y]);
		}
		printf("\n");
	}
}