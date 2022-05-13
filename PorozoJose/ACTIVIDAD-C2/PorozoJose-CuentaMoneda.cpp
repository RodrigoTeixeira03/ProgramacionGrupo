/*5.- Diagrama de flujo y código en c++ de un programa 
que cuente monedas, el programa permitirá ingresar varias 
mondas de 3 denominaciones diferentes (10ctv, 25ctv,50ctv) 
y presentara cuantas monedas de cada denominación se ingresaron, 
cuanto es la cantidad en dinero de cada denominación; asi como 
la cantidad de dinero total que se ingresaron.*/
#include<iostream>
using namespace std;

int main()
{
int c,A=0,A1=0,A2=0,A3=0;
float t,B=0,B1=0,B2=0,B3=0,D=0.10, D1=0.25, D2=0.50;
cout<<"Ingrese la cantidad de monedas: "; cin>>c;
do{

cout<<"Ingrese el valor  de la moneda t=";cin>>t;
A=A+1;
B=B+1;
if(t==D){
A1=A1+1;
B1=B1+t;
}

if(t==D1){
A2=A2+1;
B2=B2+t;
}


if(t==D2){
A3=A3+1;
B3=B3+t;
}
}while(A<c);

cout<<"Usted cuenta con "<<A<<  " Moneda y un total de "<<A<<"  moneda"<<endl;
cout<<"Usted cuenta con "<<A1<<  " Moneda de $0.10 que suman    "<<A1<<"  moneda"<<endl;
cout<<"Usted cuenta con "<<A2<<  " Moneda de $0.25 que suman "<<A2<<"  moneda"<<endl;
cout<<"Usted cuenta con "<<A3<<  " Moneda de $0.50 y un total de "<<A3<<"  moneda"<<endl;


return 0;

}

