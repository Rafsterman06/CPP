#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include"Triangulo.h"
using namespace std;
int main(){

    Triangulo triangulo;
    
    bool ciclo=true;
    
    while(ciclo){
        
        triangulo.set_opc();
        triangulo.set_m();
        triangulo.set_caracter();
        switch(triangulo.get_opc()){
            
        case 1:
            triangulo.triangulo1();
        break;
            
        case 2:
            triangulo.triangulo2();
        break;
            
        case 3:
            triangulo.triangulo3();
        break;
            
        case 4:
            triangulo.triangulo4();
        break;

        default:
            
            triangulo.triangulo1();
            cout<<endl;
            
            triangulo.triangulo2();
            cout<<endl;
            
            triangulo.triangulo3();
            cout<<endl;
            
            triangulo.triangulo4();
            cout<<endl;
        }
        
        ciclo=triangulo.preguntar();
        
    }
        cout<<"GOODBYE"<<endl;
    return 0;
}