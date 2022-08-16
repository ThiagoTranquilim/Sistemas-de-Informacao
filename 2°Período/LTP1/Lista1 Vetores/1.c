#include <stdio.h>
#include <time.h>

int main(){
	int vet[100], i, n, soma = 0;
	srand(time(NULL));
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		vet[i] = rand()%9+1;
		soma += vet[i];
	}
	printf("\n%d", soma);
}