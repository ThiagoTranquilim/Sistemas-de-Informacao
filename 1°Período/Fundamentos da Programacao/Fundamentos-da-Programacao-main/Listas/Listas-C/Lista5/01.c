#include <stdio.h>

int ehPar(int num){
	if(num%2==0){
		return 1;
	}else
		if(num%2!=0){
			return 0;
		}
}

int main(){
	int n, num, cont, soma = 0;
	scanf("%d", &n);
	for(cont = 1; cont<= n; cont++){
		scanf("%d", &num);
		if(ehPar(num)== 1)
			soma = soma + num;
	}
	printf("%d\n", soma);
}
