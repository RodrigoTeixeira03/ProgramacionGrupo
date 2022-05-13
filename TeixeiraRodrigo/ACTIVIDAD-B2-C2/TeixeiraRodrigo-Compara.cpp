//================================================

//==> Nombre del programa: Comparacion de dos numeros

//==> Archivo : TeixeiraRodrigo-Compara.cpp
//==>Autor: Teixeira Rodrigo
//==>Fecha de elaboración: 2022-03-25
//==>Fecha ultima actualización: 2022-05-13
//=================================================
#include <iostream>
using namespace std;

int main()
{
	float TRA,TRB;
	cout<<"INGRESE LOS VALORES A y B";
	cin>>TRA>>TRB;
if(TRA==TRB){
	cout<<"el valor"<<TRA<<"es igual a"<<TRB;
}else{
	if(TRA<TRB){
		cout<<"el valor"<<TRA<<"es menor que"<<TRB;
}else{
	cout<<"el valor de"<<TRA<<"es mayor que"<<TRB;
}
}
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparacion de dos numeros"<<endl;
cout<<"//==> Archivo : TeixeiraRodrigo-Compara.cpp"<<endl;
cout<<"//==>Autor: Teixeira Rodrigo"<<endl;
cout<<"//==>Fecha de elaboración: 2022-03-25"<<endl;              cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;        cout<<"//================================================="<<endl;
return 0;
}
