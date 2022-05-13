//================================================

//==> Nombre del programa: Edad

//==> Archivo : TeixeiraRodrigo-laedad.cpp
//==>Autor: Teixeira Rodrigo
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-13
//=================================================
#include<iostream>
using namespace std;
int main()
{
int TRaa,TRma,TRda,TRan,TRmn,TRdn,TRa,TRm,TRd;



cout<<"Ingrese la fecha actual (aaaa_mm_dd): "; 
cin>>TRaa>>TRma>>TRda;
cout<<"Ingrese la fecha de nacimiento (aaaa_mm_dd): "; 
cin>>TRan>>TRmn>>TRdn;
if(TRda>TRdn)
{
	TRd=TRda-TRdn;
}else{
	TRda=TRda+30;
	TRma=TRma-1;
	TRd=TRda-TRdn;
}
if(TRma>TRmn)
{
	TRm=TRma-TRmn;
}else{
	TRma=TRma+12;
	TRaa=TRaa-1;
	TRm=TRma-TRmn;
}

TRa=TRaa-TRan;

cout<<"La persona tiene :"<<TRa<<" años "<<TRm<< " meses y  "<<TRd<< " dias "<<endl;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Edad"<<endl;
cout<<"//==> Archivo : TeixeiraRodrigo-laedad.cpp"<<endl;
cout<<"//==>Autor: Teixeira Rodrigo"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;              cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;        cout<<"//================================================="<<endl;
return 0;
}
