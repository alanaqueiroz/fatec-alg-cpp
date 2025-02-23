#include <iostream>

using namespace std;

void calcularEstatisticas() {
    double salario, somaSalarios = 0.0;
    int numeroFilhos, somaFilhos = 0, contador = 0;
    double maiorSalario = 0.0;
    bool primeiroSalario = true;

    while (true) {
        cout << "Digite o salário (ou um valor negativo para encerrar): ";
        cin >> salario;
        
        if (salario < 0) {
            break;
        }

        cout << "Digite o número de filhos: ";
        cin >> numeroFilhos;

        somaSalarios += salario;
        somaFilhos += numeroFilhos;
        contador++;

        if (primeiroSalario || salario > maiorSalario) {
            maiorSalario = salario;
            primeiroSalario = false;
        }
    }

    if (contador > 0) {
        double mediaSalarios = somaSalarios / contador;
        double mediaFilhos = static_cast<double>(somaFilhos) / contador;

        cout << "Média de salário: " << mediaSalarios << \n;
        cout << "Média de número de filhos: " << mediaFilhos << \n;
        cout << "Maior salário: " << maiorSalario << \n;
    } else {
        cout << "Nenhum dado foi inserido." << \n;
    }
}

int main() {
    calcularEstatisticas();
    return 0;
}