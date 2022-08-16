#include <stdio.h>
#include <time.h>

int menor(float vet[], float n){
	float menor;
	int i;
	
	menor = vet[0];
	for(i = 0; i < n; i++){
		if(vet[i] < menor){
			menor = vet[i];
		}
	}
	return menor;
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
	z = menor(vet, n);
	printf("\n%.2f", z);
	
}