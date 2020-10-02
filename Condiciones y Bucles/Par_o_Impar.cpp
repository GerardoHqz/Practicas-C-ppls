#include <iostream>
 
using namespace std;

int main (){
    int num1;
    cout << endl;
    cout << "PROGRAMA PARA SABER SI UN NUMERO ES PAR O IMPAR."<<endl;
    cout << endl;
    cout << "Dime el primer numero: "; cin >> num1;

    if (num1%2==0){
        cout << "El numero "<<num1<<" es par";
    }
    else {
        cout << "El numero "<< num1 <<" es impar";
    }
    cout<<endl;
    cout << endl;

    return 0;
}