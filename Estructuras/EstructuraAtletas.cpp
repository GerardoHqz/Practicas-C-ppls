#include <iostream>

using namespace std;

struct atletas{
    char nombre [20];
    char pais [20];
    int medallas;
}atle[100];

int main (){
    int nadadores, mayor=0, menor=100,posma;

    cout<<endl;
    cout<<"REGISTRO DE ATLETAS DE NATACION"<<endl;
    cout<<"Cuantos atletas introducira: "; cin>>nadadores;
    
    for(int i=1; i<=nadadores; i++){
        fflush(stdin);
        cout<<i<<". Nombre: "; cin.getline(atle[i].nombre,20);
        cout<<"Pais: "; cin.getline(atle[i].pais,20);
        cout<<"N.Medallas: "; cin>>atle[i].medallas;
        cout<<endl;

        if (atle[i].medallas > mayor){
            mayor = atle[i].medallas;
            posma=i;
        }
    }
    cout<<"Atletla con mayor numero de medallas:"<<endl;
    cout<<"Nombre: "<<atle[posma].nombre<<endl;
    cout<<"Pais: "<<atle[posma].pais<<endl;
    cout<<"N.Medallas: "<<atle[posma].medallas<<endl;

    return 0;
}