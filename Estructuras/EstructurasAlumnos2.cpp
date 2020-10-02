#include <iostream>

using namespace std;

struct notas{
    float nota1;
    float nota2;
    float nota3;
};
struct alumnos{
    char nombre[40];
    char sexo[10];
    int edad;
    struct notas prom;
}estu[100];

int main(){
    int n,posma=0;
    float promedio[100],mayor=0;
    cout<<endl;
    cout<<"REGISTRO DE ESTUDIANTES"<<endl;
    cout<<"Cuantos estudiantes desea registrar: ";cin>>n;

    for(int i=1; i<=n; i++){
        fflush(stdin);
        cout<<i<<".Estudiante"<<endl;
        cout<<"Nombre: "; cin.getline(estu[i].nombre,40);
        cout<<"sexo: "; cin.getline(estu[i].sexo,10);
        cout<<"edad: "; cin>>estu[i].edad;
        cout<<"Nota 1: "; cin>>estu[i].prom.nota1;
        cout<<"Nota 2: "; cin>>estu[i].prom.nota2;
        cout<<"Nota 3: "; cin>>estu[i].prom.nota3;
        promedio[i]=(estu[i].prom.nota1 + estu[i].prom.nota2 +estu[i].prom.nota3)/3;
        cout<<endl;

        if(promedio[i] >= mayor){
            mayor=promedio[i];
            posma=i;
        }
    }

    cout<<"ALUMNO CON MAYOR PROMEDIO."<<endl;
    cout<<"Nombre: "<<estu[posma].nombre<<endl;
    cout<<"Edad: "<<estu[posma].edad<<endl;
    cout<<"Sexo: "<<estu[posma].sexo<<endl;
    cout<<"Promedio: "<<mayor<<endl;

    return 0 ;
}