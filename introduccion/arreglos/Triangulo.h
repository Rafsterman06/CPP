#include<iostream>
#include<string.h>
using namespace std;

class Triangulo{

  private:
    char miarrlego[10][10];

    void llenararreglo();

  public:

    Triangulo();

    void triangulo1();

    void triangulo4();

    void triangulo2();

    void triangulo3();
    
    int opc();

    bool preguntar();
};
