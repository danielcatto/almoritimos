#include <iostream>
using namespace std;

int main(){
    int codigo =1;
    float preco, qtd=1,  valor, total;
    string descricao;

    cout << ("      ***cardapio***\n");
    while (codigo > 0)
    {   
        cout << "\n\n Pedido \n";
        cout << ("100 - Hamburger - R$5.50\n");
        cout << ("101 - Cachorro quente - R$4.50\n");
        cout << ("102 - Milkshake - R$7.00\n");
        cout << ("103 - Pizza brotinho - R$8.00\n");
        cout << ("104 - Cheseburger - R$8.50\n");

        cout << ("Informe o Codigo do seu pedido! \n");
        cout << ("codigo: "); cin >> codigo;
        cout << ("Quantidade: "); cin >> qtd;
    
        switch (codigo){
        case 100: descricao = "Hamburger"; valor = 5.50; break;
        case 101: descricao = "Cachorro quente"; valor = 4.50; break;
        case 102: descricao = "Milkshake"; valor = 7.00; break;
        case 103: descricao = "Pizza brotinho"; valor = 8.00; break;
        case 104: descricao = "Cheseburger"; valor = 8.50; break;

        }
        if (codigo >= 100 && codigo <= 104){
            total = qtd * valor;
            cout << "     *****Detalhe do Pedido*****\n";
            cout << "Descricao: " << descricao << "\n";
            cout << "quantidade: " << qtd << "\n";
            cout << "valor unitario: " << valor << "\n";
            cout << "Total pedido: " << total << "\n";
        }
        else if (codigo <= 0)
        {
            cout << "Saiu";
        }
        else
        {
            cout << "Escolha os itens do cardapio, por favor!\n";
        }

    }
}
