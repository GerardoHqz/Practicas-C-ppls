#include <iostream>

using namespace std;
int main(){
    int num,suma=0,expresion;
    cout<<"PROGRAMA DE SUMA 1+2+3...+2N-1"<<endl;

    cout<<"Digite el numero de elementos: ";cin>>num;
    for(int i=1; i<=num; i+=2)
    suma += i;
    expresion = (2*num)+(1-suma);

    cout<<expresion;

    return 0;
    
}