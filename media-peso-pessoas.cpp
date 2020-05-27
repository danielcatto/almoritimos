#include <iostream>

using namespace std;
int main()
{
int controle = 0, idade;
float peso = 1, totalPeso, totalIdade, mediaPeso, mediaIdade;

cout << "******Informe a idade e o peso do cidadão!******\n";

while (peso > 0)
{   
    
    
    cout << "peso: ";
    cin >> peso;

    cout << "idade: ";
    cin >> idade;
    

    totalPeso += peso;
    totalIdade += idade;
    
    if (peso > 0)
    {
        controle += 1;    
    }
    cout << "dados inseridos " << controle << "\n\n";
    
}
mediaIdade = totalIdade / controle;
mediaPeso = totalPeso /  controle;

cout << "#############################################\n";
cout << "----------RESULTADO DA PESQUISA--------------\n";
cout << "média de idade das pessoas da comunidade: " << mediaIdade << "\n";
cout << "media do peso das pessoas da comunidade: " << mediaPeso << "\n";
}