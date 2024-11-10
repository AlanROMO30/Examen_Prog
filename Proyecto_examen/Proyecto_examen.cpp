
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
int objet;


int main()
{
    cout << "Invierte en ti mismo y cosecha los frutos de una vida mas saludable y feliz." << endl;
    cout << "\nDigite su edad: ";
    cin >> edad;
    per.setEdad(edad);

    cout << "\nDigite su peso: ";
    cin >> peso;
    per.setPeso(peso);

    cout << "\nDigite su altura: ";
    cin >> altura;
    per.setAltura(altura);

    cout << "\nEspecifique sexo (M para masculino y F para femenino): ";
    cin >> sexo;
    per.setSexo(sexo);

    cout << "\nPara una persona de sexo " << per.getSexo() << ", " << per.getEdad()
        << " anios, " << per.getPeso() << " KG, y " << per.getAltura() << " m de altura" << endl;
    per.setIMC();


    per.setIMC();
    cout << "\nDados los datos introducidos su IMC (Indice de Masa Corporal) es: "
        << per.IMC() << endl;
        
    cout << "\n///////////////";

    per.IMC();
  per.setCIMC();
  
  cout << "///////////////"<<endl;




   
   


    cout << "\nMuy bien, ahora con estos datos recopilados se comenzaran a dar recomendaciones."  << endl;
    cout << "\nPara ello, introduzca el numero de pasos que da aproximadamente al dia: "<<endl;
    cin >> pasos;

    actv.calConsumidas(peso, altura, pasos);

    cout << "\nCalorias consumidas: " << actv.getcalorias() << " Kcal" << endl;

    cout << "\nCual es el objetivo que deseas llevar a cabo" <<endl<<"(1-Bajar de peso,2-Mejorar rendimiento,3-Mantenerse en forma,4-Rutina por preincripcion medica): ";
    cin >> objet;
    int b;
    b = actv.setnumIMC();
    actv.ActRecoDes(b,objet);

    return 0;
}
