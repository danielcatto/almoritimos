#include<iostream>
using namespace std;
int main(){
    int hora;
    char teste;

    cout << "Informe a hora atual: ";
    cin >> hora;

    if (hora >= 0 && hora < 6){
	cout << "Boa noite\nAgora são " << hora << "horas\n";
    }
    if (hora >= 6 && hora <= 12){
        cout << "bom dia\nAgora são " << hora << "horas\n";
    }

    if (hora >= 13 && hora <= 18){
    	cout << "Boa tarde\nAgora são " << hora << "horas\n";
    }

    if (hora >= 19 && hora <= 23){
    	cout << "Boa noite\nAgora são " << hora << "horas\n";
    }
    if (hora >= 24){
    	cout << "Horario informado não é valido\nInforme um horário válido\n";
    }
    if (hora < 0){
    	cout << "Números negativos não são permitidos\nInforme um horário válido\n";
    }

teste = "11"

int idades[]={5,16,27,19};
}
