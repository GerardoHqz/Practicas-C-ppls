#include <iostream>
#include <time.h>

using namespace std;

int main ()
{
    int num[100][100],matriz[100][100], filas, columnas,dato;

    cout<<"COPIANDO DE UNA TABLA A OTRA"<<endl;
    cout<<"Dime el numero de filas: ";cin>>filas;
    cout<<"Dime el numero de columnas: ";cin>>columnas;

    srand(time(NULL));
    for(int i=0;i<filas;i++)
    {
		for(int j=0;j<columnas;j++)
        {
			dato = 1+rand()%(100);
			matriz[i][j] = dato;
        }
    }  

    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas;j++)
        {
            matriz[i][j]=num[i][j];
        }
    }

    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas;j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}