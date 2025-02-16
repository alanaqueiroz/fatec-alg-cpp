#include <iostream>
using namespace std;

int menorNumero(int a, int b) {
    int menor;
    if (a < b) {
        menor = a;
    } else {
        menor = b;
    }
    return menor;
}

int main() {
    int num1, num2;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    int menor = menorNumero(num1, num2);
    cout << "O menor numero eh: " << menor << \n;

    return 0;
}
