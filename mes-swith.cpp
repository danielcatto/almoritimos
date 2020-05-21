#include<iostream>
using namespace std;

int main(){
    int mes;
    string mesSelecionado;
    bool validado = false;

    cout << "selecione o mês de 1 Janeiro ate 12 Dezembro: ";
    cin >> mes;

    switch (mes){
    case 1: mesSelecionado = "Janeiro"; break;
    case 2: mesSelecionado = "Fevereiro"; break;
    case 3: mesSelecionado =  "Março"; break;
    case 4: mesSelecionado =  "Abril"; break;
    case 5: mesSelecionado = "Maio"; validado = true; break;
    case 6: mesSelecionado = "Junho"; break;
    case 7: mesSelecionado = "Julho"; break;
    case 8: mesSelecionado =  "Agosto"; break;
    case 9: mesSelecionado =  "Setembro"; break;
    case 10: mesSelecionado =  "Outubro"; break;
    case 11: mesSelecionado =  "Novembro"; break;
    case 12: mesSelecionado =  "Dezembro"; break;
    default: mesSelecionado = "Erro"; break;
    }

    if (mes > 0 && mes < 13){ cout << "Você selecionou " + mesSelecionado + "\n";}
    else{ cout << "Erro: informe inteiro de 1 a 12\n"; }

}
