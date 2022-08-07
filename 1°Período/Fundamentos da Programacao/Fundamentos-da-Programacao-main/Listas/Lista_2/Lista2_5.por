programa
{
	
	funcao inicio()
	{
		real n1, n2, n3, media
		escreva("Qual foi sua nota 1? ")
		leia(n1)

		escreva("Qual foi sua nota 2? ")
		leia(n2)

		escreva("Qual foi sua nota 3? ")
		leia(n3)

		media = (n1 + n2 + n3) / 3

		se (media >= 8 e media <=
		10) {
			escreva(" Parabens A ")
		}
		senao se (media >= 7 e media < 8) {
			escreva(" B ")
		}
		senao se (media >= 6 e media < 7) {
			escreva(" C ")
		}
		senao se (media >= 5 e media < 6) {
			escreva(" D ")
		}
		senao
			escreva(" E ")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 259; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */