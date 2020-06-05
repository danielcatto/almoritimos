#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
int conta, num = 1, prod = 1;
for (conta = 4; conta > 0; conta--) {
    prod = prod *num;
    num++;
    cout << "prod " << prod << "\n";
    cout << "num " << num << "\n";
    cout << "-----------------------\n";
}
cout << "Prod = "  << prod << "  num = " << num << endl;
}