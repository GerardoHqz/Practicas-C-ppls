#include <iostream>

using namespace std;

int main ()
{
    string colores;

    cout<<endl;
    cout<<"ELIGE UN COLOR Y GANA."<<endl; cout<<endl;
    cout<<"Elige entre los colores: rojo, negro, amarillo, anaranjado, verde."<<endl;
    cout<<"Digite su color: "; cin>>colores;

    if (colores == "rojo" || colores == "Rojo")
    {
        cout<<"Felicidades usted ha ganado $5 dolares.";
    }
    else if (colores == "negro" || colores =="Negro")
    {
        cout<<"Felicidades usted ha ganado $3 dolares.";
    }
    else if (colores == "amarillo" || colores == "Amarillo")
    {
        cout<<"Felicidades usted ha ganado $10 dolares";
    }
    else if (colores == "anaranjado" || colores == "Anaranjado")
    {
        cout<<"Felicidades usted ha gando $1 dolar";
    }
    else if (colores == "verde" || colores == "Verde")
    {
        cout<<"Felicidades usted ha ganado $6 dolares";
    }

    cout<<endl; cout<<endl;

    return 0;
}