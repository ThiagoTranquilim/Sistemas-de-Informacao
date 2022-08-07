programa
{
	
	funcao inicio()
	{
		inteiro idade

		escreva("Qual a idade? ")
		leia(idade)

		se (idade < 16)
		escreva("não é possivel fazer o título eleitoral")
			senao se (idade >=18 e idade < 65)
			escreva("Eleitor obrigatorio")
				senao se (idade < 18 e idade >= 16 ou idade > 65)
				escreva("Eleitor facultativo")
			
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 327; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */