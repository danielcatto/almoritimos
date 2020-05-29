#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("clear");
    int selecionar, opcionais;
    float valor, valorTotal, valorTrava, valorIPI, arCondicionado, tabela[5][2];

    cout << "******************************************************\n \
    ******SISTEMA DE VENDAS DE AUTOMÓVEL******\n";

    cout << "MENU de Opções\n";
    cout << "1 - VW Up\n";
    cout << "2 - VW Gol\n";
    cout << "3 - VW Fox\n";
    cout << "4 - VW Polo\n>>";

    cin >> selecionar;
    switch (selecionar)
    {
    case 1:
        system("clear");
        cout << "***Selecionado***\n";
        cout << "> 1 - VW Up\n";
        //valor = 39999.90;
        cout << "> R$" << valor << "\n";

        cout << "*****Opcionais do veículo*****\n";
        cout << "1 - Trio Elétrico\n";
        cout << "2 - Ar-Condicionado\n";
        cout << "3 - Direção Hidráulica\n";
        cout << "4 - Completo\n>>";

        cin >> opcionais;
        switch (opcionais)
        {
        case 1:
            cout << "Trio Eletrico\n";
            
            valorTrava = (valor * 2) / 100;
            valorIPI = (valor * 8 / 100);
            //cout << valorTrava << "\n";
            //cout << valorIPI << "\n";
            valorTotal = valor + valorTrava + valorIPI;
            cout << "Valor total do carro R$: " << valorTotal << "\n";
            break;
        
        case 2:
            cout << "Ar-condicionado\n";
            
            valorTrava = (valor * 2) / 100;
            valorTotal = valor + valorTrava;
            cout << "Valor total do carro R$: " << valorTotal << "\n";
            break;
        
        case 3:
            cout << "Direção Hidráulica\n";
            
            valorTrava = (valor * 2) / 100;
            valorTotal = valor + valorTrava;
            cout << "Valor total do carro R$: " << valorTotal << "\n";
            break;

        case 4:
            cout << "Completo\n";
            valorTrava = (valor * 2) / 100;
            valorIPI = (valor * 8 / 100);

            valorTotal = valor + valorTrava + valorIPI;
            cout << "Valor total do carro R$: " << valorTotal << "\n";
            break;
        
        default:
            cout << "Opção Inválida";
            break;
        }

        break;
    
    default:
        break;
    }

    cout << "\n\n\n";
}