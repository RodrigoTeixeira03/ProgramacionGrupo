/*4.- Diagrama de flujo y código en c++, de un programa 
que calcula de edad de una persona, el programa debe 
permitir ingresar la fecha actual , la fecha de nacimiento 
y mostrar cuantos años, meses y díás tiene la persona.*/
#include<iostream>
using namespace std;
int main()
{
int ap,mp,dp,an,mn,dn,a,m,d;

/*Este codigo permite calcular la edad*/

cout<<"Ingrese la fecha actual (aaaa_mm_dd): "; 
cin>>ap>>mp>>dp;
cout<<"Ingrese la fecha de nacimiento (aaaa_mm_dd): "; 
cin>>an>>mn>>dn;
if(dp>dn)
{
	d=dp-dn;
}else{
	dp=dp+30;
	mp=mp-1;
	d=dp-dn;
}
if(mp>mn)
{
	m=mp-mn;
}else{
	mp=mp+12;
	ap=ap-1;
	m=mp-mn;
}

a=ap-an;

/*fecha en dias años y meses*/
cout<<"La persona tiene :"<<a<<" años "<<m<< " meses "<<d<< " dias "<<endl;


return 0;
}
