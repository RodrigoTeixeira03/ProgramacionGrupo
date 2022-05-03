
#include<iostream>
using namespace std;
int main()
{
	int n, c, c1, c2, cl, cz;
	float x, al, a, a1, a2, az;
	c = 0;
	c1 = 0;
	c2 = 0;
	a = 0;
	a1 = 0;
	a2 = 0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>n;
	do
	{

		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>x;
		c = c+1;
		a = a+x;
		if(x==0.25)
		{
			c1 = c1+1;
			a1 = x+a1;
		}
		else
			{
				c2 = c2+1;
				a2 = a2+x;
			}
   }
	while(c<n);
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<c<<endl;
	cout<<"Cantidad total de dinero contado: "<<a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<a1<<endl;

return 0;
}
