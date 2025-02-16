#include <iostream>

using namespace std;

void acessarValores(int &valor1, int &valor2) {
    do {
        cout << "Digite o primeiro valor (deve ser maior que o segundo): ";
        cin >> valor1;
        cout << "Digite o segundo valor: ";
        cin >> valor2;
        if (valor1 <= valor2) {
            cout << "O primeiro valor deve ser maior que o segundo. Tente novamente." << endl;
        }
    } while (valor1 <= valor2);
}

int multiplicacao(int valor1, int valor2) {
    return valor1 * valor2;
}

int divisao(int valor1, int valor2) {
    if (valor2 != 0) {
        return valor1 / valor2;
    } else {
        cout << "Erro: Divis�o por zero n�o � permitida." << endl;
        return 0;
    }
}

int soma(int valor1, int valor2) {
    return valor1 + valor2;
}

int main() {
    int opcao;
    int valor1 = 0, valor2 = 0;
    bool valoresDefinidos = false;

    do {
        cout << "\nMenu:\n";
        cout << "1 � Acessar valores\n";
        cout << "2 � Multiplica��o\n";
        cout << "3 � Divis�o\n";
        cout << "4 � Soma\n";
        cout << "5 � Fim\n";
        cout << "Escolha uma op��o: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                acessarValores(valor1, valor2);
                valoresDefinidos = true;
                break;
            case 2:
                if (valoresDefinidos) {
                    cout << "Resultado da multiplica��o: " << multiplicacao(valor1, valor2) << endl;
                } else {
                    cout << "Primeiro voc� precisa acessar os valores (op��o 1)." << endl;
                }
                break;
            case 3:
                if (valoresDefinidos) {
                    cout << "Resultado da divis�o: " << divisao(valor1, valor2) << endl;
                } else {
                    cout << "Primeiro voc� precisa acessar os valores (op��o 1)." << endl;
                }
                break;
            case 4:
                if (valoresDefinidos) {
                    cout << "Resultado da soma: " << soma(valor1, valor2) << endl;
                } else {
                    cout << "Primeiro voc� precisa acessar os valores (op��o 1)." << endl;
                }
                break;
            case 5:
                cout << "Encerrando o programa..." << endl;
                break;
            default:
                cout << "Op��o inv�lida! Tente novamente." << endl;
                break;
        }

    } while (opcao != 5);

    return 0;
}
