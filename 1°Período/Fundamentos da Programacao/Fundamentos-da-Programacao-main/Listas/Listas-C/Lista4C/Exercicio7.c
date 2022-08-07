#include <stdio.h>

int main()
{
	int a, b, c, n, cont;
	a= 0;
	b = 0;
	n = 1;
	scanf("%d", &c);
	for (cont = 1; cont<=c; cont++){
		b = a + n;
		a = n;
		n = b;
		printf("%d\n", b); 
	}
return 0;
}
