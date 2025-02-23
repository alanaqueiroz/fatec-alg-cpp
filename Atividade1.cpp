#include <iostream>

void tabuadaComFor(int numero, int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << "\n";
    }
}

void tabuadaComWhile(int numero, int inicio, int fim) {
    int i = inicio;
    while (i <= fim) {
        std::cout << numero << " x " << i << " = " << numero * i << "\n";
        i++;
    }
}

void tabuadaComDoWhile(int numero, int inicio, int fim) {
    int i = inicio;
    do {
        std::cout << numero << " x " << i << " = " << numero * i << "\n";
        i++;
    } while (i <= fim);
}

int main() {
    int numero, inicio, fim;

    std::cout << "Digite o número para calcular a tabuada: ";
    std::cin >> numero;
    std::cout << "Digite o início da tabuada: ";
    std::cin >> inicio;
    std::cout << "Digite o fim da tabuada: ";
    std::cin >> fim;

    if (inicio > fim) {
        std::cout << "Erro: o início deve ser menor ou igual ao fim.\n";
        return 1;
    }

    tabuadaComFor(numero, inicio, fim);
    tabuadaComWhile(numero, inicio, fim);
    tabuadaComDoWhile(numero, inicio, fim);

    return 0;
}