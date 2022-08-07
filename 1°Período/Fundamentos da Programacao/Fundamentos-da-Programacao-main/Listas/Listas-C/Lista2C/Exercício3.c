#include <stdio.h>

int main()
{
	int a, b;
	printf("Qual o numero a e b?");
	scanf("%d%d", &a, &b);
	
	if (a>b)
		printf("%d %d", b, a);
	else if (b>a)
		printf("%d %d", a, b);
}
