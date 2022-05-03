/*3.-Digrama de flujo y código en c++, de un programa que 
permita ingresar el precio de varios productos y calculo 
el iva a crobrar el descuento y el valor final a pagar,  
el programa mostrara  valor bruto, valor del  iva, valor d
el  descuento y valor final a pagar.*/
#include <iostream>
using namespace std;
int main ()
{
int c=0, P;

float A=0, x, Tb, Piva, Pdsc, iva=0.12, desc=0.30, vt;

cout<<"Ingrese la cantidad de productos: ";
cin>>P;
do{
cout<<"Ingrese el valor del producto: ";
cin>>x;
c=c+1;
A=A+x;
Piva=A*iva;
cout<<"El valor del iva de la compra es de: $"<<Piva<<endl;
Pdsc=A*desc;
cout<<"El valor del descuento de su compra es de: $"<<Pdsc<<endl;
Tb=Piva+Pdsc;

}while (c<P);

if (Tb==A){
cout<<"Su compra aplica para un descuento:"<<Tb<<endl;

iva=Tb*Piva/100;

desc=Tb*Pdsc/100;

}else{
	
vt=A+Piva-Pdsc;

cout<<"El valor total es de: $"<<vt<<endl;
}

return(0);
}
