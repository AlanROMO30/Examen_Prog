
#include <iostream>
#include "CPersona.h"
#include "CActv.h"
using namespace std;

CPersona per;
CActv actv;
double altura, peso;
int edad;
char sexo;
CActv act;
int pasos;


int main()
{
    cout << "Invierte en ti mismo y cosecha los frutos de una vida mas saludable y feliz." << endl;
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

    cout << "Para una persona  de sexo "<< per.getSexo() << ", " << per.getEdad() << "anios, " << per.getPeso() << " KG, y "<< per.getAltura()<< "m de altura, Su indice de masa corporal es  " << per.IMC() << endl;
    
    cout << "Muy bien ahora con estos datos recopilados se comenzara a dar recomendaciones " << endl;
    cout << "para ello introduzca el numero de pasos que da aproximadamente al dia" << endl;
    cin >> pasos;
    act.calConsumidas(pasos);
    cout << "\nCalorias consumidas: " << act.calConsumidas() << "Kcal" << endl;



    return 0;
    system("pause");
}
