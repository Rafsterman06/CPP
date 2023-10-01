#include<iostream>
#include<string.h>
using namespace std;

class Triangulo{

  protected:

    char caracter;

    int m;
    void llenararreglo(int, char );

    char miarreglo[100][100];

    int opc;


  public:

    Triangulo();

    void triangulo1();

    void triangulo2();

    void triangulo3();

    void triangulo4();

    void set_m();

    void set_caracter();

    int get_m();

    char get_caracter();

  bool preguntar();

  int get_opc();

  void set_opc();
};