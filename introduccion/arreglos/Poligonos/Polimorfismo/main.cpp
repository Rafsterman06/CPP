#include<iostream>

#include"ClaseImple.h"

using namespace std;

int main(){
    Ser_Vivo *vector1[1];
    Humano *vector2[1];
    Perro *vector3[1];
    vector1[0]=new Ser_Vivo("Rafael de jesus",23);

    vector1[0]->set_nombre();

    cout<<vector1[0]->get_nombre()<<endl;


    vector2[0]=new Humano("Rafael",22,"Martinez");

    vector2[0]->comer();

    vector2[0]->gastar_a_lo_pendejo();

    vector3[0]=new Perro("Sancho",3,"Rafael");
    vector3[0]->comer();

system("pause");
system("cls");
    return 0;
}
