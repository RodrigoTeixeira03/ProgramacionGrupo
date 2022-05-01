#include<iostream>
using namespace std;

int main()
{
int aa,ma,da,an,mn,dn,a,m,d;


cout<<"Ingrese la fecha actual (aaaa/mm/dd): "; 
cin>>aa>>ma>>da;

cout<<"Ingrese la fecha de nacimiento (aaaa/mm/dd): "; 
cin>>an>>mn>>dn;

if(da>dn)
{
	d=da-dn;
	
}else{

	da=da+30;
	ma=ma-1;
	d=da-dn;
}
if(ma>mn){
	
	m=ma-mn;
	
}else{
	
	mn=mn+12;
	aa=aa-1;
	m=ma-mn;
}

a=aa-an;


cout<<"La persona tiene :"<<a<<"años "<<m<< " meses "<<d<< " dias "<<endl;


return 0;
}
