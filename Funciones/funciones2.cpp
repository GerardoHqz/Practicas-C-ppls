#include <iostream>

using namespace std;

template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3);

int main()
{

    cout<<"El mayor valor es: "<<maximo(4,5,3);

    return 0;
}
template <class TIPOD>
TIPOD maximo(TIPOD dato1,TIPOD dato2, TIPOD dato3){
    TIPOD max;
    if((dato1>dato2) && (dato1>dato3)){
        max = dato1;
    }
    else if ((dato2>dato1) && (dato2>dato3)){
        max = dato2;
    }
    else if ((dato3>dato1)&&(dato3>dato2)){
        max = dato3;
    }

    return max;
}
