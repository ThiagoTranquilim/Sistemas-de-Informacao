#include <stdio.h>

int main()
{
	int nota1, nota2, nota3;
	float media;
	printf("Qual sao as notas? ");
	scanf("%d%d%d", &nota1, &nota2, &nota3);
	media = (nota1+nota2+nota3)/3;
	
	if (media >= 8 && media <= 10)
		printf("Nota a");
	else if (media < 8 && media >= 7)
	printf("Nota b");
		else if (media < 7 && media >= 6)
		printf("Nota c");
			else if ( media < 6 && media >= 5)
			printf("Nota d");
				else
				printf("Nota e");
		
}
