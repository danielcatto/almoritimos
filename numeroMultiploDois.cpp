#include<iostream>
using namespace std;

int main(){

    int numero, resultado;

    cout << "Verificar se um número  e multiplo de dois(2)\n";
    cin >> numero;

    resultado = numero%2;

    if (resultado == 0){
        cout << numero << " é multiplo de dois\n";
    }
    else{
        cout << numero << " não é multiplo de dois\n";
    }


}
