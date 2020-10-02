#include <iostream>

using namespace std;

void Pedir_Datos();
void Buscar_numero(int,int elementos[100]);

char band = 'F';
int n,elementos[100],superior=n,inferior=0,mitad,dato;

int main()
{ 
    Pedir_Datos();
    Buscar_numero(n,elementos);
    if(band == 'V'){
        cout<<"Hemos encontrado tu dato en la posicion: "<<mitad;
    }
    else{cout<<"Tu dato no ha sido encontrado verifica si existe en el sistema";}

    return 0;
}

void Pedir_Datos(){
    cout<<"Digite la cantidad de elementos: ";cin>>n;
    for (int i=0; i<n;i++){
        cout<<i+1<<".Digita un dato: ";cin>>elementos[i];
    }
}
void Buscar_numero(int,int elementos[100]){
    cout<<"Que numero deseas buscar: ";cin>>dato;
    while(inferior <= superior){
        mitad = (inferior + superior)/2;
        if(elementos[mitad] == dato){
            band = 'V';
            break;
        }
        else if(elementos[mitad] > dato){
            superior = mitad;
            mitad = (inferior + superior)/2;
        }
        else if(elementos[mitad] < dato){
            inferior = mitad;
            mitad = (inferior + superior)/2;
        }
    }
}