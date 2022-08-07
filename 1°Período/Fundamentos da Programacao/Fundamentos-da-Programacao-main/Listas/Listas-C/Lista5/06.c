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
	int n, x, v;
	x = 0;
	scanf("%d", &v);
	for(n = 2; n <=v; n++){
	if(primo(n) == 1){
		x++;
	}
	}
	printf("%d", x);
	return 0;
}
