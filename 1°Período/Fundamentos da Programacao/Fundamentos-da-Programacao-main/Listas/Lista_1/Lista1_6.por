programa
{
	
	funcao inicio()
	{
		real prestacao, valor, taxa, tempo
		escreva("Qual o valor da prestacao? ")
		leia(valor)
		escreva("Qual o valor da taxa? ")
		leia(taxa)
		escreva("Quanto tempo o valor esta atrasado? ")
		leia(tempo)
		prestacao=valor+(valor*(taxa/100))*tempo
		escreva("O valor da prestacao atual é: " +prestacao)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 335; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */