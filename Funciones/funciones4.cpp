#include <iostream>

using namespace std;

void calc_anos(int,int&,int&,int&);

int main()
{
    int calculo,anos,meses,dias;

    cout<<"Calculo de fecha"<<endl;
    cout<<"Digite el total de dias transcurridos: ";cin>>calculo;
    calc_anos(calculo,anos,meses,dias);
    cout<<"Fecha: "<<dias+1<<"/"<<meses+1<<"/"<<anos+2000;


    return 0;
}
void calc_anos(int calculo,int& anos,int& meses ,int& dias){
    anos = calculo/360;
    calculo %= 360;
    meses = calculo/30;
    dias %=30;
}