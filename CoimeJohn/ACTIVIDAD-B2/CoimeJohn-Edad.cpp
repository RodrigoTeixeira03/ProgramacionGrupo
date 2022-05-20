
#include<iostream>

using namespace std;

int main()
{
int aa,ma,da,an,mn,dn,a,m,d;
	cout<<"ingrese el año actual: "<<endl; cin>>aa;
	cout<<"ingrese el mes actual: "<<endl; cin>>ma;
	cout<<"ingrese el dia actual: "<<endl; cin>>da;
	cout<<endl;
	cout<<"ingrese el año de nacimiento: "<<endl; cin>>an;
	cout<<"ingrese el mes de nacimiento: "<<endl; cin>>mn;
	cout<<"ingrese el dia de nacimiento: "<<endl; cin>>dn;
	if(da>=dn){
		d=da-dn;
		}
	else{
		ma=ma-1;
		da=da+30;
		d=da-dn;
	}
	if(ma>=mn){
		m=ma-mn;
	}
	else{
		aa=aa-1;
		ma=ma+12;

		m=ma-mn;
	}
	a=aa-an;
	cout<<endl;
	cout<<"tu edead actual es:"<<endl;
	cout<<a<<" años"<<endl;
	cout<<m<<" meses"<<endl;
	cout<<d<<" dias"<<endl;
	return 0;
}
