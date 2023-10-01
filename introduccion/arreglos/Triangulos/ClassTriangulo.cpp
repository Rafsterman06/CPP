#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include"Triangulo.h"
using namespace std;

Triangulo::Triangulo(){
    
}


void Triangulo::triangulo1(){
        
    this->llenararreglo(this->get_m(),this->get_caracter());
        
    for(int i=0; i<get_m(); i++){
            
        for(int j=0; j<=i; j++){
                
            cout<<this->miarreglo[i][j];
        }
        cout<<endl;
    }


}

void Triangulo::triangulo2(){
        
    this->llenararreglo(this->get_m(),this->get_caracter());
        
    for(int i=this->m-1; i>=0; i--){
            
        for(int j=0; j<=i; j++){
                
            cout<<this->miarreglo[i][j];
        }
        cout<<endl;
    }
}

void Triangulo::triangulo3(){                

    this->llenararreglo(this->get_m(),this->get_caracter());                

    for (int i = 0; i < this->m; i++) {                    

        for (int j = 0; j < this->m - i - 1; j++) {                        

            this->miarreglo[i][j] = ' ';
        }
    }

    for (int i = 0; i < get_m(); i++) {                    

        for (int j = 0; j < get_m(); j++) {                        

            cout << this->miarreglo[i][j];
        }
        cout << endl;
    }
}

void Triangulo::triangulo4(){
                
    this->llenararreglo(this->get_m(),this->get_caracter());
        
    for(int i=0; i<this->m; i++){
        for(int j=0; j<i; j++){
            this->miarreglo[i][j]=' ';
        }
    }
    for(int i=0;i<this->m;i++){
            
        for(int j=0;j<this->m;j++){
                
            cout<<this->miarreglo[i][j];
        }
        cout<<""<<endl;
    }
}


void Triangulo::set_m(){
    int m;
    cout<<"Ingresa un numero"<<endl;
    cin>>m;
    this->m=m;
}

int Triangulo::get_m(){
    return this->m;
}

void Triangulo::set_caracter(){
    char caracter;
    cout<<"Ingresa un caracter"<<endl;
    cin>>caracter;
    this->caracter=caracter;
};

char Triangulo::get_caracter(){
    return this->caracter;    
}

void Triangulo::llenararreglo(int m, char caracter){
        
        
        for(int i=0;i<m;i++){
        
        for(int j=0;j<m;j++){
        
            this->miarreglo[i][j]=caracter;
        }
    }
}

bool Triangulo::preguntar(){
                
    char opc2=' ';
        
    bool ciclo=true;
        
    cout<<"Deseas continuar? S/N"<<endl;
        
    cin>>opc2;
        
    if(opc2=='S' || opc2=='s'){
            
        ciclo=true;
    }
    else if(opc2=='N' || opc2=='n'){
            
        ciclo=false;
    }
    else{
            
        cout<<"Ingresa una opcion valida"<<endl;
            
        this->preguntar();
    }
        
    return ciclo;
}

int Triangulo::get_opc(){

    return this->opc;
}

void Triangulo::set_opc(){

    int opc=0;
                
    cout<<"Ingresa una opcion \n1 Triangulo 1\n2 Triangulo 2\n3 Triangulo 3\n4 Triangulo 4\nOtro default\n";
        
    cin>>opc;

    this->opc=opc;
}