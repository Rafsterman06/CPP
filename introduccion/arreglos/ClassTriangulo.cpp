#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Triangulo{
    public:

        char miarreglo[10][10];

        void triangulo1(){
            llenararreglo();
            for(int i=0; i<10; i++){
                for(int j=0; j<=i; j++){
                    cout<<this->miarreglo[i][j];
                }
                cout<<endl;
            }
        }

        void triangulo4(){
            llenararreglo();
            for(int i=0; i<10; i++){

                for(int j=0; j<i; j++){

                    this->miarreglo[i][j]=' ';
                }
            }

            for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                    cout<<this->miarreglo[i][j];

                }
                cout<<""<<endl;
            }
        }

        void triangulo2(){
            llenararreglo();
            for(int i=9; i>=0; i--){
                for(int j=0; j<=i; j++){
                    cout<<this->miarreglo[i][j];
                }
                cout<<endl;
            }
        }

        void triangulo3(){
            this->llenararreglo();
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10 - i - 1; j++) {
                    this->miarreglo[i][j] = ' ';
                }
            }

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    cout << this->miarreglo[i][j];
                }
                cout << endl;
            }
        }

        void llenararreglo(){
            for(int i=0;i<10;i++){

                for(int j=0;j<10;j++){

                    this->miarreglo[i][j]='*';
                }
            }
        }
    
        int opc(){
            int opc=0;
            cout<<"Ingresa una opcion \n1 triangulo 1\n2 triangulo 2\n3 triangulo 3\n4 triangulo 4\notro default\n";
            cin>>opc;
            return opc;
        }
        bool preguntar(){
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
                preguntar();
            }
            return ciclo;
    }

};
