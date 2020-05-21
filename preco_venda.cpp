#include <iostream>
using namespace std;
int main(){
    float precoCompra, precoVenda;
    cout << "Informe o prece de compra do produto: ";
    cin >> precoCompra;
    precoVenda = precoCompra += (precoCompra * 20 / 100);

    cout << "Preço prara venda: " << precoVenda << "\n";
}
