#include <iostream>
using namespace std;
int main ()
{
    float dinero;
    char pais[20];
    float iva = 0;

    cout<<endl;
    cout<<"CALCULADORA DE IVA"<<endl;
    cout<<"Digite el nombre de su pais: "; cin.getline(pais,20);
    cout<<"Digite el monto de dinero: "; cin>>dinero;
    
    if (strcasecmp(pais,"Guatemala")==0 || strcasecmp(pais,"guatemala")==0)
    {   
        iva = dinero * 0.13;
        cout.precision(2);
        cout<<"Usted debe cancelar: $"<<iva;
    }
    else if (strcasecmp(pais,"Guatemala")==0 || strcasecmp(pais,"guatemala")==0)
    {
        iva = dinero * 0.09;
        cout.precision(2);
        cout<<"Usted debe cancelar: $"<<iva;
    }
    else if (strcasecmp(pais,"Honduras")==0 || strcasecmp(pais,"honduras")==0)
    {
        iva = dinero * 0.15;
        cout.precision(2);
        cout<<"Usted debe cancelar: $"<<iva;
    }
    else if (strcasecmp(pais,"España")==0 || strcasecmp(pais,"españa")==0)
    {
        iva = dinero * 0.20;
        cout.precision(2);
        cout<<"Usted debe cancelar: $"<<iva;
    }
    else{cout<<"Su pais no esta en nuestro programa.";}
    cout<<endl; cout<<endl;
    return 0;
}