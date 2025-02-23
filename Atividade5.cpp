#include <iostream>

using namespace std;

int main() {
    int num;
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    for (int i = 0; i < 200; i++) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> num;

        if (num >= 0 && num <= 25) {
            intervalo1++;
        } else if (num >= 26 && num <= 50) {
            intervalo2++;
        } else if (num >= 51 && num <= 75) {
            intervalo3++;
        } else if (num >= 76 && num <= 100) {
            intervalo4++;
        }
    }

    cout << "Quantidade de números no intervalo [0-25]: " << intervalo1 << endl;
    cout << "Quantidade de números no intervalo [26-50]: " << intervalo2 << endl;
    cout << "Quantidade de números no intervalo [51-75]: " << intervalo3 << endl;
    cout << "Quantidade de números no intervalo [76-100]: " << intervalo4 << endl;

    return 0;
}