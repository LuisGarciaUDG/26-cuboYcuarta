/* programa_20 Calcular la potencia tercera y cuarta de un numero
estructura: ciclica
autor: Luis Alberto Garcia Rodriguez
numero de lista 11
fecha 24 de febrero del 2015
*/
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int x;
    double a, b;
    x=0;
    cout<<"\n\t Calculadora de potencias cubica y cuarta \n\n";
    do
    {
    cout<<"\tNumero a calcular: ";
    cin>>a;
    b=a;
    cout<<"\n\n\tNumero capturado: "<<a<<"\n\n";
    a= pow (a,3);
    cout<<"\tPotencia cubica: "<<a<<"\n\n";
    b= pow (b,4);
    cout<<"\tPotencia cuarta: "<<b<<"\n\n";
    cout<<"\n\n";
    x=x+1;
    }
    while (x<=4);
    cout<<"\n\tHasta pronto...\n\n\t\t\t";
    system ("pause");

    return 0;
}
