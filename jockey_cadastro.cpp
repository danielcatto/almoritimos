#include <iostream>

using namespace std;

int main()

{
    int idade;
    bool verifica = false;
    string categoria;

    cout <<"Olá competidor, favor informar sua idade";
    cin >>idade;

    if (idade >= 7 && idade <= 12)
    {
        categoria = "Infantil";
    }
    else if (idade >=13 && idade <= 17)
    {
        categoria = "Juvenil";
    }
    else if (idade >=18 && idade <= 49)
    {
        categoria = "Adulto";
    }

    else if (idade >=50)
    {
        categoria = "Senior";
    }

    else
    {
        verifica = true;
        categoria = "Erro";

    }
    if (verifica == true)
    {
        cout << "Indade Inválida";
    }
    else
    {

        cout << "Sua categoria será " + categoria + "\n";
    }

}

