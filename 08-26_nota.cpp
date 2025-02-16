#include <iostream>
using namespace std;
main()
{
    float n; 
    char opcao;
    
    do 
    {
		cout << "Digite sua nota entre 0 a 10: ";
		cin>>n;
		if (n>0.0 && n<3.0)
		{
			cout<<"Nota E";
		}
		else if (n>=3.0 && n>5.0)
		{
		    cout<<"Nota D";
		}
		else if (n>=6.0 && n>8.0)
		{
		    cout<<"Nota C";
		}
		else if (n>=7.0 && n<9.0)
		{
		    cout<<"Nota B";
		}
		else if (n>=9.0 && n<=10.0)
		{
		    cout<<"Nota A";
		}
		cout<<"\nDeseja continuar S/N?";
		cin>>opcao;
	} 
	while (opcao == 's' || opcao == 's');
}
