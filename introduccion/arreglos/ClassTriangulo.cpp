#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include"Triangulo.h";
using namespace std;

        Triangulo::Triangulo(){
                
                this->set_m();
                
                this->set_caracter();

                this->miarreglo[this->get_m][this->get_m];
                
        }

        Triangulo::Triangulo(int m, char caracter){

                this->m=m;

                this->caracter=caracter;

                this->miarreglo[this->get_m][this->get_m];
        }

        void Triangulo::triangulo1(){
                
            this->llenararreglo();
                
            for(int i=0; i<this->m; i++){
                    
                for(int j=0; j<=i; j++){
                        
                    cout<<this->miarreglo[i][j];
                }
                    
                cout<<endl;
                    
            }
        }

        void Triangulo::triangulo4(){
                
            this->llenararreglo();
                
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

        void Triangulo::triangulo2(){
                
            this->llenararreglo();
                
            for(int i=this->m-1; i>=0; i--){
                    
                for(int j=0; j<=i; j++){
                        
                    cout<<this->miarreglo[i][j];
                }
                cout<<endl;
            }
        }

        void Triangulo::triangulo3(){
                
            this->llenararreglo();
                
            for (int i = 0; i < this->m; i++) {
                    
                for (int j = 0; j < this->m - i - 1; j++) {
                        
                    this->miarreglo[i][j] = ' ';
                }
            }

            for (int i = 0; i < this->m; i++) {
                    
                for (int j = 0; j < this->m; j++) {
                        
                    cout << this->miarreglo[i][j];
                }
                cout << endl;
            }
        }

        void Triangulo::llenararreglo(char [][], int m, char){
                
            for(int i=0;i<this->m;i++){

                for(int j=0;j<this->m;j++){

                    this->miarreglo[i][j]='*';
                }
            }
        }
    
        int Triangulo::opc(){
                
            int opc=0;
                
            cout<<"Ingresa una opcion \n1 triangulo 1\n2 triangulo 2\n3 triangulo 3\n4 triangulo 4\notro default\n";
                
            cin>>opc;
                
            return opc;
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

        void set_m(){
                
                int m;
                
                cout<<"Ingresa la longitud del arreglo"<<endl;
                
                if(m>0){
                        
                         this->m=m;       
                }
                else{
                        
                        cout<<"Ingresa un numero mayor a \'0\'"<<endl;
                        
                        this->set_m();
                }
        }
