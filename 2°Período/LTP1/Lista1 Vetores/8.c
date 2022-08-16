#include <stdio.h>
#include <string.h>

int main(){
	int d, i, s;
	char vet[100], a[100];
	gets(vet);
	d = strlen(vet);
	s = d - 1;
	
	for(i = 0; i < d; i++){
		a[i] = vet[s];
		s--;
	}
	printf("%s", a);
}