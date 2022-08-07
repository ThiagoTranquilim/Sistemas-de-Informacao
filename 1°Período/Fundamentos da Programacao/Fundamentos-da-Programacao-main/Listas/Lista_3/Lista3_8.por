programa
{
	
	funcao inicio()
	{
		inteiro matricula, opcao
		real n1, n2, media

		escreva("Deseja continuar com a entrada de dados? Sim - 1 e Nao - 2 ")
		leia(opcao)

		escolha(opcao){
			caso 1: escreva("Qual a sua matricula? ")
				leia(matricula)
				escreva("Qual a nota 1? ")
				leia(n1)
				escreva("Qual a nota 2? ")
				leia(n2)
				limpa()
				media=(n1+n2)/2

				se (media >=6)
				escreva("Aprovado\n")
				senao se (media <6)
				escreva("Reprovado")
			pare
			caso 2: escreva("Finalizacao do programa")
			pare
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 534; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */