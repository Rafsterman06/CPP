#include<iostream>

class Ser_Vivo{
private:

    std::string nombre;
    int edad;
public:
    Ser_Vivo();
    Ser_Vivo(std::string , int);

    std::string get_nombre();

    void set_nombre();
    int get_edad();

    void set_edad();


    virtual void comer();
};
class Humano: public Ser_Vivo{
    private:
    std::string apellido;
    public:
    Humano();

    void gastar_a_lo_pendejo();
};