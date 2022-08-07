programa
{
	
	funcao inicio()
	{
		real massaI, massa, tempo
		inteiro cont

		escreva("Qual é a massa do material? ")
		leia(massaI)
		
		massa = massaI
		cont = 0
		faca{
			massa = 0.25 * massa
			cont++
			escreva(massa +"\n")
		}enquanto (massa >= 0.10)
		escreva(cont * 30 +" segundos")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 260; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */