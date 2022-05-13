//================================================
//==> Nombre del programa: Compara
//==> Archivo : PorozoJose-Compara.cpp
//==>Autor: Porozo Jose
//==>Fecha de elaboración: 2022-04-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================
#include<iostream>
using namespace std;
int main() {
float PJ_A, PJ_B;
    cout<<"Ingrese el numero A:" ; cin>>PJ_A;
    cout<<"Ingrese el numero B:" ; cin>>PJ_B;
    
     if(PJ_A==PJ_B){
           cout<<"El valor de A="<<PJ_A<<":es igual a B="<<PJ_B<<endl;
	
     }else{
        if(PJ_A<PJ_B)	{ 
             cout<<"El numero de A="<<PJ_A<<":es menor A B="<<PJ_B<<endl;
        }else{
           cout<<"El numero de B="<<PJ_B<<":es menor A A="<<PJ_A<<endl;	
           cout<<" //================================================\n";
           cout<<"//==> Nombre del programa: Comparador de dos numeros\n";
           cout<<"//==> Archivo : PorozoJose-Compara.cpp\n";
           cout<<"//==>Autor: Porozo Jose\n";
           cout<<"//==>Fecha de elaboración: 2022-04-01\n";
           cout<<"//==>Fecha ultima actualización: 2022-05-12\n";
           cout<<"//=================================================\n";
        } 
     }	
return(0);	
}
