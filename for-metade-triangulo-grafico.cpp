#include <iostream>
using namespace std;

int main() {
    int controle1, count = 5, count2 = 1, x=0;
    
    for (controle1 = 0; controle1 < count; controle1++)
    {   
        
        for ( x; x < count2; x++ )
        {
            cout << "*";
        }
        count2 += 1;
        x=0;
        cout << "\n";
    }


}