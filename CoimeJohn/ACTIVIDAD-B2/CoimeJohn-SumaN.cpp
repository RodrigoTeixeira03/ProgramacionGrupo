#include<iostream>
using namespace std;
int main(){
int N,i=0;
float a,S=0;
cout<<"ingrese el numero de veses que se va a sumar: ";
cin>>N;
do{
cout<<"ingrese una cantidad"<<endl;
cin>>a;
i=i+1;
S=S+a;
}
while(i<N);
cout<<"la cantidad final es: "<<S;
}
