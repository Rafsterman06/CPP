//Libreria para entrada y salida de datos
#include <iostream>
//Libreria para usar punteros
#include <stdio.h>
//Libreria para usar arreglos de caracteres
#include <string>
#include"Clase_Punto.h"
using namespace std;


//Metodo main
int main(){
    //Declarando metodos
    Punto punto1;
    Punto punto2(2,1);
    Punto * punto3=new Punto(10,20);
    cout<<"Coordenada x del punto1 "<<punto1.getx()<<endl;
    cout<<"Coordenada y del punto1 "<<punto1.gety()<<endl;
    cout<<"Coordenada x del punto2 "<<punto2.getx()<<endl;
    cout<<"Coordenada y del punto2 "<<punto2.gety()<<endl;
    cout<<"Coordenada x del punto3 "<<punto3->getx()<<endl;
    cout<<"Coordenada y del punto3 "<<punto3->gety()<<endl;

    //evita que se cierre la ventana de inmediato
    _sleep(1500);
}
