#include <iostream>

using namespace std;

struct Ciclista{
    int horas;
    int minutos;
    int segundos;
}etapas[3], *puntero_etapas = etapas;

void pedir_datos();
void Calculo_de_Etapas(Ciclista *);

int main ()
{
    cout<<"TIEMPO EMPLEADO EN QUE UN CICLISTA RECORRE 3 ETAPAS. \n";
    pedir_datos();
    Calculo_de_Etapas(puntero_etapas);

    return 0;
}
void pedir_datos(){
    for(int i=0;i<3;i++){
        cout<<"Digita el tiempo de la etapa "<<i+1<<"\n";
        cout<<"Horas: ";cin>>(puntero_etapas+i)->horas;
        cout<<"Minutos: ";cin>>(puntero_etapas+i)->minutos;
        cout<<"Segundos: ";cin>>(puntero_etapas+i)->segundos;
        cout<<"\n";
    }
}
void Calculo_de_Etapas(Ciclista *puntero_etapas){
    int hh=0,min=0,seg=0;
    for (int i=0;i<3;i++){
        hh += (puntero_etapas+i)->horas;
        min += (puntero_etapas+i)->minutos;
        seg += (puntero_etapas+i)->segundos;
    }

    cout<<"\n Tiempo total en recorrer las 3 Etapas \n";
    cout<<hh<<" horas,"<<min<<" minutos,"<<seg<<" segundos.";
}