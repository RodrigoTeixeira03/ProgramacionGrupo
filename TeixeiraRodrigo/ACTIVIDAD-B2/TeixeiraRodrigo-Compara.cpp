#include <iostream>
using namespace std;

int main()
{
	float A,B;
	cout<<"INGRESE LOS VALORES A y B";
	cin>>A>>B;
if(A==B){
	cout<<"el valor"<<A<<"es igual a"<<B;
}else{
	if(A<B){
		cout<<"el valor"<<A<<"es menor que"<<B;
}else{
	cout<<"el valor de"<<A<<"es mayor que"<<B;
}
}
return 0;
}
