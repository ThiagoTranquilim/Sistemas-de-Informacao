programa
{
	
	funcao inicio()
	{
		inteiro mes1, mes2, mes3, mes4, quota, res1, res2, res3, usado1, usado2, usado3

		escreva("Digite a quota inicial: ")
		leia(quota)

		escreva("Digite os megabytes usados no primeiro mes: ")
		leia(usado1)
		
		mes1 = quota
		res1 = mes1 - usado1
		
		escreva("Digite os megabytes usados no segundo mes: ")
		leia(usado2)

		mes2 = quota + res1
		res2 = mes2 - usado2

		escreva("Digite os megabytes usados no terceiro mes: ")
		leia(usado3)

		mes3 = quota + res2
		res3 = mes3 - usado3

		mes4 = quota + res3
		escreva("A quantidade de megabyte total para o quarto mes é de ", +mes4)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 621; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */