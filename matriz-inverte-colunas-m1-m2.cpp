#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int M1[4][4], M2[4][4], numero;

    cout << "invertendo matriz Linha vira coluna, Coluna vira linha\n";
    cout << "Veja a nova matriz\n";


    for (int lin = 0; lin <= 3; lin++)
    {
        for (int col = 0; col <= 3; col++)
        {   
            cout << "insira um numero na matriz: ";
            cin >> numero;
            M1[lin][col] = numero;
        }
        cout << "\n";
        
    }
    
    for (int lin = 0; lin <= 3; lin++)
    {
        for (int col = 0; col <= 3; col++)
        {
            M2[col][lin] = M1[lin][col];
        }
        cout << "\n";
        
    }


    for (int lin = 0; lin <= 3; lin++)
    {
        for (int col = 0; col <= 3; col++)
        {
            cout << M2[lin][col] << " ";
        }
        cout << "\n";
        
    }
    

    //system("clear");
    
}
