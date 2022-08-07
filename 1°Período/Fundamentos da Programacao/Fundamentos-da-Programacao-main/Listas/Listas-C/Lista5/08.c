#include <stdio.h>

float alt(float n,int s){
	float p;
	if(s == 1){
		p = (72.7*n)-58;
	}else
		if(s == 2){
			p = (62.1*n)-44.7;
	}
	return p;
}

int main(){
	float n, v, res;
	scanf("%f%f", &n, &v);
	res = alt(n, v);
	printf("%.2f", res);
	return 0;
}
