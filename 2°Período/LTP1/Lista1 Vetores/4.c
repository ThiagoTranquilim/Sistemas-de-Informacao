#include <stdio.h>
#include <time.h>

int impar(int vet[], int n){
	int i, p = 0;
	for(i = 0; i < n; i++){
		if(vet[i]%2 != 0){
			p++;
		}
	}
	return p;
}

int main(){
	int vet[100], n, i, p;
	srand(time(NULL));
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		vet[i] = rand()%9+1;
		printf(" %d |", vet[i]);
	}
	p = impar(vet, n);
	printf("\nOs valore impares sao: %d", p);
}