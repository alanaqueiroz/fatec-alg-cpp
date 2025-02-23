#include <iostream>
#include <climits>
using namespace std;

int main() {
    int matriz[10][10];
    int maior = INT_MIN;
    int linha = 0, coluna = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> matriz[i][j];
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    cout << "Maior valor: " << maior << " em (" << linha << ", " << coluna << ")" << endl;
    return 0;
}