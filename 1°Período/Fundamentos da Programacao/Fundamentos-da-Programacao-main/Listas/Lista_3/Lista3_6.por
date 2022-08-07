programa
{
	
	funcao inicio()
	{
		inteiro numero, menor, maior

		escreva("Qual o numero? ")
		leia(numero)

		menor = numero
		maior = numero

		faca {
			se (numero < menor)
			menor = numero

			senao se (numero > maior)
			maior = numero

			escreva("Qual o numero? ")
			leia(numero)
		}enquanto (numero != 0)

	escreva("O maior e: " +maior +"\n")
	escreva("O menor e: " +menor)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 389; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */