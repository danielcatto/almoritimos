programa
{
funcao inicio(){
	inteiro anoNasc, anoAtual, idade
	real valor1, valor2, resp
	
	valor1 = 27.98
	valor2 = 30.45
	resp = valor1 + valor2
	
	escreva("Ano atual entrada: ")
	leia(anoAtual)
	
	escreva("Ano de nascimento: ")
	leia(anoNasc)
	
	idade=anoAtual-anoNasc
	escreva("Você tem ou fará ", idade, " anos ")
	escreva("o valor somados são ", resp)
}
} 
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 316; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */