#include <iostream>

using namespace std;

int main ()
{
    int numeros [5] = {1,2,3,4,5};
    int numeros1 [5];

    for(int i=0; i<5; i++)
    {
        numeros1 [i] = numeros[i] * 2;
        cout<<numeros1[i]<<", ";
    }

    return 0;
}