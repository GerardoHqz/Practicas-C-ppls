#include <iostream>

using namespace std;

int main()
{
    int num,contador=0;
    cout<<"PROGRAMA DE BULCE HASTA QUE INTRODUZCAS CERO"<<endl;
    
    do{
        cout<<"Digite un numero: ";cin>>num;
        if(num>0){
            contador++;
        }
    }while(num!=0);

    cout<<"El total de numeros es "<<contador;
    return 0;
}