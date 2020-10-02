#include <iostream>
#include <stdlib.h>

using namespace std;

void pedir_datos();
void matriz_traspuesta(int **,int,int);

int **puntero_matriz,nfilas,ncol;

int main()
{
  pedir_datos();
  matriz_traspuesta(puntero_matriz,nfilas,ncol);

  for(int i=0;i<nfilas;i++){
    delete [] puntero_matriz[i];
  }
  delete[] puntero_matriz;

  return 0;
}

void pedir_datos(){
  cout<<"Digite la cantidad de filas: ";cin>>nfilas;
  cout<<"Digite la cantidad de columnas: ";cin>>ncol;

  puntero_matriz = new int*[nfilas];
  for(int i=0;i<nfilas;i++){
    puntero_matriz[i] = new int[ncol];
  }
  for(int i=0;i<nfilas;i++){
    for(int j=0;j<ncol;j++){
      cout<<"Digita un numero ["<<i<<"]["<<j<<"]:";cin>>*(*(puntero_matriz+i)+j);
    }
  }
}
void matriz_traspuesta(int **puntero_matriz,int nfilas,int ncol){
    cout<<"\nMatriz: \n";
  for(int i=0;i<nfilas;i++){
    for(int j=0;j<ncol;j++){
      cout<<*(*(puntero_matriz+i)+j)<<" ";
    }
    cout<<endl;
  }
  int aux;
  cout<<"\nMatriz traspuesta: \n";
 for(int i=0;i<ncol;i++){
    for(int j=0;j<nfilas;j++){
      cout<<*(*(puntero_matriz+j)+i)<<" ";
    }
    cout<<endl;
  }
}