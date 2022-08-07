programa
{
	inclua biblioteca Util --> u
	funcao inicio()
	{
		inteiro n1, n2, n3
		n3 = 0
		faca{
			escreva("Qual o numero: ")
			leia(n2)
			n1 = Util.sorteia(0, 20)
			n3++
		}enquanto(n1!=n2)
		escreva("Numero sorteado: " +n1)
		
		escreva("\n2Tentativas: " +n3)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 236; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */