programa
{
	
	funcao inicio()
	{
		inteiro n, m, contagem, contagem1, tempo, tempo0, vencedor, tempo1

		escreva("Quantos competidores? ")
		leia(n)
		escreva("Qual é o numero de voltas? ")
		leia(m)

		contagem = 1
		tempo0 = 0
		vencedor = 0

		enquanto(contagem - 1 < n){
			contagem1 = 0
			tempo1 = 0
			escreva("Qual o tempo do competidor? ")
			enquanto(contagem1 < m){
				leia(tempo)
				tempo1 += tempo
				contagem1++
			}
			se (tempo1 > tempo0)
			vencedor = contagem
			senao
			tempo0 = tempo1
		contagem++
		
		}
		escreva("O vencedor é: " +vencedor)
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 268; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */