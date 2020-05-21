programa

{

  funcao inicio()

  {

    real num1, num2, resultado, op

    escreva("Informe o 1o. número: ")

    leia(num1)

    escreva("Informe o 2o. número: ")

    leia(num2)

    escreva("------------------------------------\n")

    escreva("Escolha a operação matemática: \n")

    escreva("1 - Adição\n")

    escreva("2 - Subtração\n")

    escreva("3 - Divisão\n")

    escreva("4 - Multiplicação\n")

    escreva("Opção: ")

    leia(op)

    se (op==1)

    {

      resultado=num1+num2

      escreva(num1, " + ", num2, " = ", resultado)

    }

    senao se (op==2)

    {

      resultado=num1-num2

      escreva(num1, " - ", num2, " = ", resultado)

    }

    senao se (op==3)

    {

      resultado=num1/num2

      escreva(num1, " / ", num2, " = ", resultado)

    }

    senao se (op==4)

    {

      resultado=num1*num2

      escreva(num1, " * ", num2, " = ", resultado)

    }

    senao

    {

      escreva("Opção inválida!!!")

    }

  }

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 974; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */