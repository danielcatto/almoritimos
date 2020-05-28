#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    bool vitoria = false;
    int numeros[10];
    int tentativas = 10, indice = 0, entrada, numEscolhido, posicao, vezes;
    for (indice = 0; indice < tentativas; indice++)
    {
        cout << "Insira dez numeros inteiros: ";
        cin >>  entrada;
        numeros[indice] = entrada;
    }
    system("clear");
    for (int i = 0; i < 3; i++)
    {
        cout << "escolha o " << i+1 << "º numero: ";
        cin >> numEscolhido;
        for (int contador = 0; contador <= 10; contador++)
        {   
            
            if(numeros[contador] == numEscolhido){
                posicao = contador;
                vezes = i+1;
                vitoria = true;
                break;
            }
         
        }
    if (vitoria == false){
        cout << "Que pena, numero errado! :(\n"; 
    }
    }
     if (vitoria){
            cout << "Parabéns! Este número está na posição " << posicao+1 << " do vetor! Você usou " << vezes << " tentativas... \n";
        }else{
            cout << "Vecê perdeu a partida\n";
        }
}
