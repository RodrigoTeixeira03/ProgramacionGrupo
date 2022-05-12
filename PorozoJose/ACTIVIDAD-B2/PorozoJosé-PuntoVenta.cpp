#include<iostream>

using namespace std;

int main()
{
  float x,c=0,B=0,Pr,Vb,Viva,Vdes,Vf,I=0.12,R=0.10;
  
  cout<<"Ingrese el valor de Pr  :"; 
  cin>>Pr;
  
  do
  {

  cout<<"Ingrese el valor de x:"; 
  cin>>x;
  
  c=c+1;
  B=B+x;


  }
  
  while(c<Pr);
  Vb=B;
  Viva=Vb*I;
  Vdes=Vb*R;
  Vf=Vb+Viva-Vdes;
  
  cout<<"valor final a pagar es de:";
  cout<<Vf<<endl;
  
  return 0
}
