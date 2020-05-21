#include<iostream>
using namespace std;
int main(){
    int horas, dias_corridos, anos_corridos;

    cout << "Informe em horas para saber quantos tempo teve inicio o conflito: ";
    cin >> horas;
    dias_corridos = horas / 24;
    anos_corridos = dias_corridos / 365;

    cout << "O Conflito iniciou há " << dias_corridos << " Dias\nOu há " << anos_corridos << " Anos\n";
}
