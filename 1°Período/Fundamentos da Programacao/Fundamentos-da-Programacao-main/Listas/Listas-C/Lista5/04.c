#include <stdio.h>

int fib(int n){
	int cont, p=1, m=1, o;
	for(cont = 3; cont <= n; cont = cont+1){
		o = p + m;
		p = m;
		m = o;
	}
	return m;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fib(n));
	return 0;
}
