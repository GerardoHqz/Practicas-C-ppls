#include <iostream>

using namespace std;

int main ()
{
    string colores;
    float iva=0;
    float dinero;

    cout<<endl;
    cout<<"ELIGE UN COLOR Y GANA."<<endl; cout<<endl;
    cout<<"Elige entre los colores: rojo, negro, amarillo, anaranjado, verde."<<endl;
    cout<<"Digite su color: "; cin>>colores;
    cout<<"Digite el monto: "; cin>>dinero;

    if (colores == "España" || colores == "españa")
    {
        iva=dinero*0.13;
        cout<<iva;
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