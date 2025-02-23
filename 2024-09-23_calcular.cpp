#include <iostream>
using namespace std;

void acessa();
void calcula(float a, float b, float c);

float x, y, z;

int main ()
{
    int op;
    char cont;

    do 
    {
        cout << "Selecione uma opcao";
        cout << "\n1 - Acessar";
        cout << "\n2 - Calcular";
        cout << "\nDigite uma opcao: "; 
        cin >> op;

        switch(op){
            case 1: acessa();
                    break;

            case 2: calcula(x, y, z);
                    break;
        }

        do
        {
            cout << "Deseja continuar? (s/n)";
            cin >> cont;
        }
        while (cont != 's' && cont != 'n');
    }
    while (cont == 's');
    return 0;
}

void acessa()
{
    cout << "Digite tres valores: ";
    cin >> x >> y >> z;    
}

void calcula(float a, float b, float c)
{
    cout << "Calculando com os valores: " << a << ", " << b << ", " << c << endl;
    float resultado = a + b + c;
    cout << "Resultado: " << resultado << endl;    
}