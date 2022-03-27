#include <iostream>
using namespace std;
float redondeo(float a, int b);

int main()
{
  float a;
  int b;
  cout<<"\n\tIngresa un valor en real: ";
  cin>>a;
  cout<<"\n\tIngresa un valor en decimales: ";
  cin>>b;

  cout<<redondeo(a,b)<<"\n";
}

float redondeo(float a, int b)
{
  int i;
  for(i = 0; i<=b;i++){
    a *=10;
  }
  return a;
}
