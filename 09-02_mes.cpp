#include <iostream>
using namespace std;
main()
{
    float m; 
    char opcao;
    do 
    {
    	do 
		{
			cout << "\nDigite numero correspondente a um mes do ano de 1 a 12: ";
			cin>>m; 
			if (m<1 or m>12)
			{
			cout<<"Nao existe meses fora da escala de 0 a 12";
			}
		}	
		while (m<1 or m>12);
		if (m==1)
		{
			cout<<"Janeiro";
		}
		else if (m==2)
		{
		    cout<<"Fevereiro";
		}
		else if (m==3)
		{
		    cout<<"Marco";
		}
		else if (m==4)
		{
		    cout<<"Abril";
		}
		else if (m==5)
		{
		    cout<<"Maio";
		}
		else if (m==6)
		{
		    cout<<"Junho";
		}
		else if (m==7)
		{
		    cout<<"Julho";
		}
		else if (m==8)
		{
		    cout<<"Agosto";
		}
		else if (m==9)
		{
		    cout<<"Setembro";
		}
		else if (m==10)
		{
		    cout<<"Outubro";
		}
		else if (m==11)
		{
		    cout<<"Novembro";
		}
		else if (m==12)
		{
		    cout<<"Dezembro";
		}
		cout<<"\nDeseja continuar S/N?";
		cin>>opcao;
	} 
	while (opcao == 's' || opcao == 'S');
}
