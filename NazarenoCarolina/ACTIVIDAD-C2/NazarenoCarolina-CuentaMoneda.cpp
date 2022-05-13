//================================================

//==> Nombre del programa: Calcular la Cantidad de Moneda

//==> Archivo : NazarenoCarolina_CuentaMoneda.cpp
//==>Autor: Carolina Nazareno
//==>Fecha de elaboración: 2022-05-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================

#include<iostream>
using namespace std;

int main()
{
	
int Nc_c,Nc_sm=0,Nc_c1=0,Nc_c2=0,Nc_c3=0;
float Nc_tm,Nc_a=0,Nc_a1=0,Nc_a2=0,Nc_a3=0, Nc_m1=0.10 , Nc_m2=0.50, Nc_m3=0.25;

cout<<"Ingrese la cantidad de monedas: "; 
cin>>Nc_c;

do{

cout<<"Ingrese el tipo de las monedas:";
cin>>Nc_tm;

Nc_sm=Nc_sm+1;
Nc_a=Nc_a+1;

if(Nc_tm==Nc_m1){
Nc_c1=Nc_c1+1;
Nc_a1=Nc_a1+Nc_tm;
}

if(Nc_tm==Nc_m2){
Nc_c2=Nc_c2+1;
Nc_a2=Nc_a2+Nc_tm;
}



if(Nc_tm==Nc_m3){
Nc_c3=Nc_c3+1;
Nc_a3=Nc_a3+Nc_tm;
}

}while(Nc_sm<Nc_c);

cout<<"Se ingresaron "<<Nc_sm<<  " Monedas y un total de "<<Nc_sm<<"  monedas"<<endl;
cout<<"Se ingresaron "<<Nc_c1<<  " Monedas de 0.10 ctv y un total de   "<<Nc_c1<<"  monedas"<<endl;
cout<<"Se ingresaron "<<Nc_c2<<  " Monedas de 0.50 ctv y un total de"<<Nc_c2<<"  monedas"<<endl;
cout<<"Se ingresaron "<<Nc_c3<<  " Monedas de 0.25 ctv y un total de "<<Nc_c3<<"  monedas"<<endl;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Calcular la Cantidad de Moneda"<<endl;
cout<<"//==> Archivo : NazarenoCarolina_CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Carolina Nazareno"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//================================================="<<endl;

return 0;

}

