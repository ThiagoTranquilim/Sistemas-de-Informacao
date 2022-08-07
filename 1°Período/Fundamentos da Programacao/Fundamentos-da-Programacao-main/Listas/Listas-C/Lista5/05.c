#include <stdio.h>

int primo(int n){
	int cont;
	for(cont = 2; cont < n; cont++){
		if(n%cont ==0){
			return 0;
		}else
			return 1;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", primo(n));
	return 0;
}
