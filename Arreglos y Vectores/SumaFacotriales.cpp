#include <iostream>

using namespace std;

int main ()
{
    int n,mult=1,sum=0;
    cout<<"PROGRAMA QUE NOS DA LA SUMATORIA DE N FACTORIALES."<<endl;
    cout<<"Digite la cantidad de elementos a sumar:  "; cin>>n;

    for(int i=1; i<=n; i++){
       mult = (mult*i);
       sum = mult + sum;
    }
    

    cout<<"El facotrial es: "<<sum;

    return 0;
}