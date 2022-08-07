programa
{
	
	funcao inicio()
	{
		inteiro consumo, preco_inicial, preco, resto

		escreva("Qual o m³?")
		leia(consumo)
		preco_inicial = 7

		se (consumo <= 10){
		escreva(preco_inicial)
		}
		senao se (consumo >= 11 e consumo <= 30){
		resto = consumo - 10
		preco = (resto*1) + preco_inicial
		escreva(preco)
		}
		senao se (consumo >= 31 e consumo <= 100){
		resto = consumo - 30
		preco = (resto*2) + 20 + preco_inicial
		escreva(preco)
		}
		senao se (consumo >=101){
		resto = consumo - 100
		preco = (resto*5) + 20 + 140+ preco_inicial
		escreva(preco)
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 565; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */