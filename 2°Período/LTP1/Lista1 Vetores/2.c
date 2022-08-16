#include <stdio.h>
#include <time.h>

int maior(float vet[], float n){
	float maior;
	int i;
	
	maior = vet[0];
	for(i = 0; i < n; i++){
		if(vet[i] > maior){
			maior = vet[i];
		}
	}
	return maior;
}

int main(){
	float vet[100], n, z;
	int i;
	srand(time(NULL));
	
	scanf("%f", &n);
	for( i=0; i < n; i++){
		vet[i] = rand()%9 + 1;
		printf(" %.2f |", vet[i]);
	}
	z = maior(vet, n);
	printf("\n%.2f", z);
	
}