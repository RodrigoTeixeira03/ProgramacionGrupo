#include<iostream>
using namespace std;

int main()
{
int c,sm=0,c1=0,c2=0,c3=0;
float tm,a=0,a1=0,a2=0,a3=0, m1=0.10 , m2=0.50, m3=0.25;

cout<<"Ingrese la cantidad de monedas: "; 
cin>>c;

do{

cout<<"Ingrese el tipo de la moneda:";
cin>>tm;

sm=sm+1;
a=a+1;
if(tm==m1){
c1=c1+1;
a1=a1+tm;
}

if(tm==m2){
c2=c2+1;
a2=a2+tm;
}



if(tm==m3){
c3=c3+1;
a3=a3+tm;
}
}while(sm<c);

cout<<"Se ingresaron "<<sm<<  " Monedas y un total de "<<sm<<"  moneda"<<endl;
cout<<"Se ingresaron "<<c1<<  " Monedas de $0.10 que suman    "<<c1<<"  moneda"<<endl;
cout<<"Se ingresaron "<<c2<<  " Monedas de $0.50 que suman "<<c2<<"  moneda"<<endl;
cout<<"Se ingresaron "<<c3<<  " Monedas de $0.25 y un total de "<<c3<<"  moneda"<<endl;


return 0;

}

