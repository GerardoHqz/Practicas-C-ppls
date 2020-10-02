#include <iostream>

using namespace std;

void pedir_numeros(int,int,int,float);

int dato,suma=0,contador=0;
float promedio=0;
int main()
{
    cout<<"FUNCION."<<endl; 
    pedir_numeros(dato,suma,contador,promedio);
    

    return 0;
}
void pedir_numeros(int dato, int suma, int contador, float promedio){
    
    do{
        cout<<"Digite un numero: ";cin>>dato;
        suma=suma+dato;
        contador=contador+1;
    }while(dato!=0);

    promedio = suma/contador;

    cout<<"Resultados: "<<endl;
    cout<<"Numeros: "<<contador<<endl;
    cout<<"Suma:"<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
}