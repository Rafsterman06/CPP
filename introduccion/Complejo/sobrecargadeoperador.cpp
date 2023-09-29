#include<iostream>
using namespace std;
class Libro{
    private:
        int numpag,inx;
        string autor;
    public:
        Libro(string a, int n);
        Libro(const Libro& cl);
        Libro& operator=(const Libro& al){
            if(this == &al){
                return *this;
            }else{
                autor=al.autor;
                inx=al.inx;
                numpag=al.numpag;
                for(int i=0; i<inx; i++){

                }
            }
        }
};

class Pagina{
    private:

    public:
};