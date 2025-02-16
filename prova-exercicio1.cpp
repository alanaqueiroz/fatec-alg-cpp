#include <iostream>
using namespace std;

int main() {
    int opiniao, contaRuim = 0, contaRegular = 0;
    int i = 1;

    while (i <= 500) { //Acrescentar um numero menor para teste
        do {
            cout << "Digite sua opinião (1 para 'Bom', 2 para 'Regular', 3 para 'Ruim'): ";
            cin >> opiniao;
            if (opiniao < 1 || opiniao > 3) {
                cout << "Opção inválida. Tente novamente." << endl;
            }
        } while (opiniao < 1 || opiniao > 3);

        if (opiniao == 2) {
            contaRegular++;
        } else if (opiniao == 3) {
            contaRuim++;
        }

        i++;
    }

    cout << "\nNúmero de opiniões 'Ruim': " << contaRuim << endl;
    cout << "Número de opiniões 'Regular': " << contaRegular << endl;

    return 0;
}