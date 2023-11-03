#include<iostream>
#include"Arreglo.h"
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){

    Problema1* Obj_calcular_cambio=new Problema1();
    Problema2* Obj_leer_imprimir_arreglo=new Problema2();
    Problema3* Obj_sumar_no_diagonal=new Problema3();
    Problema4* Obj_triangulo_de_pascal=new Problema4();
    Problema5 Obj_random;

    int num;
    int opc=0;
    bool bucle=true;
    while (bucle){
        cout<<"1) Problema 1"<<endl<<"2) Problema 2"<<endl<<"3) Problema 3"<<endl<<"4) Problema 4"<<endl<<"5) Problema 5"<<endl<<"6) Problema 6"<<endl<<"7) Todo Junto"<<endl<<"8) Salir"<<endl;
        cin>>opc;
        switch (opc){
        case 1:
            //Calcular Cambio
            
                cout<<"Ingresa el Precio del Producto "; cin>>num; Obj_calcular_cambio->set_prepo(num);
                cout<<"Ingresa el Pago "; cin>>num; Obj_calcular_cambio->set_pago(num);
                Obj_calcular_cambio->calculadora();
                cout<<"Pagate "<<Obj_calcular_cambio->get_pago()<<endl<<"El producto costo "<<Obj_calcular_cambio->get_prepo()<<endl<<"Tu cambio es "<<Obj_calcular_cambio->get_devo()<<endl;
                system("pause");
        break;
        case 2:
            //Leer e Imprimir un arreglo
                Obj_leer_imprimir_arreglo->leer_arrglego();
                system("pause");
        break;
        case 3:
            //Suma de los elementos que no pertenecen a la diagonal

                Obj_sumar_no_diagonal->sumadeloselementosquenopertenecenaladiagonal();
                system("pause");
        break;
        case 4:
            //Triangulo de Pascal
                
                cout<<"Ingresa el nivel para el triangulo de pascal "; cin>>num;
                Obj_triangulo_de_pascal->triangulo_de_pascal(num);
                system("pause");
        break;
        case 5:
            //Suma de los elementos de un arreglo que no sea la diagonal principal
                
                Obj_random.llenar_arreglo();
                Obj_random.ordenar_arreglo();
                cout<<"======================================="<<endl;
                Obj_random.leer_arreglo();
        break;
        case 6:
            system("random.exe");
        break;
        case 7:
            //===========================================================================================================================================

            //===========================================================================================================================================

                //Calcular Cambio

                cout<<"Ingresa el Precio del Producto "; cin>>num; Obj_calcular_cambio->set_prepo(num);
                cout<<"Ingresa el Pago "; cin>>num; Obj_calcular_cambio->set_pago(num);
                Obj_calcular_cambio->calculadora();
                cout<<"Pagate "<<Obj_calcular_cambio->get_pago()<<endl<<"El producto costo "<<Obj_calcular_cambio->get_prepo()<<endl<<"Tu cambio es "<<Obj_calcular_cambio->get_devo()<<endl;
                system("pause");
                system("cls");

            //===========================================================================================================================================

            //===========================================================================================================================================

                //Leer e Imprimir un arreglo
                Obj_leer_imprimir_arreglo->leer_arrglego();
                system("pause");
                system("cls");

            //===========================================================================================================================================

            //===========================================================================================================================================

                //Suma de los elementos que no pertenecen a la diagonal

                Obj_sumar_no_diagonal->sumadeloselementosquenopertenecenaladiagonal();
                system("pause");
                system("cls");

            //===========================================================================================================================================

            //===========================================================================================================================================
                
                //Triangulo de Pascal

                cout<<"Ingresa el nivel para el triangulo de pascal "; cin>>num;
                Obj_triangulo_de_pascal->triangulo_de_pascal(num);
                system("pause");
                system("cls");

            //===========================================================================================================================================

            //===========================================================================================================================================

                //Suma de los elementos de un arreglo que no sea la diagonal principal

                Obj_random.llenar_arreglo();
                Obj_random.ordenar_arreglo();
                cout<<"======================================="<<endl;
                Obj_random.leer_arreglo();
                system("pause");
                system("cls");

            //===========================================================================================================================================

            //===========================================================================================================================================

        break;
        case 8:
            bucle=false;
        break;
        
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
    }
    




Obj_calcular_cambio->~Problema1();
Obj_leer_imprimir_arreglo->~Problema2();
Obj_sumar_no_diagonal->~Problema3();
Obj_triangulo_de_pascal->~Problema4();
Obj_random.~Problema5();


    system("pause");
    return 0;
}