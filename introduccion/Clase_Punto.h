#include<iostream>
#include<string>
using namespace std;
class Punto{
  private:            
    int x;
    int y;
  
  //Declaracion  de metodos publicos
  public:
    Punto();
    Punto(int,int);
    int getx();
    int gety();
    int setint(string);
    void setx(int);
    void sety(int);
};