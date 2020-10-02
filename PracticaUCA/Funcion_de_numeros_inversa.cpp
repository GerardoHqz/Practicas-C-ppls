#include <iostream>
#include <string.h>

using namespace std;

void pedir_datos();
void proceso(int);

int numero,resultado;
int main()
{
    pedir_datos();
    proceso(numero);
    

    return 0;
}
void pedir_datos(){
    cout<<"NUMERO A LA INVERSA."<<endl;
    cout<<"Digite un numero: ";cin>>numero;
}
void proceso(int numero){     
    if(numero < 0){
        numero*=-1;
        while(numero!=0){
        resultado = numero%10;
        cout<<resultado;
        numero/=10;
        }
    }   
    if (numero > 0){
        while(numero!=0){
        resultado = numero%10;
        cout<<resultado;
        numero/=10;
        }
    }
}