#include <stdio.h>
#include <string.h>

int main(){
	char vet[1000];
	int i, n, vet2[1000];
	
	gets(vet);
	n = strlen(vet);
	
	for(i = 1; i < n; i++){		
		if(vet[i] != 'p' && vet[i-1] == 'p'){
		printf("%c", vet[i]);
		}else
			if(vet[i] == 'p' && vet[i-1] == 'p' && vet[i+1] == 'p'){
				printf("%c", vet[i]);
			}else
				if(vet[i] == ' '){
					printf("%c", vet[i]);
				}
	}
	
}