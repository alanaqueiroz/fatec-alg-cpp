#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double peso, altura, imc;

    cout << "Digite o peso em kg: ";
    cin >> peso;
    cout << "Digite a altura em metros: ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << fixed << setprecision(2);
    cout << "Seu IMC é: " << imc << " ";

    if (imc < 18.5) {
        cout << "Classificação: Abaixo do peso";
    } else if (imc >= 18.5 && imc < 25) {
        cout << "Classificação: Peso normal";
    } else if (imc >= 25 && imc < 30) {
        cout << "Classificação: Sobrepeso";
    } else {
        cout << "Classificação: Obesidade";
    }

    return 0;
}
