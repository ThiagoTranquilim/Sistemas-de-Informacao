programa
{
	
	funcao inicio()
	{
		real tempo, vm, distancia, litrosUsados

		escreva("Quanto tempo durou a viagem em horas? ")
		leia(tempo)
		escreva("Qual foi a velocidade media durante a viagem em km? ")
		leia(vm)
		distancia=tempo*vm
		litrosUsados=distancia/15
		escreva("A distancia percorrida foi de: " +distancia)
		escreva("\n" +"A quantidade de litros usados é de: " +litrosUsados)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 322; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */