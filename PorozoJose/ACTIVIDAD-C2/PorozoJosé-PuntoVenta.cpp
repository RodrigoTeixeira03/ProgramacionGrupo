//================================================

//==> Nombre del programa: Punto Venta
//==> Archivo : PorozoJose-PuntoVenta.cpp
//==>Autor: Porozo Jose
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================
#include<iostream>

using namespace std;

int main()
{
  float PJ_x,PJ_c=0,PJ_B=0,PJ_Pr,PJ_Vb,PJ_Viva,PJ_Vdes,PJ_Vf,PJ_I=0.12,PJ_R=0.10;
  
  cout<<"Ingrese el valor de Pr  :"; 
  
  cin>>PJ_Pr;
  
  do
  {

     cout<<"Ingrese el valor de PJ_x:"; 
     
     cin>>PJ_x;
  
   PJ_c=PJ_c+1;
   
   PJ_B=PJ_B+PJ_x;


  }
  
  while(PJ_c<PJ_Pr);
  
           PJ_Vb=PJ_B;
           
           PJ_Viva=PJ_Vb*PJ_I;
           
           PJ_Vdes=PJ_Vb*PJ_R;
           
           PJ_Vf=PJ_Vb+PJ_Viva-PJ_Vdes;
  
  cout<<"valor final a pagar es de:";
  
  cout<<PJ_Vf<<endl;
  
  cout<<" //================================================\n";
  cout<<"//==> Nombre del programa: Punto Venta\n";
  cout<<"//==> Archivo : PorozoJose-PuntoVenta.cpp\n";
  cout<<"//==>Autor: Porozo Jose\n";
  cout<<"//==>Fecha de elaboración: 2022-04-01\n";
  cout<<"//==>Fecha ultima actualización: 2022-05-12\n";
  cout<<"//=================================================\n";
  return 0;
}
