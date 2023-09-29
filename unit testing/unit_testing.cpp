#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
//Clase calculadora, almacena las funciones de la clase
class Calculadora{

//Atributos privados
    private:
    double result;
    int opc;

//Funciones que pertenecen a la clase calculadora
    public:

    //Funcion suma recibe dos parametros
    double sumar(double num2, double num1){
        return this->result=num1+num2;
    }

    //Funcion resta recibe dos parametros
    double restar(double num2, double num1){
        return this->result=num1-num2;
    }

    //Funcion multiplicacion recibe dos parametros
    double multiplicar(double num2, double num1){
        return this->result=num1*num2;
    }

    // Funcion dividir recibe dos parametros
    double dividir(double num2, double num1){
        
        //En caso de que el denominador no sea 0 se ejecutara la primera porcion del bloque if
        if (num2!=0){
            this->result=num1/num2;
        }
        //En caso de que el denominador sea 0 se ejecutrara esta porcion del codigo
        else{
            cout<<"No se puede dividir entre \'0\'";
        }
        return this->result;
    }

    //Esta funcion ayuda a introducir datos por teclado, recibe como parametro datos de tipo string para imprimer en pantalla un mensaje
    double setdouble(string mensaje){
        double num;
        cout<<mensaje;
        cin>>num;
        return num;
    }

    //Funcion que almacena datos al atributo opc, recibe como parametro un dato de tipo string
    void setopc(string mensaje){
        cout<<mensaje;
        cin>>this->opc;
    }

    //Esta funcion retorna los datos almacenados en el atributo opc
    int getopc(){
        return this->opc;
    }



    //Esta funcion es donce se realiza las pruebas unitarias de cada funcion anterior.
    void unit_test(double num2,double num1){
        cout<<"TEST 1 sumar "<<num1<<"+"<<num2<<" ";
        if(sumar(num2,num1)==(num1+num2)){
            cout<<"\tPASSED"<<endl;
        }else{
            cout<<"\tFAILED"<<endl;
        }
        cout<<"TEST 2 restar "<<num1<<"-"<<num2<<" ";
        if(restar(num2,num1)==(num1-num2)){
            cout<<"\tPASSED"<<endl;
        }else{
            cout<<"\tFAILED"<<endl;
        }
        cout<<"TEST 3 multiplicar "<<num1<<"*"<<num2<<" ";
        if(multiplicar(num2,num1)==(num1*num2)){
            cout<<"PASSED"<<endl;
        }else{
            cout<<"\tFAILED"<<endl;
        }
        cout<<"TEST 4 dividir "<<num1<<"/"<<num2<<" ";
        if(dividir(num2,num1)==(num1/num2)){
            cout<<"\tPASSED"<<endl;
        }else{
            cout<<"\tFAILED"<<endl;
        }
    }
};

int main(){
    Calculadora calculadora;
    Calculadora unit_test;
    calculadora.setopc("Ingresa una opcion\n\'1\' sumar\n\'2\' restar\n\'3\' multiplicar\n\'4\' dividir\n\'5\' pruebas unitarias\n\'6\' pruebas unitarias default\t");
    switch (calculadora.getopc()){
    case 1:
        cout<<calculadora.sumar(calculadora.setdouble("Ingresa el segundo numero\t"),calculadora.setdouble("Ingresa el primer numero\t"));
        break;
    case 2:
        cout<<calculadora.restar(calculadora.setdouble("Ingresa el segundo numero\t"),calculadora.setdouble("Ingresa el primer numero\t"));
        break;
    case 3:
        cout<<calculadora.multiplicar(calculadora.setdouble("Ingresa el segundo numero\t"),calculadora.setdouble("Ingresa el primer numero\t"));
        break;
    case 4:
        cout<<calculadora.dividir(calculadora.setdouble("Ingresa el segundo numero\t"),calculadora.setdouble("Ingresa el primer numero\t"));
        break;
    case 5:
        unit_test.unit_test(calculadora.setdouble("Ingresa el segundo numero\t"),calculadora.setdouble("Ingresa el primer numero\t"));
        break;
    case 6:
        unit_test.unit_test(10,20);
        break;
    default:
        cout<<"Opcion no valida"<<endl;
        break;
    }
    _sleep(3000);
}
