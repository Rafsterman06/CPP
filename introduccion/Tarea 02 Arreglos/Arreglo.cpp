#include<iostream>
#include"Arreglo.h"
#include<time.h>
using namespace std;

//Destructor de la clase Problema1
    Problema1::~Problema1(){}

//Constructores de la clase Problema1
    Problema1::Problema1(){}
    Problema1::Problema1(int PREPO){this->PREPO=PREPO;}
    Problema1::Problema1(int PREPO, int PAGO){
        this->PREPO=PREPO;
        this->PAGO=PAGO;
    }

//Metodos get y set de PREPO
    void Problema1::set_prepo(int PREPO){this->PREPO=PREPO;}

    int Problema1::get_prepo(){return this->PREPO;}

//Metodos get y set de PAGO
    void Problema1::set_pago(int PAGO){this->PAGO=PAGO;}

    int Problema1::get_pago(){return this->PAGO;}

//Metodos get y set de DEVO
    void Problema1::set_devo(int DEVO){this->DEVO=DEVO;}

    int Problema1::get_devo(){return this->DEVO;}

//Metodo para calcular del cambio
    void Problema1::calculadora(){
    if (this->get_pago() < this->get_prepo()){
        cout<<"No te alcanza para este producto"<<endl<<"No se realizo la compra"<<endl;
    }
    else if (this->get_pago() >= this->get_prepo()){
        this->set_devo(this->get_pago() - this->get_prepo());
    }
}

//===========================================================================================================================================
//===========================================================================================================================================

Problema2::~Problema2(){}

Problema2::Problema2(){}

void Problema2::llenar_arreglo(){
    int num;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cout<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<endl;
            cin>>num;
            this->miarreglo[i][j]=num;
        }
    }
}

void Problema2::leer_arrglego(){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            cout<<this->miarreglo[j][i]<<" ";
        }
        cout<<endl;
    }
}

//===========================================================================================================================================
//===========================================================================================================================================

Problema3::~Problema3(){}

Problema3::Problema3(){}

void Problema3::sumadeloselementosquenopertenecenaladiagonal(){
    
    int arr[4][5] = {{4, 7, -5, 4, 9}, {0, 3, -2, 6, -2}, {1, 2, 4, 1, 1}, {6, 1, 0, 3, 4}};
    
    int sum = 0;

    for(int i=0; i<4; i++){

        for(int j=0; j<5; j++){

            if(i != j){

                sum += arr[i][j];
            }
        }
    }

    cout << "La suma de los elementos que no pertenecen a la diagonal principal es: " << sum << endl;
}

//===========================================================================================================================================
//===========================================================================================================================================

Problema4::~Problema4(){}

Problema4::Problema4(){}

void Problema4::triangulo_de_pascal(int n){
    for (int line = 0; line < n; line++) { 
        int C = 1;  // used to represent C(line, i)
        for (int i = 1; i <= line; i++){ 
            cout<<C<<" "; 
            C = C * (line - i) / i;  
        } 
        cout<<"\n"; 
    }
}


//===========================================================================================================================================
//===========================================================================================================================================

Problema5::~Problema5(){}

Problema5::Problema5(){srand(time(NULL));}

int Problema5::generaraleatorio(){return rand()%100;}

void Problema5::llenar_arreglo(){
    for (int i = 0; i < 20; i++){
        this->miarreglo[i] = this->generaraleatorio();
        cout<<"["<<i+1<<"]  "<<this->miarreglo[i]<<endl;

    }   
}

void Problema5::ordenar_arreglo(){

    int aux;
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 20; j++){
            if(this->miarreglo[j]<this->miarreglo[j+1]){
                aux=this->miarreglo[j+1];
                this->miarreglo[j+1]=this->miarreglo[j];
                this->miarreglo[j]=aux;
            }
        }
    }
}

void Problema5::leer_arreglo(){
    for (size_t i = 0; i < 20; i++){
        cout<<"["<<i+1<<"]  "<<this->miarreglo[i]<<endl;
    }
}

//===========================================================================================================================================
//===========================================================================================================================================

Problema6::~Problema6(){}

Problema6::Problema6(){}

Problema6::Problema6(string micadena){this->micadena=micadena;}

void Problema6::set_micadena(string micadena){this->micadena=micadena;}

std::string Problema6::get_mecadena(){return this->micadena;
}

void Problema6::evaluarcadena(string micadena){
    
    
}
