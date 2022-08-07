programa
{
	
	funcao inicio()
	{
		cadeia time1, time2
		inteiro placar1, placar2
		escreva("Qual o time da casa? ")
		leia(time1)

		escreva("Qual o time de fora? ")
		leia(time2)

		escreva("Quantos gols do 1 time? ")
		leia(placar1)

		escreva("Quantos glos do 2 time? ")
		leia(placar2)

		se (placar1 > placar2)
		escreva(time1 +" tem 3 pontos com a vitoria da partida")
			senao se (placar1 == placar2)
			escreva("Cada ponto tem 1 ponto")
				senao se (placar2 > placar1)
				escreva(time2 +" tem 3 pontos com a vitoria da partida")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 336; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */