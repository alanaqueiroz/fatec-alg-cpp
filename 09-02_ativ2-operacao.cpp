//Faça um algoritmo que receba via teclado a operação (+, -, * e /) e dois números. Calcule e imprima o resultado em vídeo//

#include <iostream>
using namespace std;
main()
{
    float n1, n2,r;
    char operacao, opcao;
    
    do 
    {
    	do
    	{
			cout << "Digite uma operacao (+, -, * e /): ";
			cin>>operacao;
			
			if (operacao!='+' && operacao!='-' && operacao!='*' && operacao!='/')
			{
				cout<<"\nDigite uma operacao valida: ";
				cin>>operacao;
			}
		} 
		
		while (operacao!='+' && operacao!='-' && operacao!='*' && operacao!='/');
		cout << "\nDigite o primeiro numero: ";
		cin>>n1;
		cout << "\nDigite o segundo numero: ";
		cin>>n2;		
		
		if (operacao == '+')
		{
			r=n1+n2;
			cout << "O resultado e = " << r << "\n";
		}
		else if (operacao == '-')
		{
			r=n1-n2;
			cout << "O resultado e = " << r << "\n";
		}
		else if (operacao == '*')
		{
			r=n1*n2;
			cout << "O resultado e = " << r << "\n";
		}
		else if (operacao == '/')
		{
			r=n1/n2;
			cout << "O resultado e = " << r << "\n";
		}
		
		cout<<"\nDeseja continuar S/N?";
		cin>>opcao;
	} 
	while (opcao == 's' || opcao == 's');
}
