#include <iostream>

using namespace std;

int main() {
    float celsius, fahrenheit, kelvin;
    int opcao;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    cout << "Escolha para qual unidade deseja converter:";
    cout << "1. Fahrenheit";
    cout << "2. Kelvin";
    cout << "Digite a opcao (1 ou 2): ";
    cin >> opcao;

    if (opcao == 1) {
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        cout << "Temperatura em Fahrenheit: " << fahrenheit << " °F"l;
    } else if (opcao == 2) {
        kelvin = celsius + 273.15;
        cout << "Temperatura em Kelvin: " << kelvin << " K";
    } else {
        cout << "Opcao invalida!";
    }

    return 0;
}