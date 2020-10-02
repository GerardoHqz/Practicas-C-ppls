#include<iostream>
#include<conio.h>
using namespace std;

int fibonacci(int n);

int main(){
	int nElementos;
	
	//Pedimos un numero entero positivo
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nElementos;
	}while(nElementos <= 0);
	
	//Mandamos llamar a la funcion pero de forma iterativa para imprimir todos los elementos
	cout<<"Serie Fibonacci: ";
	for(int i=0;i<nElementos;i++){
		cout<<fibonacci(i)<<" , ";	
	}
	
	getch();
	return 0;
}

int fibonacci(int n){
	if(n<2){//Caso base
		return n;
	}
	else{//Caso general
		return fibonacci(n-1)+fibonacci(n-2);
	}
}