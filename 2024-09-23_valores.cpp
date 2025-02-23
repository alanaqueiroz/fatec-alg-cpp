#include <iostream>
using namespace std;

void acessa();
void calcula(float a, float b, float c);

float x, y, z;

int main () 
{
    acessa ();
    calcula(x, y, z);
}

void acessa ()
{
    cout << "Digite os valores para realizar o calculo: \n";
    cout << "Digite o primeiro valor: "; cin >> x;
    cout << "Digite o segundo valor: "; cin >> y;
    cout << "Digite o terceiro valor: "; cin >> z;
}

void calcula(float a, float b, float c)
{
    float resp;
    resp = a + b + c;
    cout << "A Respota sera: " << resp;
    cout << "x = " << a << ", y = " << b << " e z = " << c;
    cout << "x = " << x << ", y = " << y << " e z = " << z;
}