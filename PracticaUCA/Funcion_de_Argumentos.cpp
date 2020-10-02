#include <iostream>

using namespace std;

int pedir_datos(int,int,int);

int a,b,n;
int main()
{
    pedir_datos(a,b,n);
    
    return 0;
}
int pedir_datos(int a,int b,int n){
    int suma=0;
    cout<<"Digite el inicio del intervalo: ";cin>>a;
    cout<<"Digite el fin del intervalo: ";cin>>b;
    cout<<"Digite el numero divisor: ";cin>>n;

    for(int i=a; i<=b; i++){
        if(i%n == 0){
            suma = suma + i;
        }
    }
    cout<<"La suma de todos los numeros divisible es: "<<suma;

    return suma;
}