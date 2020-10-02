#include <iostream>
#include <string.h>

using namespace std;
void pedir_datos (char vector[],int,int&);


char vector[100];
int contador,n;
int main()
{
    pedir_datos(vector,n,contador);
    cout<<"Cantidad de vocales: "<<contador;
    return 0;
}
void pedir_datos(char vector[],int n,int& contador){
    contador=0;
    cout<<"Cuantos caracteres quiere digitar: "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<i+1<<".Digite caracter: ";cin>>vector[i];
        if(vector[i] == 'a' || vector[i] == 'e' || vector[i] == 'i' || vector[i] == 'o' || vector[i] == 'u'){
            contador ++;
        }
    }

}
