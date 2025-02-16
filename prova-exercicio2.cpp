#include <iostream>
using namespace std;

int main() {
    int matriz[10][10];
    int maiorValor = -1;
    int linhaMaior = 0, colunaMaior = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    cout << "O maior valor da matriz é " << maiorValor << endl;
    cout << "Está localizado na linha " << linhaMaior + 1 << " e coluna " << colunaMaior + 1 << endl;

    return 0;
}
