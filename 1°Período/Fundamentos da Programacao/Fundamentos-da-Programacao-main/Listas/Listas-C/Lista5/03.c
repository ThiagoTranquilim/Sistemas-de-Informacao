#include <stdio.h>

int fat(int n){
	int fat;
	for(fat = 1; n > 1; n--){
		fat = fat*n;
	}
	return fat;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fat(n));
	return 0;
}
