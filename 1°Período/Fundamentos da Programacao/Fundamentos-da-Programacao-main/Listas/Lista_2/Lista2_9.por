programa
{
	
	funcao inicio()
	{
		real lado1, lado2, lado3
		escreva("Qual o 1° lado? ")
		leia(lado1)
		escreva("Qual o 2° lado? ")
		leia(lado2)
		escreva("Qual o 3° lado? ")
		leia(lado3)

		se (lado1 == lado2 e lado2 == lado3)
		escreva("Triangulo equilatero")
			senao se (lado1 == lado2 ou lado2 ==lado3 ou lado1 ==lado3)
			escreva("Triangulo Isosceles")
				senao se (lado1 != lado2 e lado2 != lado3)
				escreva("Triangulo escaleno")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 443; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */