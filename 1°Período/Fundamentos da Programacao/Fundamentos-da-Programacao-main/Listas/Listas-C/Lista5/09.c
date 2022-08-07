#include <stdio.h>

int nota(float n, float o, float b, float g){
	float media;
	media = (n + o +b)/3;
	if(media >= 6 && g >=75){
		return 1;
	}else
		if(media < 6 && media >=4 && g>=75){
			return 2;
		}else
			if(media<4 || g<75){
				return 3;
			}
}
int main(){
	float n, o, b, g;
	scanf("%f%f%f%f", &n, &o, &b, &g);
	printf("%d", nota(n, o, b, g));
	return 0;
}
