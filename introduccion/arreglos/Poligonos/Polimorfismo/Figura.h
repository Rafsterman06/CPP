class Figura{
    private:
        std::string nombre="";
        int lados=0;
        double perimetro=0.0, area=0.0, distancia=0.0;

    public:
        ~Figura();
        
        Figura();
        Figura(std::string);
        Figura(std::string, int);
        Figura(std::string, int, double);
        Figura(std::string, int, double, double);
        Figura(std::string, int, double, double, double);

        void set_nombre();
        std::string get_nombre();

        void set_lados();
        int get_lados();
        void set_area();
        double get_area();
        void set_perimetro();
        double get_perimetro();
        void set_distancia();
        double get_distancia();

        void mostrar_todo();

        virtual void Perimetro();
        virtual void Area();
};

class Cuadrado: public Figura{
    private:

    public:
        ~Cuadrado();

        Cuadrado();
        Cuadrado(std::string);
        Cuadrado(std::string, int);
        Cuadrado(std::string, int, double);
        Cuadrado(std::string, int, double, double);
        
        void perimetro();
        void area();
};