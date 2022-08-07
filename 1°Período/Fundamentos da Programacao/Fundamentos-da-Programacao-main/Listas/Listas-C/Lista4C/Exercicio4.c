#include <stdio.h>

int main()
{
	int a, b, c, soma;
	soma = 0;
	scanf("%d%d", &a, &b);
	for(c = a; c <= b; c++)
	{
		if (c % 2 == 0){
			printf("%d\n", c);
			soma += c;
		}
	}
	printf("Soma: %d", soma);
	return 0;
}
