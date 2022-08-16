#include <stdio.h>
#include <time.h>

int main(){
	int vet[100], n, p, l, i;
	srand(time(NULL));
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		vet[i] = rand()%9 + 1;
		printf(" %d |", vet[i]);
	}
	scanf("%d", &p);
		for(i = 0; i < n; i++){
			if(p == vet[i]){
				l++;
			}
		}
	printf("%d", l);
}