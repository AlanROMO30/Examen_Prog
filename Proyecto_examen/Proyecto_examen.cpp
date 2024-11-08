
#include <iostream>
#include "CPersona.h"
using namespace std;

CPersona per;
double altura, peso;
int edad;
char sexo;

int main()
{
    cout << "\nDigite su edad:";
    cin >> edad;
    per.setEdad(edad);

    cout << "\nDigite su peso:";
    cin >> peso;
    per.setPeso(peso);

    cout << "\nDigite su altura: ";
    cin >> altura;
    per.setAltura(altura);

    cout << "\nEspecifique sexo: (M para masculino  y F para femenino)";
    cin >> sexo;
    per.setSexo(sexo);

    cout << "\n Para una persona  de sexo "<< per.getSexo() << "," << per.getEdad() << "anios , " << per.getPeso() << " KG , y "<< per.getAltura()<< "m de altura,Su indice de masa corporal es  " << per.IMC() << endl;
    



    return 0;
    system("pause");
}

