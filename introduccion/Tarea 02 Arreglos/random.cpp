#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    char frace[150]={' '};
    cout<<"Ingresa una frase"<<endl;
    cin.getline(frace,150);
    char abecedario[]={"abcdefghijklmnopqrstuvwxyz"}; //Se usa como diccionario de referencia para el switch
    int caracter_mas_usado=0;
    int ccaracter_mas_usado=0;
    int Aa[150]={0}, Ee[150]={0}, Ii[150]={0}, Oo[150]={0}, Uu[150]={0}; //Ubicacion de las vocales

//Contadores
    int contador[26]={0}; //Cuenta las letras y las almacena en una ubicacion que pretende estar vinculado al abecedario
    int contador_vocales[5]={0}; //itera para almecenar las ubicaciones

// Este for recorre la frase y cuenta las letras, las almecena en el arreglo contador
    for (size_t i = 0; i < sizeof(frace); i++){
        char Exprecion=frace[i];
        
        switch (Exprecion){
            case 'a':
                Aa[contador_vocales[0]]=i;
                contador_vocales[0]=contador_vocales[0]+1;
                contador[0]=contador[0]+1;
            break;
            case 'b':contador[1]+=1;break;
            case 'c':contador[2]+=1;break;
            case 'd':contador[3]+=1;break;
            case 'e':
                Ee[contador_vocales[1]]=i;
                contador_vocales[1]=contador_vocales[1]+1;
                contador[4]=contador[4]+1;
            break;
            case 'f':contador[5]+=1;break;
            case 'g':contador[6]+=1;break;
            case 'h':contador[7]+=1;break;
            case 'i':
                Ii[contador_vocales[2]]=i;
                contador_vocales[2]=contador_vocales[2]+1;
                contador[8]=contador[8]+1;
            break;
            case 'j':contador[9]+=1;break;
            case 'k':contador[10]+=1;break;
            case 'l':contador[11]+=1;break;
            case 'm':contador[12]+=1;break;
            case 'n':contador[13]+=1;break;
            case 'o':
                Oo[contador_vocales[3]]=i;
                contador_vocales[3]=contador_vocales[3]+1;
                contador[14]=contador[14]+1;
            break;
            case 'p':contador[15]+=1;break;
            case 'q':contador[16]+=1;break;
            case 'r':contador[17]+=1;break;
            case 's':contador[18]+=1;break;
            case 't':contador[19]+=1;break;
            case 'u':
                Uu[contador_vocales[4]]=i;
                contador_vocales[4]=contador_vocales[4]+1;
                contador[20]=contador[20]+1;
            break;
            case 'v':contador[21]+=1;break;
            case 'w':contador[22]+=1;break;
            case 'x':contador[23]+=1;break;
            case 'y':contador[24]+=1;break;
            case 'z':contador[25]+=1;break;
        
            default:
            break;
        }
    }
    

// Recorre y compara las cantidades para sacar el caracter mas usado
    for (size_t i = 0; i < sizeof(contador)/4; i++){
        if(contador[i]>caracter_mas_usado){
            caracter_mas_usado=contador[i];
            ccaracter_mas_usado=i;
        }
        
    }
    cout<<abecedario[ccaracter_mas_usado]<<endl;

    for (size_t i = 0; i < sizeof(Aa)/4; i++){
        if(Aa[i]>0){
            frace[Aa[i]]=abecedario[ccaracter_mas_usado];
        }
    }
    for (size_t i = 0; i < sizeof(Ee)/4; i++){
        if(Ee[i]>0){
            
            frace[Ee[i]]=abecedario[ccaracter_mas_usado];
        }
    }
    for (size_t i = 0; i < sizeof(Ii)/4; i++){
        if(Ii[i]>0){
            
            frace[Ii[i]]=abecedario[ccaracter_mas_usado];
        }
    }
    for (size_t i = 0; i < sizeof(Oo)/4; i++){
        if(Oo[i]>0){
            frace[Oo[i]]=abecedario[ccaracter_mas_usado];
        }
    }
    for (size_t i = 0; i < sizeof(Uu)/4; i++){
        if(Uu[i]>0){
            frace[Uu[i]]=abecedario[ccaracter_mas_usado];
        }
    }

    cout<<frace<<endl;
    system("pause");
    return 0;
    
}