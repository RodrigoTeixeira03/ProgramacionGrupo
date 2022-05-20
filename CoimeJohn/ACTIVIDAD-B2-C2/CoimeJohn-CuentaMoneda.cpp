
#include<iostream>
using namespace std;
int main()
{
	int CJ_n, CJ_c, CJ_c1, CJ_c2, CJ_cl, CJ_cz;
	float CJ_x, CJ_al, CJ_a, CJ_a1, CJ_a2, CJ_az;
	CJ_c = 0;
	CJ_c1 = 0;
	CJ_c2 = 0;
	CJ_a = 0;
	CJ_a1 = 0;
	CJ_a2 = 0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>CJ_n;
	do
	{

		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>CJ_x;
		CJ_c = CJ_c+1;
		CJ_a = CJ_a+CJ_x;
		if(CJ_x==0.25)
		{
			CJ_c1 = CJ_c1+1;
			CJ_a1 = CJ_x+CJ_a1;
		}
		else
			{
				CJ_c2 = CJ_c2+1;
				CJ_a2 = CJ_a2+CJ_x;
			}
   }
	while(CJ_c<CJ_n);
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<CJ_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<CJ_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<CJ_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<CJ_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<CJ_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<CJ_a1<<endl;
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Cuenta monedas"<<endl;
cout<<"//==> Archivo : CoimeJohn-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: COIME JOHN"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-18"<<endl;              
cout<<"//==>Fecha ultima actualización: 2022-05-18"<<endl;        
cout<<"//================================================="<<endl;
return 0;
}
