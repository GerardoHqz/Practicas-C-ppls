#include <iostream>

using namespace std;

int main()
{
   int vector[100],n,*puntero,menor=999;
   cout<<"Digite la cantidad de numeros que quiere: ";cin>>n;
   for(int i=0;i<n;i++){
       cout<<"Digite un numero: ";cin>>vector[i];
   }
   puntero = vector;
   for(int i=0;i<n;i++){
       if(*puntero < menor ){
           menor = *puntero;
       }
   }
   cout<<"El menor numero es: "<<*puntero;

    return 0;
}