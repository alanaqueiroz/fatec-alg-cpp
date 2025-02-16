#include <iostream>
using namespace std;

int main() {
    int V[10];
    cout << "Digite 10 elementos para o vetor: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> V[i];
    }

    for (int i = 0; i < 5; i++) {
        int temp = V[i];
        V[i] = V[9 - i];
        V[9 - i] = temp;
    }

    cout << "Vetor após a troca: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    return 0;
}
