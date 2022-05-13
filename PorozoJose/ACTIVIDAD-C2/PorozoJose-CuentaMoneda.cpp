//================================================
//==> Nombre del programa: Contador de Monedas
//==> Archivo : PorozoJose-CuentaMonedad.cpp
//==>Autor: Porozo Jose
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================
#include<iostream>
using namespace std;

int main()
{
   int PJ_c,PJ_A=0,PJ_A1=0,PJ_A2=0,PJ_A3=0;
   
   float PJ_t,PJ_B=0,PJ_B1=0,PJ_B2=0,PJ_B3=0,PJ_D=0.10, PJ_D1=0.25, PJ_D2=0.50;
   
   cout<<"Ingrese la cantidad de monedas: "; cin>>PJ_c;
   
  do{

    cout<<"Ingrese el tipo de la moneda t=";cin>>PJ_t;
    
    PJ_A=PJ_A+1;
    
    PJ_B=PJ_B+1;
    
    if(PJ_t==PJ_D){
    	
        PJ_A1=PJ_A1+1;
        
        PJ_B1=PJ_B1+PJ_t;
    }

      if(PJ_t==PJ_D1){
      	
          PJ_A2=PJ_A2+1;
          
          PJ_B2=PJ_B2+PJ_t;
      }


       if(PJ_t==PJ_D2){
       	
          PJ_A3=PJ_A3+1;
          
          PJ_B3=PJ_B3+PJ_t;
       }
       
  }while(PJ_A<PJ_c);

cout<<"Usted cuenta con "<<PJ_A<<  " Moneda y un total de "<<PJ_A<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<PJ_A1<<  " Moneda de $0.10 que suman    "<<PJ_A1<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<PJ_A2<<  " Moneda de $0.25 que suman "<<PJ_A2<<"  moneda"<<endl;

cout<<"Usted cuenta con "<<PJ_A3<<  " Moneda de $0.50 y un total de "<<PJ_A3<<"  moneda"<<endl;

cout<<" //================================================\n";
cout<<"//==> Nombre del programa: Contador de Monedas\n";
cout<<"//==> Archivo : PorozoJose-CuentaMonedad.cpp\n";
cout<<"//==>Autor: Porozo Jose\n";
cout<<"//==>Fecha de elaboración: 2022-04-01\n";
cout<<"//==>Fecha ultima actualización: 2022-05-12\n";
cout<<"//=================================================\n";



return 0;

}

