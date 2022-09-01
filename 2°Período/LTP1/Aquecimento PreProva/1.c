#include <stdio.h>
#include <stdlib.h>

int faseDNA(char dna[]){
	int i, a = 0;
	for(i = 0; i < 100; i++){
		if(dna[i] == 'A' && dna[i+1] == 'T' && dna[i+2] == 'G'){
			a++;
		}
	}
	if(a != 0){
		return 1;
	}else
		return 2;
}

int main(){
	char dna[100];
	int a;
	
	gets(dna);
	fflush(stdin);
	a = faseDNA(dna);
	if(a == 1){
		printf("Existe");
	}if(a == 2){
		printf("Inexistente");
		}
	
}