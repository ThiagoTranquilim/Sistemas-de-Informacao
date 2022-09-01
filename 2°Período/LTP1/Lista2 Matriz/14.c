#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int qntRaio, x, y, mat[8][5], i, raioTotal,e=0;
	scanf("%d", &qntRaio);
	
	for(x = 0; x < 8; x++){
		for(y = 0; y < 5; y++){
			mat[x][y] = 0;
		}
	}
	for(i = 0; i < qntRaio; i++){
		scanf("%d%d", &x, &y);
		mat[x][y]++;
	}
	for(x = 0; x < 8; x++){
		for(y = 0; y < 5; y++){
			if(mat[x][y] >= 2){
				printf("1");
				e=1;
			}
		}
	}
	if(e == 0){
		printf("0");
	}
}