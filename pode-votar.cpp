#include<iostream>
using namespace std;

int main(){
    int anoAtual, anoNasc, idade;
    cout << "Verificar Idade do Cidadão\n";
    cout << "Informe o ano atual\n";
    cin >> anoAtual;
    cout << "Informe o ano de seu nascemento\n";
    cin >> anoNasc;
    idade = anoAtual - anoNasc;
    cout << "Você tem " << idade << " anos\n";
    if (idade >= 16){
        cout << "Você pode votar nas próximas eleições! :D\n";
    }
    else{
        cout << "Sua idade nao permite que você vote na proxima eleiçao \n";
    }

}
