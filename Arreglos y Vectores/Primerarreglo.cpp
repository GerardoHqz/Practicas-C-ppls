#include <iostream>

using namespace std;

int main ()
{
    int vector[] ={1,2,3,4,5};
    int mult=1;

    for(int i=0;i<5;i++)
    {
        mult*=vector[i];
    }
    
    cout<<"El resultado de la multiplicacion del vector es: "<<mult;

return 0;

}