#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

int main() {
string texto = "teste";
srand((unsigned)time(0)); 
int i, contador, lista_numero[20];
contador = 0;
int vezes = 0;
while (contador < 20)
{
    i = (rand()%6)+1; 
    lista_numero[contador] = i;
    //cout << i << " " << contador+1 << " | ";
    contador++;
}
cout << "\n";
for (int listar_contador = 0; listar_contador < 20; listar_contador++)
{   
    if (lista_numero[listar_contador] % 2 > 0){
        vezes+=1;
        cout << lista_numero[listar_contador] << " ";
    }
    
}
cout << "\n";
cout << "Foram sorteadas " << vezes << " faces impares\n\n";

}