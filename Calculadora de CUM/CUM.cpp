#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct CUM {
    int UV;
    float notas;
} Materias[6];

int main ()
{
    float n,CUMF=0,SumaUV=0,acumulador;
    cout<<"CACULO DE TU CUM"<<endl;
    cout<<"Cantidad de materias: ";cin>>n;
    for (int i=0;i<n;i++){
    fflush(stdin);
    cout<<"Materia "<<i+1<<endl;
    cout<<"Digite las UVs: "; cin>>(Materias[i].UV);
    cout<<"Digite la nota obtenida: "; cin>>(Materias[i].notas);
    SumaUV = SumaUV + Materias[i].UV;
    CUMF = CUMF+(Materias[i].notas * Materias[i].UV);
    cout<<endl;
    }
    CUMF = CUMF / SumaUV;
    cout<<"Digite su CUM anterior o acumulado: ";cin>>acumulador;
    if(acumulador != 0){
      CUMF = (CUMF + acumulador)/2;
    }
    cout<<endl;
    cout<<"Resultados de CUM"<<endl;
    
    cout<<setprecision(3)<<"CUM FINAL: "<<CUMF<<endl;

    return 0;
}