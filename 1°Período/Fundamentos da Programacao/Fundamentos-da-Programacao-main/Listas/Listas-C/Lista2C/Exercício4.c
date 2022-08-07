#include <stdio.h>

int main()
{
	int prestacao, salario_bruto, valor_max;
	printf("Qual e o salario e a prestacao? ");
	scanf("%d%d", &salario_bruto, &prestacao);
	
	if (prestacao <= salario_bruto * 0.3)
		printf("Prestacao concedida");
	else
		printf("Prestacao negada");
	return 0;
}
