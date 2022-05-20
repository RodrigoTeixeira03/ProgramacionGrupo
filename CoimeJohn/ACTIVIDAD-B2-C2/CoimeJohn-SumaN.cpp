#include<iostream>
using namespace std;
int main(){
int CJ_N,CJ_i=0;
float CJ_a,CJ_S=0;
cout<<"ingrese el numero de veses que se va a sumar: ";
cin>>CJ_N;
do{
cout<<"ingrese una cantidad"<<endl;
cin>>CJ_a;
CJ_i=CJ_i+1;
CJ_S=CJ_S+CJ_a;
}
while(CJ_i<CJ_N);
cout<<"la cantidad final es: "<<CJ_S;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: CoimeJohnSumaN"<<endl;
cout<<"//==> Archivo : CoimeJohn-SumaN.cpp"<<endl;
cout<<"//==>Autor: COIME JOHN"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
return 0;
}
