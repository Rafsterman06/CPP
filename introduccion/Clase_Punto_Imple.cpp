#include"Clase_Punto.h"
#include<string>
#include<iostream>
using namespace std;
    Punto::Punto(){
        setx(setint("Ingresa el valor de \'x\'\t"));
        sety(setint("Ingresa el valor de \'y\'\t"));
    }
    Punto::Punto(int x,int y){
        Punto::setx(x);
        Punto::sety(y);
    }
    //metodos gets
    int Punto::getx(){
        return this->x;
    }
    int Punto::gety(){
        return this->y;
    }
    //metodos sets
    int Punto::setint(string mensaje){
        int valor;
        cout<<mensaje; cin>>valor;
        return valor;
    }

    void Punto::setx(int x){
        this->x=x;
    }
    void Punto::sety(int y){
        this->y=y;
    }
