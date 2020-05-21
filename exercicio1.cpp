#include<iostream>
using namespace std;
int main(){
    int x = 4, y = 14, t;
    float z;
    if( x < y ) { t=x; x=y; y=t;}
    z = (x % y) / y;
    cout << x << " " << y << " " << z ;
}
