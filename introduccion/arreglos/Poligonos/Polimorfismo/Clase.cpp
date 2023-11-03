#include<iostream>
#include"ClaseImple.h"

using namespace std;

Ser_Vivo :: Ser_Vivo(){}
Ser_Vivo :: Ser_Vivo(string nombre, int edad){
    this->edad=edad;
    this->nombre=nombre;
}
string Ser_Vivo :: get_nombre(){return this->nombre;}

void Ser_Vivo :: set_nombre(){
        cout<<"Ingresa un nombre"<<endl;
        cin>>this->nombre;
    }

int Ser_Vivo :: get_edad(){return this->edad;}

void Ser_Vivo :: set_edad(){
        cout<<"Ingresa la edad"<<endl;
        cin>>this->edad;
    }
void Ser_Vivo :: comer(){}



Humano :: Humano(){}
Humano :: Humano(string nombre, int edad, string apellido) :  Ser_Vivo(nombre,edad){
    this->apellido=apellido;
}
void Humano::gastar_a_lo_pendejo(){
    cout<<"Gastando a lo pendejo"<<endl;
}

string Humano :: get_apellido(){return this->apellido;}

void Humano :: comer(){

    cout<<this->get_apellido()<<", "<<this->get_edad()<<", "<<get_nombre()<<endl;
}




Perro :: Perro(){}
Perro :: Perro(string nombre, int edad, string duenio) : Ser_Vivo(nombre,edad){
    this->duenio=duenio;
};

void Perro :: comer(){
    cout<<"Guau Guau..."<<endl;
}