#include <iostream>
using namespace std;

int main(){
    int checar = 0, contador = 1, vezes = 0;
    int maior = -900000000;
    cout << "verificar qual o maior numero inteiro: \n";
    cout << "Informe quatas vezes será testado!\n";
    cin >> vezes;
    for (contador = 0; contador < vezes; contador++)
    {
        cout << "informe um número inteiro! \n";
        cin >> checar;
        if (checar > maior){
            maior = checar;
            cout << "if";
        }else{
            cout << "else";
        }

    }
    cout << "O maior numero digitado foi " << maior;


}