#include <iostream>
using namespace std;
#define qtd_notas 2
main()
{
    float n1, n2, media; 
    char opcao;
    
    do 
    {
		cout << "Digite a nota do primeiro bimestre: ";
		cin>>n1;
		cout << "Digite a nota do segundo bimestre: ";
		cin>>n2;
		if (n1<0 || n1>10 || n1<0 || n2>10)
		{
			cout<<"Digite a nota no intervalo de 0 a 10";
		}
		else
		{
			media = (n1+n2)/qtd_notas;
			cout<<"A media do aluno sera: "<<media;
			if (media >=6.0 && media <=10.0)
			{
				cout<<"\nAprovado!";
			}
			else
			{
				cout<<"Substitutiva (P3)\n";
			}
		}
		cout<<"\nDeseja continuar S/N?";
		cin>>opcao;
	} 
	while (opcao == 's' || opcao == 's');
}
