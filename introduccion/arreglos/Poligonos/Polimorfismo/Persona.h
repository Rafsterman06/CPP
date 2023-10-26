class Persona{
   private:
       std::string nombre;
       int edad;
   
   public:
       Persona();
       Persona(std::string, int);
       void set_nombre();
       std::string get_nombre();
       void set_edad();
       int get_edad();
       virtual void mostrar_datos();
};

class Empleado:public Persona{
    private:
        int sueldo;
    public:
        Empleado();
        Empleado(std::string,int,int);
        void set_sueldo();
        int get_sueldo();
        void mostrar_datos();
};