#include <stdio.h>

int main()
{
	int n;
	printf("Qual o numero?");
	scanf("%d", &n);
	if (n%2 == 0)
		printf("Par");
	else if (n%2 != 0)
		printf("Impar");
return 0;
}
