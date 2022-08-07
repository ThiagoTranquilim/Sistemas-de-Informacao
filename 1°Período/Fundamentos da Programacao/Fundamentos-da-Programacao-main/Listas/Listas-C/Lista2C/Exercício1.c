#include <stdio.h>

int main()
{
	int a;
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	if (a > 0)
		printf("Positivo");
	else if (a < 0)
		printf("Negativo");
	else
		printf("Nulo");
return 0;
}
