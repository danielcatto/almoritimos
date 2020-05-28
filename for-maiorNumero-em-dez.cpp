#include <iostream>
using namespace std;

int main(){
    int checar = 0, contador, vezes = 0;
    int maior = -900000000;
    cout << "verificar qual o maior numero inteiro: \n";
    cout << "Informe quatas vezes será testado!\n";
    cin >> vezes;
    cout << "\n";
    for (contador = 1; contador <= vezes; contador++)
    {
        cout << "informe o " << contador << "º numero! \n";
        cin >> checar;
        if (checar > maior){
            maior = checar;   
        }

    }
    cout << "O maior numero digitado foi " << maior << "\n\n";


}