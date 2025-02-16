#include <iostream>

using namespace std;

int main() {
    float A, B, C, D;
    float maior, menor;

    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;
    cout << "Digite o valor de D: ";
    cin >> D;

    maior = A;
    menor = A;

    if (B > maior) maior = B;
    if (C > maior) maior = C;
    if (D > maior) maior = D;

    if (B < menor) menor = B;
    if (C < menor) menor = C;
    if (D < menor) menor = D;

    cout << "Maior valor: " << maior;
    cout << "Menor valor: " << menor;

    return 0;
}
