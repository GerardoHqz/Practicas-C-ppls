#include <iostream>

using namespace std;

void pedir_numeros(int,int);

int m,n,band;
int main()
{
    int div;
    pedir_numeros(m,n);
    if (band == true){
        cout<<"Si es divisible.";
    }
    else {cout<<"No es divisible.";}

    return 0;
}

void pedir_numeros(int m, int n){
    bool band = false;
    cout<<"Digite dos valores: ";cin>>m;
    cout<<"Digite dos valores: ";cin>>n;

    if(m%n == 0){
        band = true;
    }
}



