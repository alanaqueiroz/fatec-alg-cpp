//3 - Faça um algoritmo que receba a idade, o sexo (genero) e salário fixo de um funcionario e 
// calcule o abono desse funcionário conforme a Tabela 1.

#include <iostream>
using namespace std;

int main() {
    char genero;
    int idade;
    float salario, abono;
    char opcao;

    do {
        cout << "\nInsira o genero (F/M) do funcionario: ";
        cin >> genero;
        cout << "Insira a idade do funcionario: ";
        cin >> idade;
        cout << "Insira o salario fixo desse funcionario: ";
        cin >> salario;

        switch (genero) {
            case 'F':
            case 'f':
                if (idade >= 30) {
                    abono = salario + 100;
                } else {
                    abono = salario + 50;
                }
                break;

            case 'M':
            case 'm':
                if (idade >= 30) {
                    abono = salario + 200;
                } else {
                    abono = salario + 80;
                }
                break;

            default:
                cout << "Genero invalido! Tente novamente." << endl;
                continue;
        }

        cout << "O salario com abono do funcionario e: " << abono << endl;
        cout << "\nDeseja continuar (S/N)? ";
        cin >> opcao;

    } while (opcao == 'S' || opcao == 's');

    return 0;
}