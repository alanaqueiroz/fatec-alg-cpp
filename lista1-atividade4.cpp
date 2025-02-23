#include <iostream>
using namespace std;

double calcularFx(double x) {
    if (x <= 1) {
        return 1;
    } else if (x > 1 && x <= 2) {
        return 2;
    } else if (x > 2 && x <= 3) {
        return x * x;
    } else {
        return x * x * x;
    }
}

int main() {
    double x;
    cout << "Digite o valor de x: ";
    cin >> x;

    double resultado = calcularFx(x);
    cout << "f(" << x << ") = " << resultado;

    return 0;
}