#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int TOTAL_PESSOAS = 50;
    int count = 0;
    int homensAltos = 0, mulheresAltas = 0;

    while (count < TOTAL_PESSOAS) {
        float altura;
        char genero;

        cout << "Digite a altura da pessoa " << count + 1 << " (em metros): ";
        cin >> altura;

        do {
            cout << "Digite o gênero da pessoa (M para masculino, F para feminino): ";
            cin >> genero;
            genero = toupper(genero);
            if (genero != 'M' && genero != 'F') {
                cout << "Entrada inválida. Digite novamente.\n";
            }
        } while (genero != 'M' && genero != 'F');

        if (altura > 1.70) {
            if (genero == 'M') {
                homensAltos++;
            } else if (genero == 'F') {
                mulheresAltas++;
            }
        }

        count++;
    }

    cout << "\nResultados:\n";
    cout << "Número de homens com altura superior a 1.70m: " << homensAltos << endl;
    cout << "Número de mulheres com altura superior a 1.70m: " << mulheresAltas << endl;

    return 0;
}