#include <iostream>

using namespace std;

double calcularTotal(double subtotal) {
    double desconto = 0;

    if (subtotal > 100) {
        desconto = subtotal * 0.10;
    }

    return subtotal - desconto;
}

int main() {
    double precoHamburguer = 15.00;
    double precoPizza = 25.00;
    double precoRefrigerante = 5.00;
    double precoSobremesa = 10.00;

    int opcao;
    double subtotal = 0.0;
    int quantidade;

    cout << "Menu de Itens:" << endl;
    cout << "1. Hambúrguer - R$15,00" << endl;
    cout << "2. Pizza - R$25,00" << endl;
    cout << "3. Refrigerante - R$5,00" << endl;
    cout << "4. Sobremesa - R$10,00" << endl;
    cout << "5. Finalizar pedido" << endl;

    do {
        cout << "Digite o número do item desejado (1-5): ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Quantidade de Hambúrgueres: ";
                cin >> quantidade;
                subtotal += quantidade * precoHamburguer;
                break;
            case 2:
                cout << "Quantidade de Pizzas: ";
                cin >> quantidade;
                subtotal += quantidade * precoPizza;
                break;
            case 3:
                cout << "Quantidade de Refrigerantes: ";
                cin >> quantidade;
                subtotal += quantidade * precoRefrigerante;
                break;
            case 4:
                cout << "Quantidade de Sobremesas: ";
                cin >> quantidade;
                subtotal += quantidade * precoSobremesa;
                break;
            case 5:
                cout << "Pedido finalizado." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 5);

    cout << "Subtotal: R$" << subtotal << endl;

    double total = calcularTotal(subtotal);
    cout << "Total após desconto: R$" << total << endl;

    int metodoPagamento;
    cout << "Método de Pagamento:" << endl;
    cout << "1. Cartão de Crédito" << endl;
    cout << "2. Cartão de Débito" << endl;
    cout << "3. Dinheiro (5% de desconto adicional)" << endl;
    cout << "Escolha o método de pagamento (1-3): ";
    cin >> metodoPagamento;

    switch (metodoPagamento) {
        case 1:
        case 2:
            cout << "Pagamento realizado com sucesso." << endl;
            break;
        case 3:
            total *= 0.95;
            cout << "Total com desconto de 5% por pagamento em dinheiro: R$" << total << endl;
            break;
        default:
            cout << "Método de pagamento inválido." << endl;
            break;
    }

    return 0;
}
