#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Clientes{
    char nombre [30];
    int edad;
    int clave;
};
struct Nodo{
    Clientes dato;
    Nodo *siguiente;
};
void PedirDatos(Clientes &);
void agregarCola(Nodo *&,Nodo *&, Clientes);
bool cola_vacia(Nodo *);
void sacarCola(Nodo *&,Nodo *&,Clientes &);

int main (){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    char opcion;
    Clientes personas;
    
    do{
        PedirDatos(personas);
        agregarCola(frente,fin,personas);

        cout<<"Presione x para seguir agregando clientes...";cin>>opcion;
        system ("cls");
    }while(opcion == 'x' || opcion == 'X');

    cout<<"\n*****MOSTRANDO DATOS DE CLIENTES*****\n";

    while(frente != NULL){
        sacarCola(frente,fin,personas);
        cout<<"Nombre: "<<personas.nombre<<endl;
        cout<<"Edad: "<<personas.edad<<endl;
        cout<<"Clave: "<<personas.clave<<endl;
        cout<<endl;
    }



    return 0;
}

void PedirDatos(Clientes &personas){
    fflush(stdin);
    cout<<"\n*****REGISTRO DE CLIENTES*****\n";
    cout<<"Nombre del cliente: ";cin.getline(personas.nombre,30);
    cout<<"Edad del cliente: ";cin>>personas.edad;
    cout<<"Clave del cliente: ";cin>>personas.clave;
    cout<<"\n";
}

void agregarCola(Nodo *&frente,Nodo *&fin, Clientes personas){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = personas;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;

    cout<<"Cliente agregado exitosamente.\n";

}
bool cola_vacia(Nodo *frente){
    return(frente == NULL)? true : false;
}

void sacarCola(Nodo *&frente,Nodo *&fin,Clientes &personas){
    Nodo *aux = frente;
    personas = frente->dato;

    if(frente == fin){
        fin = NULL;
        frente = NULL;
    }
    else{
        frente = frente->siguiente;
    }

    delete aux;
}