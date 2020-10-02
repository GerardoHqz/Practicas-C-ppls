#include <iostream>


using namespace std;
int main ()
{
    int num1,num2,num3;

    cout<<endl;
    cout << "PROGRAMA QUE TE DICE QUE NUMERO ES MAYOR"<<endl;
    cout << "Dime el primer numero: "; cin>>num1;
    cout << "Dime el segundo numero: "; cin>> num2;
    cout << "Dime el tercer numero: "; cin>> num3;

    if ((num1 > num2) && (num1 > num3)){
        cout << "El mayor es " << num1;
    }
    else if ((num2 > num1) && (num2 > num3)){
        cout  << "El mayor es "<< num2;
    }
    else {
        cout << "El mayor es " << num3  <<endl;
    }
    cout << endl;
    

    return 0;
}
