#include <iostream>
using namespace std;
void acessa();
void calcula(float x, float y);
void multiplicacao(float x, float y);
void divisao(float x, float y);
void soma(float x, float y);
void fim();

float x, y;
	
	int main ()
	{
		int op;
		char cont;
		
		do 
		{
			cout<<"Selecione uma opcao: ";
			cout<<"\n1 - Acessar valores";
			cout<<"\n2 - Multiplicacao";
			cout<<"\n3 - Divisao";
			cout<<"\n4 - Soma";
			cout<<"\n5 - Fim";
			cout<<"\nDigite uma opcao: "; 
			cin>>op;
		
			switch(op)
			{
				case 1: acessa(); 
						break;
				case 2: multiplicacao(x,y); 
						break;
				case 3: divisao(x,y);
						break;
				case 4: soma(x,y);
						break; 
			}
			
			do
			{
				cout<<"Deseja continuar? (s/n)";
				cin>>cont;
			}
			while(cont!='s'&&cont!='s'&&cont!='n'&&cont!='n');
		}
		while (cont=='s'||cont=='s');
		return 0;
	}
	
	void acessa()
	{
		do
		{
			cout << "\nDigite dois valores inteiros (obs: o primeiro valor precisa ser maior que o segundo): ";
	    	cin >> x >> y; 
	    	if(x<y)
			{
	    		cout << "O  primeiro valor precisa ser maior que o segundo";
	    	}
		} while (x<y);

	}
	
	void multiplicacao(float x, float y)
	{
		cout << "Digite o primeiro numero: ";
		cin >> x;
		cout << "Digite o segundo numero: ";
		cin >> y;
	    float resultado = x * y;
	    cout << "A multiplicacao de " << x << " por " << y << " corresponde a: " << resultado << endl;
	}
	
	void divisao(float x, float y)
	{
		cout << "Digite o primeiro numero: ";
		cin >> x;
		cout << "Digite o segundo numero: ";
		cin >> y;
	    float resultado = x / y;
	    cout << "A divisao de " << x << " por " << y << " corresponde a: " << resultado << endl;
	}
	
	void soma(float x, float y)
	{
		cout << "Digite o primeiro numero: ";
		cin >> x;
		cout << "Digite o segundo numero: ";
		cin >> y;
	    float resultado = x + y;
	    cout << "A soma de " << x << " e " << y << " corresponde a: " << resultado << endl;
	}
