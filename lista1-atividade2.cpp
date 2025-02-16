#include <iostream>
using namespace std;

int main() {
    float N1, N2, L1, L2, media;
    char tipoAluno;

    cout << "Digite a nota N1: ";
    cin >> N1;
    cout << "Digite a nota N2: ";
    cin >> N2;

    cout << "Digite o tipo de aluno (R para Regular, E para Regime Especial): ";
    cin >> tipoAluno;

    switch (tipoAluno) {
        case 'R':
        case 'r':
            cout << "Digite a nota da lista L1: ";
            cin >> L1;
            cout << "Digite a nota da lista L2: ";
            cin >> L2;
            media = (((N1 + N2) / 2) * 0.7) + (((L1 + L2) / 2) * 0.3);
            break;

        case 'E':
        case 'e':
            media = (N1 + N2) / 2;
            break;

            return 1;
    }

    cout << "Media: " << media << "\n";
    if (media >= 6.0) {
        cout << "Aprovado\n";
    } else {
        cout << "Reprovado\n";
    }

    return 0;
}