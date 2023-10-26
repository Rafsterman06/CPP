#include<iostream>
#include"Figura.h"
using namespace std;

Figura :: Figura(){}
Figura :: Figura(string nombre){
    this->nombre=nombre;
}
Figura :: Figura(string nombre, int lados){
    this->nombre=nombre;
    this->lados=lados;
}
Figura :: Figura(string nombre, int lados, double perimetro){
    this->nombre=nombre;
    this->lados=lados;
    this->perimetro=perimetro;
}
Figura :: Figura(string nombre, int lados, double perimetro, double area){
    this->nombre=nombre;
    this->lados=lados;
    this->perimetro=perimetro;
    this->area=area;
}
Figura :: Figura(string nombre, int lados, double perimetro, double area, double distancia){
    this->nombre=nombre;
    this->lados=lados;
    this->perimetro=perimetro;
    this->area=area;
    this->distancia=distancia;
}
Figura ::~Figura() {}

void Figura :: set_nombre(){
    cout<<"Ingresa el nombre de la figura"<<endl;
    cin>>this->nombre;
}

string Figura :: get_nombre(){
    return this->nombre;
}

void Figura :: set_lados(){
    cout<<"Ingresa el numero de lados"<<endl;
    cin>>this->lados;
}

int Figura :: get_lados(){
    return this->lados;
}

void Figura :: set_area(){
    cout<<"Ingresa el area"<<endl;
    cin>>this->area;
}

double Figura :: get_area(){
    return this->area;
}

void Figura :: set_perimetro(){
    cout<<"Ingresa el perimetro"<<endl;
    cin>>this->perimetro;
}

double Figura :: get_perimetro(){
    return this->perimetro;
}

void Figura::set_distancia(){
    cout<<"Ingresa la distancia"<<endl;
    cin>>this->distancia;
}

double Figura::get_distancia(){
    return this->distancia;
}

void Figura :: mostrar_todo(){
    cout<<"Figura: "<<this->nombre<<endl<<"Lados: "<<this->lados<<endl<<"Perimetro: "<<this->perimetro<<endl<<"Area: "<<this->area<<endl;
}





void Figura :: Perimetro(){}

void Figura :: Area(){}

Cuadrado :: ~Cuadrado(){}

Cuadrado :: Cuadrado(){}

Cuadrado :: Cuadrado(string nombre): Figura(nombre){}

Cuadrado :: Cuadrado(string nombre, int lados):Figura(nombre,lados){}
Cuadrado :: Cuadrado(string nombre, int lados, double perimetro): Figura(nombre,lados,perimetro){}
Cuadrado :: Cuadrado(string nombre, int lados, double perimetro, double area): Figura(nombre,lados,perimetro, area){}

void Cuadrado :: Perimetro(){
    

}
