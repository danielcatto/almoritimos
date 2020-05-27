#include <iostream>
using namespace std;

int main() {
    int   a = 2, b = 4, x = 12, y = 11, z = 3;
    float t = 0;

    if (x < y+z){
        cout << "verdade";
        if (y != z*4 - 2){
            t = y/z;
        }
        else{
            a = y % z;
        }
    }
    else{
        b = z + y/x;
        }

}
