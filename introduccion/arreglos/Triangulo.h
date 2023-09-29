#include<iostream>
#include<string.h>
using namespace std;

class Triangulo{

  private:

    int m;

    char caracter;

    char miarrlego[][];

    void llenararreglo(char [][], int ,int ,char );

  public:

    Triangulo();

    Triangulo(int ,int , char);

    void triangulo1();

    void triangulo4();

    void triangulo2();

    void triangulo3();
    
    int opc();

    bool preguntar();

    void set_m();

    void set_caracter();

    int get_m();

    char get_caracter();

    int inputnum();
};
