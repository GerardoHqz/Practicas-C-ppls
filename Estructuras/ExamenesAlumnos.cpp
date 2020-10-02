#include <iostream>
#include <math.h>
using namespace std;
int main(){
 int n1,n2,n3,aprobaron_todos=0,aprobaron_almenos_uno=0,aprobaron_unicamente_el_ultimo=0,no_aprobo_ninguno=0;
 
 for ( int i=1;i<=5;i++)
 {
  cout<<"Alumno "<<i<<endl;
  cout<<"Nota primer parcial: ";cin>>n1;
  cout<<"Nota segundo parcial: ";cin>>n2;
  cout<<"Nota tercer parcial: ";cin>>n3;

  if (n1>=6 && n2>=6 && n3>=6)
  {
   aprobaron_todos++;}

  if (n1>=6 || n2>=6 || n3>=6)
  {
   aprobaron_almenos_uno++;
  }
  if (n3>=6)
  {
   aprobaron_unicamente_el_ultimo++;
  }

   if (n1<6 && n2<6 && n3<6)
   {
    no_aprobo_ninguno++;
   }
  }

  cout<<"La cantidad de alumnos que aprobaron los tres examenes son : "<<aprobaron_todos<<endl;
  cout<<"La cantidad de alumnos que aprobaron al menos un examen son : "<<aprobaron_almenos_uno<<endl;
  cout<<"La cantidad de alumnos que solo aprobaron el ultimo examen son : "<<aprobaron_unicamente_el_ultimo<<endl;
  cout<<"La cantidad de alumnos que no aprobo ningun examen son : "<<no_aprobo_ninguno<<endl;

 system("pause");
  
 return 0;
}