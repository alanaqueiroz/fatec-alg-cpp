#include <iostream>
#include <cmath>

using namespace std;

void calcularMedia(float nota1, float nota2, float nota3, char tipo) {
    float media;
    
    switch (tipo) {
        case 'A':
            media = (nota1 + nota2 + nota3) / 3.0;
            cout << "Média Aritmética: " << media << endl;
            break;
        
        case 'P':
            media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
            cout << "Média Ponderada: " << media << endl;
            break;

        case 'H':
            if (nota1 == 0 || nota2 == 0 || nota3 == 0) {
                cout << "Erro: Não é possível calcular a média harmônica com notas iguais a zero." << endl;
            } else {
                media = 3 / (1 / nota1 + 1 / nota2 + 1 / nota3);
                cout << "Média Harmônica: " << media << endl;
            }
            break;

        default:
            cout << "Tipo de média inválido. Use 'A', 'P' ou 'H'." << endl;
            break;
    }
}

int main() {
    float nota1, nota2, nota3;
    char tipo;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite o tipo de média (A - Aritmética, P - Ponderada, H - Harmônica): ";
    cin >> tipo;

    calcularMedia(nota1, nota2, nota3, tipo);

    return 0;
}
