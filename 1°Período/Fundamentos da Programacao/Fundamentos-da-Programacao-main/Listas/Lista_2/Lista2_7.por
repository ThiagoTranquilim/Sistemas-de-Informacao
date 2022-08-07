programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real imc, peso, altura, altura_2

		escreva("Qual o peso? ")
		leia(peso)

		escreva("Qual a altura? ")
		leia(altura)

		altura_2 = mat.potencia(altura, 2)
		imc = peso / altura_2

		se (peso < 18.5)
			escreva("Abaixo do peso")
			senao se (imc >= 18.5 e imc <= 24.9)
				escreva("Peso normal")
					senao se (imc >= 25 e imc <= 29.9)
						escreva("Sobrepeso")
						senao se (imc >= 30 e imc <= 34.9)
							escreva("Obesidade grau I")
							senao se (imc >= 35 e imc <= 39.9)
								escreva("Obesidade grau II")
								senao
								escreva("Obesidade grau III")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 643; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */