#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    system("clear");

    string modeloVeiculo, tipo, verificaSair = "n";
    bool sair = true;
    int selecionar, opcionais;
    float valor, valorTotal, valorIPI, valorTrava, valorAr, valorDirecao;
    float totalImposto, subTrio, subAr, subDirecao;
    
    float impostoIPI = 8, impostoValorFabrica = 2;

    while (sair)
    { 
        modeloVeiculo = "";
        valor = 0; valorTotal=0; totalImposto=0; 
        cout << "******************************************************\n \
        ******SISTEMA DE VENDAS DE AUTOMÓVEL******\n";

        cout << "Informe o modelo do veiculo: ";
        cin >> modeloVeiculo;
        
        cout << "valor base R$: ";
        cin >> valor;
        system("clear");
    
        cout << "*****Veiculo selecionado*****\n";
        cout << "modelo: " << modeloVeiculo << "\n";
        cout << "valor R$: " << valor << "\n";


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
                tipo = "Trio Eletrico\n";            
                subTrio = ((valor * impostoValorFabrica) / 100) + valorIPI ;            
                totalImposto = subTrio;
                valorTotal = valor + totalImposto;
                cout << "valor total do veiculo R$: " << valorTotal << "\n"; 
                break;
            
            case 2:
                cout << "Ar-condicionado\n";
                tipo = "Ar-Condicionado\n";            
                //calcular o imposto dos veiculos
                subAr = valor * impostoValorFabrica /100;
                totalImposto =  subAr;
                valorTotal = valor + totalImposto;
                cout << "valor total do veiculo R$: " << valorTotal << "\n";  
                break;
            
            case 3:
                cout << "Direção Hidráulica\n";
                tipo = "Direção Hidráulica\n";
                //calcular o imposto dos veiculos
                subDirecao = valor * impostoValorFabrica /100;
                totalImposto = subDirecao;
                valorTotal = valor + totalImposto;
                cout << "valor total do veiculo R$: " << valorTotal << "\n"; 
                break;

            case 4:
                cout << "Completo\n";
                tipo = "Completo\n";
                //calcular o imposto dos veiculos
                valorIPI = valor * impostoIPI / 100;
                subTrio = ((valor * impostoValorFabrica) / 100) + valorIPI ;
                subAr = valor * impostoValorFabrica /100;
                subDirecao = valor * impostoValorFabrica /100;
                totalImposto = valorIPI + subTrio + subAr + subDirecao;
                valorTotal = valor + totalImposto;
                
                break;
            
            default:
                cout << "Opção Inválida";
                break;
            }
            //fim switch opções
            system("clear");

            cout << "******************************************************\n\
    ************SISTEMA DE VENDAS DE AUTOMÓVEL************\n";
            cout << ">Veiculo selecionado\n";
            cout << "modelo: " << modeloVeiculo << "\n";
            cout << ">opcionais: " << tipo;
            cout << "valor R$: " << valor << "\n";
            cout << "Total do veiculo R$: " << valorTotal << "\n"; 
            cout << "Digite S para continular ou QUAQUER tecla para continuar\n";
            cin >> verificaSair;
            if (verificaSair == "s" || verificaSair.empty())
            {
                sair = false;
            }
            cout << "***************************************************\n";

    }
}