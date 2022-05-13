//================================================

//==> Nombre del programa: Punto de venta
//==> Archivo : NazarenoCarolina_PuntoVenta.cpp
//==>Autor: Carolina Nazareno
//==>Fecha de elaboración: 2022-05-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================

#include<iostream>

using namespace std;

int main()
{
  float Nc_x,Nc_c=0,Nc_A=0,Nc_P,Nc_Vb,Nc_Viva,Nc_Vdes,Nc_Vf;
  
  cout<<"Ingrese el valor de P:"; 
  cin>>Nc_P;
  
  do
  {

  cout<<"Ingrese el valor de x:"; 
  cin>>Nc_x;
  
  Nc_c=Nc_c+1;
  Nc_A=Nc_A+Nc_x;


  }
  
  while(Nc_c<Nc_P);
  Nc_Vb=Nc_A;
  Nc_Viva=Nc_Vb*0.12;
  Nc_Vdes=Nc_Vb*0.10;
  Nc_Vf=Nc_Vb+Nc_Viva-Nc_Vdes;
  
  cout<<"valor final a pagar es de:";
  cout<<Nc_Vf<<endl;
  
 cout<<endl<<"//================================================"<<endl;
 cout<<"//==> Nombre del programa: Punto de venta"<<endl;
 cout<<"//==> Archivo : NazarenoCarolina_PuntoVenta.cpp"<<endl;
 cout<<"//==>Autor: Carolina Nazareno"<<endl;
 cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;
 cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
 cout<<"//================================================="<<endl;

return 0;
}
