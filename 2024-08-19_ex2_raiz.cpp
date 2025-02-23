/*2) Escreva um algoritmo que leia um numero e imprima a raiz quadrada do numero.*/

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