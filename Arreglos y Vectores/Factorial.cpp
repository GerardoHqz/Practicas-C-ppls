#include <iostream>

using namespace std;

int main ()
{
    int n,mult=1;
    cout<<"PROGRAMA QUE NOS DA EL FACTORIAL DE UN NUMERO"<<endl;
    cout<<"Digite el numero: "; cin>>n;

    for(int i=1; i<=n; i++){
       mult = (mult*i);
    }
    

    cout<<"El facotrial es: "<<mult;

    return 0;
}