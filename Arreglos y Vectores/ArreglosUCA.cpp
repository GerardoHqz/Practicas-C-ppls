#include <iostream>

using namespace std;

void Pedir_Datos(int vector1[],int);
void Suma_Datos(int vector1[],int,int vector2[],int vector3[]);
void Resultado(int vector3[],int);

int vector1[100],vector2[100],vector3[100],tam;

int main ()
{
    cout<<"Dime el tamaño de tus arreglos: ";cin>>tam;
    
    Pedir_Datos(vector1,tam);
    Suma_Datos(vector1,tam,vector2,vector3);
    Resultado (vector3,tam);
    

    return 0;
}
void Pedir_Datos(int vector1[],int tam){
    cout<<"Arreglo 1."<<endl;
    for(int i=0;i<tam;i++){
        cout<<i+1<<". Digite un numero: ";cin>>vector1[i];
    }
    cout<<"Arreglo 2."<<endl;
    for(int i=0;i<tam;i++){
        cout<<i+1<<". Digite un numero: ";cin>>vector2[i];
    }
}
void Suma_Datos(int vector1[],int tam,int vector2[],int vector3[]){
    int suma[100];
    for(int i=0;i<tam;i++){
        vector3[i] = vector1[i] + vector2[i];
    }
}
void Resultado(int vector3[], int tam){
    for(int i=0;i<tam;i++){
        cout<<vector3[i]<<" ";
    }
}

