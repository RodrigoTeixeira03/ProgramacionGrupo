#include <iostream>
using namespace std;
int main ()
{
float A, B;
cout<<"Ingresé dos números A y B";
cin>>A>>B;
if (A==B) 
{
cout<<"Los dos números son iguales";
}
else if (A>B)
{
cout<<A<<"Es el mayor";
}
else
{
cout<<B<<"Es el mayor";
}
return 0;
}
