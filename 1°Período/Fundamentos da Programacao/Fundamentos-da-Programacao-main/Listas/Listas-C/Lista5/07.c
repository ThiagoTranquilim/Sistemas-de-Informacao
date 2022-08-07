#include <stdio.h>

int valor(int n){
	int v, cont, soma;
	soma = 0;
	for(cont = 1; cont <=n; cont++){
		scanf("%d", &v);
		soma = soma + v;
	}
	return soma;
}
int main(){
	int n,res;
	scanf("%d", &n);
	res=valor(n);
	printf("%d", res);
	return 0;
}
