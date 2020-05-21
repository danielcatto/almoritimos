#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "ptb");
    float tempF, tempC;
    cout << "Temperatura em Fahrenheit: ";
    cin >> tempF;
    tempC=(tempF-32)/1.8;
    cout << "Temperatura em graus Célsius: " << tempC << "\n";
}
