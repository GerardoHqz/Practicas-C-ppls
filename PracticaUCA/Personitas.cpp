#include <iostream>

using namespace std;

int main ()
{
  string persona = "", prog="";
  cout<<endl;
  cout<<"Que persona eres en la vida de Gerardo."<<endl;
  cout<<endl;
  cout<<"Dime tu nombre: ";cin>>persona;

  if (persona == "Nathalie")
  {
      cout<<"Nathalie tu eres la novia de Gerardo y eres muy importante para el y te ama mucho.";
      cout<<endl;
  }
  else if (persona =="Marvin")
  {
      cout<<"Tu eres el papa de Gerardo, un gusto en conocerte.";
      cout<<endl;
  }
  else if (persona == "Yolanda")
  {
      cout<<"Tu eres la mami de Gerardo, Felicidades por cierte c: ";
      cout<<endl;
  }
  else if (persona == "Alejandro")
  {
      cout<<"Tu eres el hermanito calvo de Gerardo, VIVA POKEMON.";
      cout<<endl;
  }
  else if (persona == "Francisca")
  {
      cout<<"Tu eres la abuelita de Gerardito, podrias hacerle un cafesito.";
      cout<<endl;
  }
  else if (persona == "Alexia")
  {
      cout<<"Tu eres la mejor amiga/hermanita de Gerardo, el te quiere mucho"<<endl;
      cout<<endl;
  }
  else { cout<<"Tu no eres importante para Gerardo, lo siento :c";
  cout<<endl; }

 return 0; 
}
