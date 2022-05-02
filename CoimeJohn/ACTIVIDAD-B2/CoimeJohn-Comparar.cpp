
#include<iostream>
using namespace std;
int main(){
	int num1, num2;
	cout<<"ingresar el primer numero";
	cin>>num1;
	cout<<"ingresar el segundo numero";
	cin>>num2;
	if(num1==num2){
		cout<<"son iguales";
	}
	else if(num1 < num2){
		cout<<"El segundo numero es mayor";
	}
	else {
		cout<<"el primer numero es mayor";
	}
}

