#include<iostream>
#include"ClaseImple.h"

using namespace std;

Ser_Vivo :: Ser_Vivo(){

}
Ser_Vivo :: Ser_Vivo(string nombre, int edad){
    this->edad=edad;
    this->nombre=nombre;
}
string Ser_Vivo :: get_nombre(){

        return this->nombre;
    }

void Ser_Vivo :: set_nombre(){
        cout<<"Ingresa un nombre"<<endl;
        cin>>this->nombre;
    }

int Ser_Vivo :: get_edad(){

        return this->edad;
    }

void Ser_Vivo :: set_edad(){
        cout<<"Ingresa la edad"<<endl;
        cin>>this->edad;
    }
void Ser_Vivo::comer(){}



Humano::Humano():public Ser_Vivo(){}
Humano :: Humano(string nombre, int edad) : public Ser_Vivo(nombre,edad){}
void Humano::gastar_a_lo_pendejo(){
    cout<<"Gastando a lo pendejo"<<endl;
}