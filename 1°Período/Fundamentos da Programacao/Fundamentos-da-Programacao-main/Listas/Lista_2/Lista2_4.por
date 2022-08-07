programa
{
	
	funcao inicio()
	{
		real salario_bruto, valor_maximo, prestacao
		escreva("Qual o salario bruto? ")
		leia(salario_bruto)

		escreva("Qual a prestacao? ")
		leia(prestacao)

		valor_maximo = 0.3*salario_bruto
		se (prestacao > valor_maximo) {
			escreva("Nao sera possivel efetuar a prestacao desejada")
		}	senao
		escreva("A prestacao podera ser efetuada")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 378; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */