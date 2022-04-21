#include<iostream>
using namespace std;
int main() {
/*Agregamos nuestras varibles de tipo decimal o flotante x and y*/
float x,y;
/*Le pedimos a el usuario que ingrese los valores de la varible*/
cout<<"Ingrese x:" ; cin>>x;
cout<<"Ingrese y:" ; cin>>y;
/*Evaluamos la condiciones logicas*/
if(x==y){
cout<<"El valor de x="<<x<<":es igual a y="<<y<<endl;
	
}else{
/*volvemos a evaluar para identificar cual es mayor de dos numeros*/
if(x<y)	{ 
cout<<"El valor de x="<<x<<":ES MENOR A y="<<y<<endl;
}else{
cout<<"El valor de y="<<y<<":ES MENOR A x="<<x<<endl;	
} 
}	
return(0);	
}
