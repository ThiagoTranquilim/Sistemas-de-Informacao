programa
{
	
	funcao inicio()
	{
		real media1, media2, soma1, soma2
		inteiro n1, opcao, m1, m2
		soma1 = 0
		soma2 = 0
		m1 = 0
		m2 = 0
		faca {
			escreva("Digite 1 para conta e -1 para sair\n")
			leia(opcao)
			escolha (opcao){
			caso 1:
				escreva("Digite o numero pertencente a media\n")
				leia(n1)
				se (n1 % 2 == 0){
				soma1 += n1
				m1++}
				senao se (n1 % 2 !=0){
				soma2 += n1
				m2++}
			caso -1:
				escreva("Acabou a soma das medias\n")
			}
		}
		enquanto (opcao > 0)
		media1 = soma1/m1
		media2 = soma2/m2
		escreva("A media dos numeros pares é: " +media1)
		escreva("\nA media dos numeros impares é: " +media2)
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 388; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */