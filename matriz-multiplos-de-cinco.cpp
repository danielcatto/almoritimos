#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int mat_num[3][4] = { {0,5,2,3},{5,6,50,8},{10,11,12,13} };
    int multiplo = 0, checar = 0;

    for(int lin = 0; lin < 3; lin++)
    {
        
        for(int colu = 0; colu < 4; colu++)
        {
            checar = mat_num[lin][colu] % 5;
           if (checar == 0)
           {
               multiplo += 1;
               cout << mat_num[lin][colu] << " é \n" ;
           }
           else
           {
               cout << mat_num[lin][colu] << " não é \n" ;
           }
        }  
    }
    cout << "Total de " << multiplo << "\n";
}
