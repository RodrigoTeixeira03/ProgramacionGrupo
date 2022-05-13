#include<iostream>

using namespace std;

int main()
{
  float x,c=0,A=0,P,Vb,Viva,Vdes,Vf;
  
  cout<<"Ingrese el valor de P:"; 
  cin>>P;
  
  do
  {

  cout<<"Ingrese el valor de x:"; 
  cin>>x;
  
  c=c+1;
  A=A+x;


  }
  
  while(c<P);
  Vb=A;
  Viva=Vb*0.12;
  Vdes=Vb*0.10;
  Vf=Vb+Viva-Vdes;
  
  cout<<"valor final a pagar es de:";
  cout<<Vf<<endl;
}
