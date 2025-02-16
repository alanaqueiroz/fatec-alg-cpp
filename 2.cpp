#include <iostream>
using namespace std;

int main() {
    int X, Y[5][5], count = 0;

    cout << "Digite um número inteiro X: ";
    cin >> X;

    cout << "Digite os elementos da matriz 5x5: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> Y[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (Y[i][j] == X) {
                count++;
            }
        }
    }

    cout << "O número " << X << " aparece " << count << " vezes na matriz." << endl;

    return 0;
}
