class Problema1{
    /*
        Construya un programa tal que dado el costo de un artículo vendido y
        la cantidad de dinero entregada por el cliente, calcule e imprima el
        cambio que se debe entregar al mismo.
    */
private:

    /*
        - PREPRO es una variable de tipo real que representa el precio del producto.

        - PAGO es una variable de tipo real que representa el pago que realiza el cliente.

        - DEVO es una variable de tipo real. Almacena el cambio que se debe entregar al cliente.
    */
    int PREPO=0,PAGO=0, DEVO=0;

public:
//Destructor
    ~Problema1(); //Destructor

//Costructores
    Problema1(); //Constructor vacio
    Problema1(int); //Constructor con PREPO como argumento
    Problema1(int, int); //Constructor con PREPO y PAGO como argumentos

//Metodos get y set de PREPO
    void set_prepo(int); //Metodo set de PREPO
    int get_prepo(); //Metodo get de PREPO

//Metodos get y set PAGO
    void set_pago(int); //Metodo set de PAGO
    int get_pago(); //Metodo get de PAGO

//Metodos get y set de DEVO
    void set_devo(int); //Metodo set de DEVO
    int get_devo(); //Metodo get de DEVO

//Calculando cambio
    void calculadora();
    
};


//===========================================================================================================================================
//===========================================================================================================================================

class Problema2{
    /*
        Leer un arreglo e imprimirlo conforme columnas y filas
    */
    private:
        int miarreglo[3][5]={{4,7,1,3,5},{2,0,6,9,7},{3,1,2,6,4}};
    public:

//Destructor
        ~Problema2(); //Destructor

//Costructores
        Problema2(); //Constructor sin argumentos

//LLenado del arreglo
        void llenar_arreglo();

//Leer arreglo
        void leer_arrglego();

};


//===========================================================================================================================================
//===========================================================================================================================================

class Problema3{
    public:
    
//Destructor
        ~Problema3();

//Costructor        
        Problema3();

//Metodo que suma los elementos que no pertenecen a la diagonal principal
        void sumadeloselementosquenopertenecenaladiagonal();
};


//===========================================================================================================================================
//===========================================================================================================================================

class Problema4{
    public:

//Destructor
        ~Problema4();

//Constructor
        Problema4();

//Metodo que hace el triangulo de Pascal
        void triangulo_de_pascal(int);
};


//===========================================================================================================================================
//===========================================================================================================================================

class Problema5{

    private:
        int miarreglo[20];
    public:

//Destructor
        ~Problema5();

//Costructor
        Problema5();

//Metodos
        int generaraleatorio(); //Me genera un numero aleatorio
        void llenar_arreglo(); //LLeno el arreglo conforme a los numero aleatorios que retorna el metodo anterior
        void ordenar_arreglo(); //Ordena el arreglo de forma desendente con el metodo de burbuja para que la suma de los 10 primeros sean mayor que la suma de los 10 ultimos
        void leer_arreglo(); //Lee el arreglo
};

//===========================================================================================================================================
//===========================================================================================================================================

class Problema6{

    private:
    
        
    protected:
        char frace[150]={' '};
        char abecedario[27]={"abcdefghijklmnopqrstuvwxyz"}; //Se usa como diccionario de referencia para el switch
        int caracter_mas_usado=0;
        int ccaracter_mas_usado=0;
        int Aa[150]={0}, Ee[150]={0}, Ii[150]={0}, Oo[150]={0}, Uu[150]={0}; //Ubicacion de las vocales
//Contadores
        int contador[26]={0}; //Cuenta las letras y las almacena en una ubicacion que pretende estar vinculado al abecedario
        int contador_vocales[5]={0}; //itera para almecenar las ubicaciones


    public:

//Destructor
        ~Problema6();

//Constructores
        Problema6(); //Constructor vacio

//Metodos get y set de frade
        void set_frase(char []);
        std::string get_frace();

//Metodos
        void evaluarcadena();
        void reemplazar_vocales();
};
