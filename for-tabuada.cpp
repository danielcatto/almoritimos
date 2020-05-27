#include <iostream>
using namespace std;
int main()
{
int num, contador, res;
cout <<"Você deseja ver a tabuada de que número? ";
cin >>num;
for (contador=0;contador<=10;contador++)
{
    res = num * contador;
    cout <<num<<" x "<<contador<<" = "<<res<<"\n";
    if (res == 15){
        break;
    }
}

}