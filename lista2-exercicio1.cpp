#include <iostream>

using namespace std;

double calcularVolumeEsfera(double raio) {
    return (4.0 / 3.0) * 3.14 * raio * raio * raio;
}

int main() {
    double raio;

    cout << "Digite o raio da esfera: ";
    cin >> raio;

    double volume = calcularVolumeEsfera(raio);

    cout << "O volume da esfera com raio " << raio << " é: " << volume << endl;

    return 0;
}
