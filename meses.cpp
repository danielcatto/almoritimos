programa

{

  funcao inicio()

  {

    inteiro numMes

    cadeia mesExtenso=""

    escreva("Informe o número do mês: ")

    leia(numMes)

    se (numMes==1)

    {

      mesExtenso="janeiro"

    }

    senao se (numMes==2)

    {

      mesExtenso="fevereiro"

    }

    senao se (numMes==3)

    {

      mesExtenso="março"

    }

    senao se (numMes==4)

    {

      mesExtenso="abril"

    }

    senao se (numMes==5)

    {

      mesExtenso="maio"

    }

    senao se (numMes==6)

    {

      mesExtenso="junho"

    }

    senao se (numMes==7)

    {

      mesExtenso="julho"

    }

    senao se (numMes==8)

    {

      mesExtenso="agosto"

    }

    senao se (numMes==9)

    {

      mesExtenso="setembro"

    }

    senao se (numMes==10)

    {

      mesExtenso="outubro"

    }

    senao se (numMes==11)

    {

      mesExtenso="novembro"

    }

    senao se (numMes==12)

    {

      mesExtenso="dezembro"

    }

    senao

    {

      escreva("Mês inválido!!!")

    }

    escreva("O número ", numMes, " equivale ao mês de ", mesExtenso)

  }

}
