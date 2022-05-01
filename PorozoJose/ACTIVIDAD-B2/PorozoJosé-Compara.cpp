/*Diagrama de flujo y codigo en c++ de un progra que permite ingresar 
dos valores y los compara para saber cual es el mayor en caso de que 
sean iguales, indique que son iguales.*/
#include<iostream>
using namespace std;
int main() {
/*Agregamos nuestras varibles de tipo decimal o flotante x and y*/
float A,B;
/*Le pedimos a el usuario que ingrese los valores de la varible*/
cout<<"Ingrese A:" ; cin>>A;
cout<<"Ingrese B:" ; cin>>B;
/*Evaluamos la condiciones logicas*/
if(A==B){
cout<<"El valor de A="<<A<<":es igual a B="<<B<<endl;
	
}else{
/*volvemos a evaluar para identificar cual es mayor de dos numeros*/
if(A<B)	{ 
cout<<"El valor de A="<<A<<":ES MENOR A B="<<B<<endl;
}else{
cout<<"El valor de B="<<B<<":ES MENOR A A="<<A<<endl;	
} 
}	
return(0);	
}
