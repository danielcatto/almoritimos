#include <iostream>

using namespace std;

int main()

{
    int ladoA, ladoB, ladoC;

    cout <<"Informe o 1o. Lado: ";
    cin >>ladoA;

    cout <<"Informe o 2o. Lado: ";
    cin >>ladoB;

    cout <<"Informe o 3o. Lado: ";
    cin >>ladoC;

    if (ladoA == ladoB && ladoB == ladoC)
    {
        cout << "Triangulo Equilátero";

    }
    else if (ladoA == ladoB || ladoB == ladoC || ladoC == ladoA)
    {
        cout << "Triangulo Escaleno";

    }
    else if (ladoA != ladoB && ladoB != ladoC && ladoC != ladoA)
    {
        cout << "Triangulo Isosceles";
    }

}

