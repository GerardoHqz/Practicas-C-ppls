#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

int main(){
	int numero,dato,contador=0,nathy;
	string nombre;
    cout<<endl;
	cout<<"Bienvenido al juego de Nathy,veremos si adivinas mi numero."<<endl;
	cout<<"Dime tu nombre simple mortal: ";cin>>nombre;
    cout<<"MUY BIEN "<<nombre<< " ADIVINA...ADIVINA MI NUMERO."<<endl;
	
	srand(time(NULL)); //generar un numero aleatorio entre 1-100
	dato = 1 + rand()%(101-1);
	srand(time(NULL)); //generar un numero aleatorio entre 1-100
	nathy = 1 + rand()%(11-1);
	cout<<"Jummm Te dare "<<nathy<<" de intentos"<<endl;
	do{
		cout<<"Digite un numero: "; cin>>numero;
		if(numero>dato){
			cout<<"nopi fallaste iluso, es menor.\n"<<endl;
		}
		else if(numero<dato){
			cout<<"nononono es mayor.\n"<<endl;
		}
		else if(numero == dato){
			cout<<"\nPERO COMOOOOOO, has adivinado mi numero, felicidades..supongo."<<endl;
			contador = nathy;
		}
		contador++;
	}while(contador < nathy);

	if(contador == nathy){
			cout<<"JAJAJAJA Sabia que no me podias ganar.";
		}
	
	
	system("pause");
	return 0;
}
