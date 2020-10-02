#include <iostream>

using namespace std;

void pedir_datos();
void arreglo(int vector[],int);

int vector[100],tam;
int main()
{
    pedir_datos();
    arreglo(vector,tam);

    return 0;
}
void pedir_datos(){
    cout<<"Cuantos datos tendra su arreglo: ";cin>>tam;
    for(int i=0;i<tam;i++){
        cout<<i+1<<".Digite numero: ";cin>>vector[i];
    }
}
void arreglo(int vector[],int tam){
	int vecImpares[100];
	int j=0;
	for(int i=0;i<tam;i++){
		if(vector[i]%2!=0){
			vecImpares[j] = vector[i];
			j++;
		}
	}
	
	cout<<"\nImprimiendo los elementos impares del vector: "<<endl;
	for(int i=0;i<j;i++){
		cout<<vecImpares[i]<<" ";
	}
}

    