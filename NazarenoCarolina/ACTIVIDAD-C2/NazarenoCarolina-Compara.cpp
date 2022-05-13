//================================================

//==> Nombre del programa: Comparacion de dos números

//==> Archivo : NazarenoCarolina_Compara.cpp
//==>Autor: Carolina Nazareno
//==>Fecha de elaboración: 2022-05-01
//==>Fecha ultima actualización: 2022-05-12
//=================================================

# include<iostream>
using namespace std;

int main(){
float Nc_N1, Nc_N2;

cout<<"Ingrese  N1:" ; 
cin>>Nc_N1;

cout<<"Ingrese N2: " ; 
cin>>Nc_N2;

if(Nc_N1==Nc_N2){
	
cout<< " el valor de N1="<<Nc_N1<<":es igual a N2="<<Nc_N2<<endl;
}else{

if(Nc_N1<Nc_N2) 
{
	cout<< " El valor de N1="<<Nc_N1<<": ES MENOR A N2="<<Nc_N2<<endl;

}else{ 
	cout<<"El valor de N2="<<Nc_N2<<":ES MENOR A N1="<<Nc_N1<<endl;
}
}

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Comparacion de dos números"<<endl;
cout<<"//==> Archivo : NazarenoCarolina_Compara.cpp"<<endl;
cout<<"//==>Autor: Carolina Nazareno"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-01"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-12"<<endl;
cout<<"//================================================="<<endl;

return(0);

}
