#include<iostream>
#include"Persona.h"
using namespace std;
Persona::Persona(){}
Persona::Persona(string nombre, int edad){
    this->nombre=nombre;
    this->edad=edad;
}
void Persona::set_nombre(){
    cout<<"Ingresa un nombre"<<endl;
    cin>>this->nombre;
}
string Persona::get_nombre(){
    return this->nombre;
}
void Persona::set_edad(){
    cout<<"ingresa una edad"<<endl;
    cin>>this->edad;
}
int Persona::get_edad(){
    return this->edad;
}
void Persona::mostrar_datos(){
    cout<<"Nombre "<<this->nombre<<endl;
    cout<<"Edad "<<this->edad<<endl;
}

Empleado::Empleado(){};
Empleado::Empleado(string nombre, int edad, int sueldo):Persona(nombre,edad){
    this->sueldo=sueldo;
}
void Empleado::set_sueldo(){
    cout<<"ingresa una edad"<<endl;
    cin>>this->sueldo;
}
int Empleado::get_sueldo(){
    return this->sueldo;
}

void Empleado::mostrar_datos(){
    Persona::mostrar_datos();
    cout<<"SUeldo "<<this->sueldo<<endl;
}