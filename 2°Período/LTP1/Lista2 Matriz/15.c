#include <stdio.h>

int geraMat(int mat[][100]){
	int x, y;
	for(x = 0; x < 100; x++){
		for(y = 0; y < 100; y++){
			mat[x][y] = 0;
		}
	}
}

int printMat(int mat[][100]){
	int x, y;
	for(x = 0; x < 100; x++){
		for(y = 0; y < 100; y++){
			printf("%d |", mat[x][y]);
		}
		printf("\n");
	}
}

int main(){
	int a, mat[100][100], i, x1, y1, x2, y2, x, y, l = 0;
	scanf("%d", &a);
	geraMat(mat);
	for(i = 0; i < a; i++){
		scanf("%d", &x1);
		scanf("%d", &x2);
		scanf("%d", &y1);
		scanf("%d", &y2);
		for(x = x1; x <= x2; x++){
			for(y = y1; y <= y2; y++){
				mat[x][y] = 1;
			}
		}
	}
	for(x = 0; x < 100; x++){
		for(y = 0; y < 100; y++){
			if(mat[x][y] == 1){
				l++;
			}
		}
	}
	printf("%d", l);
}
