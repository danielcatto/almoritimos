#include <iostream>

using namespace std;

int main()

{

  float dias, anos;

  cout << "Quantos dias você já viveu? ";

  cin >> dias;

  anos = dias / 365;

  cout << "Você já viveu " << anos << "anos.";

  if (anos>=18)

  {

    cout << "Você é maior de idade."

  }

}
