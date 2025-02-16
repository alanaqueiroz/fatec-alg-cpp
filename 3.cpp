#include <iostream>
using namespace std;

int main() {
    int M[10][10];
    int maior, linha, coluna;

    cout << "Digite os elementos da matriz 10x10:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> M[i][j];
        }
    }

    maior = M[0][0];
    linha = 0;
    coluna = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (M[i][j] > maior) {
                maior = M[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    cout << "O maior valor está na linha " << linha + 1 << " e coluna " << coluna + 1 << "." << endl;

    return 0;
}
