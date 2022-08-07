programa
{
	
	funcao inicio()
	{
		inteiro idade, i18, i60

		i18 = 0
		i60 = 0
		faca{
			escreva("Digite a idade: ")
			leia(idade)
			se (idade <= 18 e idade > 0)
			i18++
			senao se (idade >= 60)
			i60++
		}enquanto (idade >= 0)
		escreva("A quantidade de menor de idade é: " +i18)
		escreva("A quantidada de maior de 60 anos é: " +i60)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 347; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */