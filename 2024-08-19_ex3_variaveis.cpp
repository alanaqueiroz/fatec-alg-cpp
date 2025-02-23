/*3) Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais devera
se somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos calculos
deve-se atribuir o resultado para uma variavel C e mostrar seu conteúdo na tela. */

#include <iostream>
using namespace std;

main()
{
    int A,B,C; 
    
    cout << "Digite um numero para corresponder a A: ";
    cin >> A;
    cout << "Digite um numero para corresponder a B: ";
    cin >> B;
    
    if (A==B)
    {
    	C=A+B;
    	cout << "Como o valor dado para A e B sao iguais, a soma de A e B corresponde a: " << C;
	}
	else 
	{
		C=A*B;
		cout << "Como o valor dado para A e B sao diferentes, a multiplicacao de A por B corresponde a: " << C;
	}
}