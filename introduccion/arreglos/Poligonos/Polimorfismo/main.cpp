#include<iostream>

#include"ClaseImple.h"

using namespace std;
int main(){
    Ser_Vivo* vector[1];
    vector[0]=new Ser_Vivo("Rafael de jesis",23);

    vector[0]->set_nombre();

    cout<<vector[0]->get_nombre()<<endl;


    return 0;
}
