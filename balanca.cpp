#include <iostream>
using namespace std;

int main(){
    float pesoInformado, pesoMais, pesoMenos;
    int num;
    cout << "Informe seu peso em Kg ";
    cin >> pesoInformado;

    pesoMais = pesoInformado += (pesoInformado * 0.15);
    pesoMenos = pesoInformado -= (pesoInformado * 0.20);

    cout << "Peso atual: " << pesoInformado << "Kg\n" ;
    cout << "Peso se você engordar 15%: " << pesoMais << "Kg\n";
    cout << "Peso se você emagrecer 20%: " << pesoMenos << "Kg\n";
    cout << "Fim";





  cout << "Digite um numero: ";
  cin >> num;

  if (num  > 0)
  {
      num++;
      cout << num << " ";
  }
  cout << num + 1 << " ";
  if (num < 0)
  {
      num--;
      cout << num << " ";
  }
  else
     cout << num * 10 ;
}
