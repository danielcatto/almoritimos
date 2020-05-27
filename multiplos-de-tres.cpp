#include <iostream>
using namespace std;
int main(){

int multiplo3=0;
int i, numero;



for (i = 1; i <= 10; i++)
{
    cout << "Informe " << i << "º inteiro!";
    cin >> numero;
    if (numero%3 == 0){
        multiplo3+=1;
    }
}
cout << "quantidade de multiplos de " << multiplo3 << "\n";
}
