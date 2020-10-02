#include <iostream>

using namespace std;
int main ()
{
    int num1;
    int num2;

    cout<<endl;
    cout << "PROGRAMA QUE TE DICE QUE NUMERO ES MAYOR"<<endl;
    cout << "Dime el primer numero: "; cin>>num1;
    cout << "Dime el segundo numero: "; cin>> num2;

    if (num1 > num2){
        cout << "El mayor se " << num1;
    }
    else {
        cout  << "El mayor se "<< num2;
    }
    cout << endl;
    return 0;
}