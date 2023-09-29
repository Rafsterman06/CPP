class Complejo{

    private:
        double x,y;

    public:
        Complejo(double r=0.0, double i=1.0){
            this->x=r;
            this->y=i;
        };
        void prueba(){

        }

};

int main(){
    Complejo zz[10];
    Complejo* ptr;
    ptr=new Complejo[5];
    ptr[4].prueba();

    return 0;
}