#include <iostream>
#include <string.h>

using namespace std;

void Inicio_Sesion(string,string);

int main()
{
    string user,password;
    cout<<"****Bienvenido a Tecnologias Henriquez****\n";
    cout<<"Iniciar sesion\n";
    Inicio_Sesion(user,password);

    return 0;
}

void Inicio_Sesion(string user, string password){
    int contador = 0;
    bool band = false;
    do{
      cout<<"User: "; cin>>user;
      cout<<"Password: "; cin>>password;


      if(password.compare("contraseña")==0){
          band = true;
          contador = 2;
      }

      else{
        cout<<"Credenciales incorrectas.\n";
      }        
      cout<<endl;

      contador++;
    }while(contador != 3);

    if(band == true){
        cout<<"¡Exito!";
    }
    else{
        cout<<"Acceso denegado";
    }
}