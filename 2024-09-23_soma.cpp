#include <iostream>
using namespace std;

float soma (float x, float y);

int main () 
{
    float n1, n2, r;
    cout << "Para realizar uma soma...";
    cout << "\nDigite um numero: ";
    cin >> n1;
    cout << "Digite outro numero: ";
    cin >> n2;

    r = soma(n1, n2);

    cout << "Resposta = " << r;
    return 0;
}

float soma (float x, float y)
{
    float total;
    total = x + y;
    return total;
}