#include <iostream>
using namespace std;
int main()
{
string mensagem;
int anoAtual, anoNasc, idade;
std::cout <<"Ano atual: ";
cin >> anoAtual;
cout <<"Ano de nascimento:";
cin >> anoNasc;
idade=anoAtual-anoNasc;
cout <<"Você tem ou fará " << idade << " anos.\n";
}