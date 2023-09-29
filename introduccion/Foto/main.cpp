#include<iostream>
#include<string>
#include"Clase_Foto.h"
using namespace std;
class Foto{
    private:
        int nt;
        char opd;

    protected:
        string q;

    public:
    Foto(string r){
        this->nt=0;
        this->opd='S';
        this->q=r;
    }
    double mtd(){
        return 0;
    }
};

class Marco{
    private:
        double p;
        string t;

    public:
        Marco(){

        }
        void poner(){
            Foto* u=new Foto("Paloma");
            u->mtd();
            //this->t=u->q; no funciona por cuestion de encapsulamiento
        }
};
int main(){
    Foto foto("Hola mundo");

    _sleep(3000);
}