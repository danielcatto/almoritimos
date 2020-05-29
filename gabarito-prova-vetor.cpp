#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    float gabarito[10], resposta[10], pegarGabarito, pegarNotas, notaFinal;
    int controle = 0;

cout << "Correção de prova\nInforme o gabarito\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "Informe o " << i+1 << "º ";
        cin >> pegarGabarito;
        gabarito[i] = pegarGabarito;
    }

    cout << "Inserir respostas dos alunos\n"; 
    

    while (controle < 3)
    {
        cout << controle+1 << "º Aluno\n";
        for (int indice = 0; indice < 10; indice++)
        {
            cout << "Informe a " << indice+1 << "º resposta da prova: ";
            cin >> pegarNotas;
            resposta[indice] = pegarNotas;
        }

    
        cout << "Corrigir prova\n";
        cout << "mostrando gabarito\n";

        for (int indiceresp = 0; indiceresp < 10 ;indiceresp++) {
            if(gabarito[indiceresp] == resposta[indiceresp])
            {
                notaFinal += 1;
                cout << "resposta " << gabarito[indiceresp] << " aluno " << resposta[indiceresp] << " nota " << 1 << " \n";
            }
            else
            {
                cout << "resposta " << gabarito[indiceresp] << " aluno " << resposta[indiceresp] << " nota " << 0 << " \n";
            }
            

        }
        cout << "Nota da prova: " << notaFinal << "\n";
        notaFinal=0;
        controle +=1;
    }
}
