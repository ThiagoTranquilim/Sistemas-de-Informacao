programa
{
	
	funcao inicio()
	{
		real n1

		escreva("Qual numero deverá ser analisado? ")
		leia(n1)

		se (n1 > 0){
		escreva(n1 +" é positivo")
		}
			senao se (n1 == 0){
			escreva(n1 +" é nulo")
			}
			senao{
			escreva(n1 +" é negativo")
			}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 170; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */