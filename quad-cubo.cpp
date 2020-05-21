#include <iostream>
using namespace std;
int main(){
    int valorInt, respQuradrado, respCubo;
    cout << "informe um número inteiro, por favor! ";
    cin >> valorInt;
    respQuradrado = valorInt * valorInt;
    respCubo = valorInt * valorInt * valorInt;
    cout << "Resposta\n";
    cout << "O quadrado de " << valorInt << " é " << respQuradrado << "!\n";
    cout << "O Cubo de " << valorInt << " é " << respCubo << "!\n";
}
