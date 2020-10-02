#include <iostream>

using namespace std;

int main (){
    
    string nombre;
    int edad,condicion = 18;
    cout << endl;
    cout << "Programa que te dice si eres mayor de edad. " << endl;
    cout << "Dime tu nombre: "; getline(cin,nombre);
    cout << "Dime tu edad: "; cin >> edad;

    if(edad >= condicion){
        cout << nombre <<" Tu eres mayor de edad.";
    }
    else{
        cout << nombre << " tu eres un jovenazo todavia.";
    }
    cout << endl;
    
    return 0;

}
