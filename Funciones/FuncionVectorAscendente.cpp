#include <iostream>

using namespace std;

void pedir_datos();
void creciente(int vector[],int);

int vector[100],tam;

int main ()
{
    cout<<"ORDEN DE VECTORES CRECIENTEMENTE."<<endl;
    pedir_datos();
    creciente(vector,tam);

    return 0;
}
void pedir_datos(){
    int tam;
    cout<<"Cuantos datos tiene tu arreglo: ";cin>>tam;
    for(int i=0; i<tam; i++){
        cout<<i+1<<".Digite numero: ";cin>>vector[i];
    }
}
void creciente(int vector[], int tam){
    int band = 0;
    for(int i=0; i<tam-1;i++){
        if(vector[i]<vector[i+1]){
            band = 1;
        }
        
    }
    if(band=0){
        cout<<"Si esta ordenado";
    }
    else{cout<<"No esta ordenado";}
}