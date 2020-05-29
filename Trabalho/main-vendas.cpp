#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("clear");
    int selecionar, opcionais;
    float valor, valorTotal, valorIPI, valorTrava, valorAr, valorDirecao;
    float totalImposto, subTrio, subAr, subDirecao;
    
    float impostoIPI = 8, impostoValorFabrica = 2;

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
        valor = 39999.90;
        cout << "> R$" << valor << "\n";

        cout << "*****Opcionais do veículo*****\n";
        cout << "1 - Trio Elétrico\n";
        cout << "2 - Ar-Condicionado\n";
        cout << "3 - Direção Hidráulica\n";
        cout << "4 - Completo\n>>";

        cin >> opcionais;
        //switch de opções
        switch (opcionais)
        {
        case 1:
            cout << "Trio Eletrico\n";
            subTrio = ((valor * impostoValorFabrica) / 100) + valorIPI ;
            
            totalImposto = subTrio;
            valorTotal = valor + totalImposto;
            cout << "valor total do veiculo R$: " << valorTotal << "\n"; 
            break;
        
        case 2:
            cout << "Ar-condicionado\n";
            //calcular o imposto dos veiculos
            subAr = valor * impostoValorFabrica /100;
            totalImposto =  subAr;
            valorTotal = valor + totalImposto;
            cout << "valor total do veiculo R$: " << valorTotal << "\n";  
            break;
        
        case 3:
            cout << "Direção Hidráulica\n";
            //calcular o imposto dos veiculos
            subDirecao = valor * impostoValorFabrica /100;
            totalImposto = subDirecao;
            valorTotal = valor + totalImposto;
            cout << "valor total do veiculo R$: " << valorTotal << "\n"; 
            break;

        case 4:
            cout << "Completo\n";
            //calcular o imposto dos veiculos
            valorIPI = valor * impostoIPI / 100;
            subTrio = ((valor * impostoValorFabrica) / 100) + valorIPI ;
            subAr = valor * impostoValorFabrica /100;
            subDirecao = valor * impostoValorFabrica /100;
            totalImposto = valorIPI + subTrio + subAr + subDirecao;
            valorTotal = valor + totalImposto;
            cout << "valor total do veiculo R$: " << valorTotal << "\n"; 
            break;
        
        default:
            cout << "Opção Inválida";
            break;
        }
        //fim switch opções
        break;
    case 2:
    {
        system("clear");
        cout << "***Selecionado***\n";
        cout << "> 2 - VW Gol\n";
        valor = 39999.90;
        cout << "> R$" << valor << "\n";

        cout << "*****Opcionais do veículo*****\n";
        cout << "1 - Trio Elétrico\n";
        cout << "2 - Ar-Condicionado\n";
        cout << "3 - Direção Hidráulica\n";
        cout << "4 - Completo\n>>";

        cin >> opcionais;
        //switch de opções
        switch (opcionais)
        {
        case 1:
            cout << "Trio Eletrico\n";
            subTrio = ((valor * impostoValorFabrica) / 100) + valorIPI ;
            
            totalImposto = subTrio;
            valorTotal = valor + totalImposto;
            cout << "valor total do veiculo R$: " << valorTotal << "\n"; 
            break;
        
        case 2:
            cout << "Ar-condicionado\n";
            //calcular o imposto dos veiculos
            subAr = valor * impostoValorFabrica /100;
            totalImposto =  subAr;
            valorTotal = valor + totalImposto;
            cout << "valor total do veiculo R$: " << valorTotal << "\n";  
            break;
        
        case 3:
            cout << "Direção Hidráulica\n";
            //calcular o imposto dos veiculos
            subDirecao = valor * impostoValorFabrica /100;
            totalImposto = subDirecao;
            valorTotal = valor + totalImposto;
            cout << "valor total do veiculo R$: " << valorTotal << "\n"; 
            break;

        case 4:
            cout << "Completo\n";
            //calcular o imposto dos veiculos
            valorIPI = valor * impostoIPI / 100;
            subTrio = ((valor * impostoValorFabrica) / 100) + valorIPI ;
            subAr = valor * impostoValorFabrica /100;
            subDirecao = valor * impostoValorFabrica /100;
            totalImposto = valorIPI + subTrio + subAr + subDirecao;
            valorTotal = valor + totalImposto;
            cout << "valor total do veiculo R$: " << valorTotal << "\n"; 
            break;
        
        default:
            cout << "Opção Inválida";
            break;
        }
        //fim switch opções
    }
    
    default:
        break;
    }

    cout << "\n\n\n";
}