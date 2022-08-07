#include<stdio.h>

int pedagio(int c, int d, int k, int p){
	int custo, lp;
	lp = c/d;
	custo = (c*k)+(lp*p);
	return custo;
}

int main(){
	int c, d, k, p;
	scanf("%d%d%d%d", &c, &d, &k, &p);
	printf("%d", pedagio(c, d, k, p));
	return 0;
}
