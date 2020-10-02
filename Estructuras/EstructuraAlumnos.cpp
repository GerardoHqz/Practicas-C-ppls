#include <iostream>
#include <string.h>

using namespace std;

struct alumnos {
    char nombre [20];
    int edad;
    float promedio;
} alumno[3];

int main(){

    char mayor[20];

    cout<<"DOCUMENTACION DE ALUMNOS."<<endl;

    for (int i=1;i<=3;i++){
    fflush(stdin);
    cout<<"Alumno "<<i<<endl;
    cout<<"Digite el nombre del alumno: "; cin.getline(alumno[i].nombre,20);
    cout<<"Digite la edad: "; cin>>(alumno[i].edad);
    cout<<"Digite el promedio: "; cin>>(alumno[i].promedio);
    cout<<endl;
    }

    cout<<"DATOS ADQUIRIDOS"<<endl;
    for (int i=1;i<=3;i++){
    cout<<"Alumno"<<i;  
    cout<<"Nombre: "<<alumno[i].nombre<<endl;
    cout<<"Edad: "<<alumno[i].edad<<endl;
    cout<<"Promedio: "<<alumno[i].promedio<<endl;
    cout<<endl;
    }

    if (alumno[1].promedio >= alumno[2].promedio || alumno[1].promedio >= alumno[3].promedio){
        cout<<"El promedio mas alto es el de "<<alumno[1].nombre;
    }
    else if (alumno[2].promedio >= alumno[1].promedio || alumno[2].promedio >= alumno[3].promedio){
        cout<<"El promedio mas alto es el de "<<alumno[2].nombre;
    }
    if (alumno[3].promedio >= alumno[1].promedio || alumno[3].promedio >= alumno[2].promedio){
        cout<<"El promedio mas alto es el de "<<alumno[3].nombre;
    }

    return 0;
}