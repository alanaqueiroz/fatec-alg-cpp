#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Funcionario {
    int matricula;
    int idade;
    char genero;
    float altura;
    char concursado;
};

int main() {
    vector<Funcionario> funcionarios(100);
    int numFuncionariasConcursadas = 0;
    int numHomens = 0;
    int maiorIdadeHomemConcursado = -1;
    int mulheresComMaisDe30SemConcurso = 0;
    float somaAlturasHomensMenosDe40 = 0.0;
    int countHomensMenosDe40 = 0;

    for (int i = 0; i < 100; i++) {
        cout << "Digite os dados do funcionario " << i + 1 << ":\n";
        cout << "Matrícula: ";
        cin >> funcionarios[i].matricula;
        cout << "Idade: ";
        cin >> funcionarios[i].idade;
        cout << "Gênero (M/F): ";
        cin >> funcionarios[i].genero;
        cout << "Altura: ";
        cin >> funcionarios[i].altura;
        cout << "Concursado (S/N): ";
        cin >> funcionarios[i].concursado;
        cout << endl;
    }

    for (int i = 0; i < 100; i++) {
        if (funcionarios[i].genero == 'F' || funcionarios[i].genero == 'f') {
            if (funcionarios[i].concursado == 'S' || funcionarios[i].concursado == 's') {
                numFuncionariasConcursadas++;
            }
            if (funcionarios[i].idade > 30 && (funcionarios[i].concursado == 'N' || funcionarios[i].concursado == 'n')) {
                mulheresComMaisDe30SemConcurso++;
            }
        }

        if (funcionarios[i].genero == 'M' || funcionarios[i].genero == 'm') {
            numHomens++;

            if (funcionarios[i].concursado == 'S' || funcionarios[i].concursado == 's') {
                if (funcionarios[i].idade > maiorIdadeHomemConcursado) {
                    maiorIdadeHomemConcursado = funcionarios[i].idade;
                }
            }

            if (funcionarios[i].idade < 40) {
                somaAlturasHomensMenosDe40 += funcionarios[i].altura;
                countHomensMenosDe40++;
            }
        }
    }

    cout << "Número de funcionárias concursadas: " << numFuncionariasConcursadas << endl;
    cout << "Número de funcionários (somente homens): " << numHomens << endl;

    if (maiorIdadeHomemConcursado != -1) {
        cout << "Maior idade dos homens concursados: " << maiorIdadeHomemConcursado << endl;
    } else {
        cout << "Não há homens concursados." << endl;
    }

    cout << "Quantidade de mulheres com mais de 30 anos sem concurso: " << mulheresComMaisDe30SemConcurso << endl;

    if (countHomensMenosDe40 > 0) {
        float mediaAlturaHomensMenosDe40 = somaAlturasHomensMenosDe40 / countHomensMenosDe40;
        cout << "Média das alturas dos homens com menos de 40 anos: " << mediaAlturaHomensMenosDe40 << endl;
    } else {
        cout << "Não há homens com menos de 40 anos para calcular a média da altura." << endl;
    }

    return 0;
}
