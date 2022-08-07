programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		inteiro opcao, n1, n2, resultado
		
		escreva("Menu de opções\n")
		escreva("1 - Somar dois numeros\n")
		escreva("2 - Raiz quadrada de um numero\n")
		escreva("Digite a opção desejada: ")
		leia(opcao)

		se (opcao == 1 ){
		escreva(" Qual o 1° numero? ")
		leia(n1)
		escreva(" Qual o 2° numero? ")
		leia(n2)

		resultado = (n1 + n2 )
		escreva(resultado)
		}
		senao se (opcao == 2 ){
		escreva("Qual o numero? ")
		leia(n1)

		resultado = mat.raiz(n1, 2)
		escreva(resultado)
		}
		senao {
			escreva("digite 1 ou 2")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 604; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */