#include <stdio.h>
#include <time.h>

int main(){
	int vet1[100], vet2[100], vet3[100], n, i;
	srand(time(NULL));
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		vet1[i] = rand()% 9 + 1;
		printf(" %d |", vet1[i]);
	}
	printf("\n");
	for(i = 0; i < n; i++){
		vet2[i] = rand()% 9 + 1;
		printf(" %d |", vet2[i]);
	}
	printf("\n");
	for(i = 0; i < n; i++){
		vet3[i] = vet1[i] * vet2[i];
		printf(" %d |", vet3[i]);
	}
}
