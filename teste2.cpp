#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
   int y;
   int _testes;

  for (y = 5; y > 0; y--)

     if (y % 2 == 0)

        cout << y - 1 << " ";

     else

        cout << y + 1 << " ";

}