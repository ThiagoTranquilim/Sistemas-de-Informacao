#include <stdio.h>

int pot(int n, int m){
	int cont, res=1;
	for(cont = 1; cont <= m; cont++){
		res *= n;
	}
	return res;
}
int main(){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", pot(a, b));
	return 0;
}
