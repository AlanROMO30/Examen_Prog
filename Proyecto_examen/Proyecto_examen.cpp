
#include <iostream>
#include "CPersona.h"
using namespace std;

CPersona per;
double altura, peso;
int edad;
char sexo;

int main()
{
    cout << "Invierte en ti mismo y cosecha los frutos de una vida más saludable y feliz." << endl;
    cout << "\nDigite su edad:" << endl;
    cin >> edad;
    per.setEdad(edad);

    cout << "\nDigite su peso:" << endl;
    cin >> peso;
    per.setPeso(peso);

    cout << "\nDigite su altura: " << endl;
    cin >> altura;
    per.setAltura(altura);

    cout << "\nEspecifique sexo: (M para masculino  y F para femenino)" << endl;
    cin >> sexo;
    per.setSexo(sexo);

    cout << "\n Para una persona  de sexo "<< per.getSexo() << "," << per.getEdad() << "anios , " << per.getPeso() << " KG , y "<< per.getAltura()<< "m de altura,Su indice de masa corporal es  " << per.IMC() << endl;
    



    return 0;
    system("pause");
}
