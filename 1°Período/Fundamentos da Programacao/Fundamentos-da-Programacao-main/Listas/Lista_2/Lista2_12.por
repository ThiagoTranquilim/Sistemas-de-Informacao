programa
{
	
	funcao inicio()
	{
		inteiro p1, p2, p3

		escreva("qual a pontuacao do 1° jogador? ")
		leia(p1)
		escreva("qual a pontuacao do 2° jogador? ")
		leia(p2)
		escreva("qual a pontuacao do 3° jogador? ")
		leia(p3)

		se (p1>p2 e p1<p3 ou p1>p3 e p1<p2)
		escreva(p1)
		senao se (p2>p1 e p2<p3 ou p2>p3 e p2<p1)
		escreva(p2)
		senao se (p3>p1 e p3<p2 ou p3>p2 e p3<p1)
		escreva(p3)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 394; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */