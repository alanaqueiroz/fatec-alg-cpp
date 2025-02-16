/*2) Escreva um algoritmo que leia um número e imprima a raiz quadrada do número.*/

#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float r; 
    
    cout << "Digite um numero para calcular sua raiz: ";
    cin >> r;
    cout << "O a raiz do numero digitado corresponde a " << sqrt(r);
}
