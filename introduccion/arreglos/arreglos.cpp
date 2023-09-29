#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;


int main(){
    int acum=0,size=0;
    cout<<"Ingresa el tamaño del arreglo"<<endl; 
    cin>>size;
    int arreglo[size]={0.0};

    cout<<"LLenado del arreglo"<<endl;

    for(int i=0; i<=(size-1);i++){
        cout<<"Ingresa el valor de la posicion "<<i<<endl; 
        cin>>arreglo[i];
    }

    cout<<"Sumando los valores del arreglo"<<endl;

    for(int i=0; i<=(size-1);i++){
        acum+=arreglo[i];
    }

    cout<<"El resultado es: "<<acum;
}