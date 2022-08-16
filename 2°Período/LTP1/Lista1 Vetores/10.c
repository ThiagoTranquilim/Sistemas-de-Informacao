#include <stdio.h>
#include <time.h>

int main(){
	int vet[100], i, n, a, b, c, d, e, f;
	a = b = c = d = e = f = 0;
	srand(time(NULL));
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		vet[i] = rand()%5 + 1;
		printf(" %d |", vet[i]);
		if(vet[i] == 1){
			a++;
		}else
			if(vet[i] == 2){
				b++;
			}else
				if(vet[i] == 3){
					c++;
				}else
					if(vet[i] == 4){
						d++;
					}else
						if(vet[i] == 5){
							e++;
						}else
							if(vet[i] == 6){
								f++;
							}

	}
	printf("\n1 - %d\n", a);
	printf("2 - %d\n", b);
	printf("3 - %d\n", c);
	printf("4 - %d\n", d);
	printf("5 - %d\n", e);
	printf("6 - %d\n", f);
}