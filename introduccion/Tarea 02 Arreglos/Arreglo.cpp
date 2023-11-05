#include<iostream>
#include"Arreglo.h"
#include<time.h>
#include<cstdlib>
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

void Problema6::set_frase(char hola[]){
        for (size_t i = 0; i < 150; i++){
            this->frace[i]=hola[i];
        }
    }

std::string Problema6::get_frace(){return this->frace;}

void Problema6::evaluarcadena(){
    // Este for recorre la frase y cuenta las letras, las almecena en el arreglo contador
        for (size_t i = 0; i < sizeof(this->frace); i++){
            char Exprecion=this->frace[i];

            switch (Exprecion){
                case 'a':
                    this->Aa[this->contador_vocales[0]]=i;
                    this->contador_vocales[0]=this->contador_vocales[0]+1;
                    this->contador[0]=this->contador[0]+1;
                break;
                case 'b':this->contador[1]+=1;break;
                case 'c':this->contador[2]+=1;break;
                case 'd':this->contador[3]+=1;break;
                case 'e':
                    this->Ee[this->contador_vocales[1]]=i;
                    this->contador_vocales[1]=this->contador_vocales[1]+1;
                    this->contador[4]=this->contador[4]+1;
                break;
                case 'f':this->contador[5]+=1;break;
                case 'g':this->contador[6]+=1;break;
                case 'h':this->contador[7]+=1;break;
                case 'i':
                    this->Ii[this->contador_vocales[2]]=i;
                    this->contador_vocales[2]=this->contador_vocales[2]+1;
                    this->contador[8]=this->contador[8]+1;
                break;
                case 'j':this->contador[9]+=1;break;
                case 'k':this->contador[10]+=1;break;
                case 'l':this->contador[11]+=1;break;
                case 'm':this->contador[12]+=1;break;
                case 'n':this->contador[13]+=1;break;
                case 'o':
                    this->Oo[this->contador_vocales[3]]=i;
                    this->contador_vocales[3]=this->contador_vocales[3]+1;
                    this->contador[14]=this->contador[14]+1;
                break;
                case 'p':this->contador[15]+=1;break;
                case 'q':this->contador[16]+=1;break;
                case 'r':this->contador[17]+=1;break;
                case 's':this->contador[18]+=1;break;
                case 't':this->contador[19]+=1;break;
                case 'u':
                    this->Uu[this->contador_vocales[4]]=i;
                    this->contador_vocales[4]=this->contador_vocales[4]+1;
                    this->contador[20]=this->contador[20]+1;
                break;
                case 'v':this->contador[21]+=1;break;
                case 'w':this->contador[22]+=1;break;
                case 'x':this->contador[23]+=1;break;
                case 'y':this->contador[24]+=1;break;
                case 'z':this->contador[25]+=1;break;

                default:
                break;
            }
        }    
    // Recorre y compara las cantidades para sacar el caracter mas usado
        for (size_t i = 0; i < sizeof(this->contador)/4; i++){
            if(this->contador[i]>this->caracter_mas_usado){
                this->caracter_mas_usado=this->contador[i];
                this->ccaracter_mas_usado=i;
            }
            
        }
}

void Problema6::reemplazar_vocales(){
        for (size_t i = 0; i < sizeof(this->Aa)/4; i++){
        if(this->Aa[i]>0){
            this->frace[this->Aa[i]]=this->abecedario[this->ccaracter_mas_usado];
        }
    }
    for (size_t i = 0; i < sizeof(this->Ee)/4; i++){
        if(this->Ee[i]>0){
            
            this->frace[this->Ee[i]]=this->abecedario[this->ccaracter_mas_usado];
        }
    }
    for (size_t i = 0; i < sizeof(this->Ii)/4; i++){
        if(this->Ii[i]>0){
            
            this->frace[this->Ii[i]]=this->abecedario[this->ccaracter_mas_usado];
        }
    }
    for (size_t i = 0; i < sizeof(this->Oo)/4; i++){
        if(this->Oo[i]>0){
            this->frace[this->Oo[i]]=this->abecedario[this->ccaracter_mas_usado];
        }
    }
    for (size_t i = 0; i < sizeof(this->Uu)/4; i++){
        if(this->Uu[i]>0){
            this->frace[this->Uu[i]]=this->abecedario[this->ccaracter_mas_usado];
        }
    }

}
