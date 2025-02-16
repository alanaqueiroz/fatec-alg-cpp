#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int vetor[9];
    int count = 0;

    cout << "Preencha a matriz 3x3 (valores entre 0 e 10):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o valor para matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            if (matriz[i][j] == 5) {
                count++;
            }
        }
    }

    cout << "\nPreencha o vetor de tamanho 9 (valores entre 0 e 10):" << endl;
    for (int i = 0; i < 9; i++) {
        cout << "Digite o valor para vetor[" << i << "]: ";
        cin >> vetor[i];
        if (vetor[i] == 5) {
            count++;
        }
    }

    cout << "\nO número 5 apareceu " << count << " vez(es) na matriz e no vetor." << endl;

    return 0;
}
