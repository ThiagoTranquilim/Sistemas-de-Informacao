#include <stdio.h>
#include <time.h>

int main(){
	int vet[100], n, i, a, c = 0;
	srand(time(NULL));
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		vet[i] = rand()%9 + 1;
		printf(" %d |", vet[i]);
	}
	scanf("%d", &a);
	for(i = 0; i < n; i++){
		if(vet[i] == a){
			printf("| na posicao: %d", i);
			c++;
		}else
			if(i == n - 1){
				if(c == 0){
					printf("\nNao tem o numero no vetor\n");
				}
			}
		}
	}
