programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		inteiro n1, resul, opcao

		faca {
			escreva("Para calcular a raiz de um numero digite 1, caso deseja sair digite 0")
			leia(opcao)
			escolha (opcao){
			caso 1 : 
				escreva("Qual o numero: ")
				leia(n1)
				resul = mat.raiz(n1, 2)
				escreva(resul +"\n")
			pare
				
			caso 0:
			escreva("Fim do programa")
			pare
		}
		
	}enquanto (opcao != 0)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 400; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */