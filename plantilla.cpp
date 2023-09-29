//Libreria para entrada y salida de datos
#include <iostream>
//Libreria para usar punteros
#include <stdio.h>
//Libreria para usar arreglos de caracteres
#include <string>
using namespace std;

//Declaracion de una clase
class Punto {

    //Declaracion  de variables privadas
  private:            
    int x;
    int y;
  
  //Declaracion  de metodos publicos
  public:

    //constructor
    Punto(){
        setx(setint("Ingresa el valor de \'x\'"));
        sety(setint("Ingresa el valor de \'y\'"));
    }

    //metodos gets
    int getx(){
        return this->x;
    }
    int gety(){
        return this->y;
    }

    //metodos sets
    int setint(string mensaje){
        int valor;
        cout<<mensaje; cin>>valor;
        return valor;
    }

    void setx(int x){
        this->x=x;
    }
    void sety(int y){
        this->y=y;
    }
};

//Metodo main
int main(){
    //Declarando metodos

    Punto punto;
    punto.getx();
    punto.gety();

//ignorar
{
    int pause; //ignorar
    cin>>pause;//ignorar
    return 0;//ignorar
}
}
