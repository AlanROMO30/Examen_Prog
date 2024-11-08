
#include <iostream>
#include"CActv.h"
using namespace std;

CPersona per;
CActv actv;
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

    cout << "Dados los datos introducidos su IMC(Indice de Masa Corporal:" << per.IMC() << endl;
    cout << "Y el estado en el que se encuentra es de:" << actv.CatIMC();
        cout << "(1-Bajo peso,2-Peso normal,3-Sobrepeso,4-Obesidad clase 1,5-Obesidad clase 2,6-Obesidad clase 3";


    return 0;
    system("pause");
}
