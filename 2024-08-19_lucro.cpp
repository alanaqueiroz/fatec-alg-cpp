#include <iostream>
using namespace std;

main()
{
    float l,s,F; 
    
    cout << "Digite o valor do lucro: ";
    cin >> l;
    cout << "Digite o numero de socios: ";
    cin >>s;
    if (l == 0.0)
    {
		cout << "Nunca dividiras por zero";
	}
	else
	{
		F = l/s;
		cout << "O faturamente por socio e de = " << F << "\n";
	}
}