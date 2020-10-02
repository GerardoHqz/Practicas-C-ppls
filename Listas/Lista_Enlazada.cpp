#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void Agregar_lista(Nodo *&, int);
void Mostrar_lista(Nodo *);
void Buscar_lista(Nodo *,int);
void Eliminar_elemento(Nodo *&,int);
void Eliminar_lista(Nodo *&, int &);

int main()
{
    Nodo *lista = NULL;
    int dato,opcion;

    do{ 
        cout<<".....MENU.....\n";
        cout<<"1.Agregar elementos a la lista\n";
        cout<<"2.Mostrar elementos a la lista\n";
        cout<<"3.Buscar elementos en la lista\n";
        cout<<"4.Eliminar un elemento de la lista\n";
        cout<<"5.Vaciar la lista\n";
        cout<<"6.Salir\n";
        cout<<"Escriba su opcion: ";cin>>opcion;

        switch(opcion){
            case 1: 
            cout<<"Digite un elemnto: "; cin>>dato;
		    Agregar_lista(lista,dato);
            cout<<endl;
            system("pause");
            break;

            case 2:
            cout<<"\nMostrando elemtos de la lista: ";
            Mostrar_lista(lista);
            cout<<endl;
            system("pause");
            break;

            case 3:
            cout<<"\nElemento a buscar: "; cin>>dato;
            Buscar_lista(lista,dato);
            cout<<endl;
            system("pause");
            break;

            case 4:
            Eliminar_elemento(lista,dato);
            cout<<endl;
            system("pause");
            break;

            case 5:
            while(lista != NULL){
                Eliminar_lista(lista,dato);
                cout<<dato<<"->";
            }
            cout<<"Lista eliminada correctamente\n";
            cout<<endl;
            system("pause");
        }
        system("cls");

	}while(opcion != 6);

    return 0;
}
void Agregar_lista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;
    while((aux1 != NULL) && (aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;
    cout<<"\tElemento agregado a la lista";
}

void Mostrar_lista(Nodo *lista){
    if(lista != NULL){
        Nodo *actual = new Nodo;
        actual = lista;

        while(actual != NULL){
            cout<<actual->dato<<" -> ";
            actual = actual->siguiente;
        }
    }
    else{
        cout<<"---VACIA---";
    }
}

void Buscar_lista(Nodo *lista, int n){
    bool band = false;

    Nodo *actual = new Nodo();
    actual = lista;

    while((actual != NULL) && (actual->dato <= n)){
        if(actual->dato == n){
            band = true;
        }
        actual = actual->siguiente;
    }

    if(band == true){
        cout<<"Elemento "<<n<<" encontrado en la lista\n";
    }
    else{
        cout<<"Elemento "<<n<<" no encontrado en la lista\n";
    }
}

void Eliminar_elemento(Nodo *&lista, int n){
    if(lista != NULL){
        cout<<"\nElemento a eliminar: "; cin>>n;
        Nodo *auxBorrar;
        Nodo *anterior = NULL;
        auxBorrar = lista;

        while((auxBorrar != NULL) && (auxBorrar->dato != n)){
            anterior = auxBorrar;
            auxBorrar = auxBorrar->siguiente;
        }

        if(auxBorrar == NULL){
            cout<<"Elemento "<<n<<" NO encontrado\n";
        }
        else if(anterior == NULL){
            lista = lista->siguiente;
            delete auxBorrar; 
            cout<<"Elemento eliminado correctamente\n";
        }
        else{
            anterior->siguiente = auxBorrar ->siguiente;
            delete auxBorrar;
            cout<<"Elemento eliminado correctamente\n";
        }
    }
    else{
        cout<<"\nLa lista se encuentra vacia\n";
    }
}

void Eliminar_lista(Nodo *&lista, int &n){
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguiente;
    delete aux;
}