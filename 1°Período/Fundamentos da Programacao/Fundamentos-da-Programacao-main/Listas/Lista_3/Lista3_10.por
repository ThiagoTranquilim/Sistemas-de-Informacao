programa
{
	
	funcao inicio()
	{
		real alturaM, alturaF, media_alturaM, media_alturaF, media_idade
		cadeia nome
		inteiro idade, opcao, sexo, contmasculino, contfeminino

		media_alturaM = 0.0
		media_alturaF = 0.0
		media_idade = 0.0
		contmasculino = 0
		contfeminino = 0
		faca {
			escreva("Qual no nome do atleta? ")
			leia(nome)
			escreva("Qual a idade do atleta? ")
			leia(idade)
			media_idade += idade
			escreva("Qual o sexo do atleta? Masculino - 1 e Feminino - 0 ")
			leia(sexo)

			se (sexo == 1) {
			escreva("Qual a altura do atleta? ")
			leia(alturaM)
			media_alturaM += alturaM
			contmasculino++
			}

			se (sexo == 0){
			escreva("Qual a altura do atleta? ")
			leia(alturaF)
			media_alturaF += alturaF
			contfeminino++
			}

			escreva("Quer continuar entrando com dados? Sim - 2 e Nao - 1 ")
			leia(opcao)
		}enquanto (opcao !=1)
		escreva("A media da altura masculina é " +media_alturaM / contmasculino)
		escreva("\nA media de altura feminina é " +media_alturaF / contfeminino)
		escreva("\nA media das idades é " + media_idade / (contmasculino + contfeminino))
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 826; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */