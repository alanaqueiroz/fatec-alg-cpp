/*4) Encontrar o dobro de um numero caso ele seja positivo e o seu triplo caso seja negativo,
imprimindo o resultado. */

#include <iostream>
using namespace std;

main()
{
    int N, D, T; 
    
    cout << "Digite um numero: ";
    cin >> N;
    
    if (N<0)
    {
		T=N*2;
		cout << "Como o valor digitado e positivo, seu dobro corresponde a: " << T;
	}
	else 
	{
		D=N*3;
		cout << "Como o valor digitado e negativo, seu triplo corresponde a: " << D;
	}
}