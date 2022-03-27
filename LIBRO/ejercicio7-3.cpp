#include <iostream>
using namespace std;
float fahrenheit(float a);

void main(void)
{
  float grado;
  cout<<"Ingrese una temperatura en grado celcius: ";
  cin>>grado;
  
  cout<<"\nEl resultado es:"<<fahrenheit(grado)<<" F";
}

float fahrenheit(float a)
{
  int f;
  f = (1.8*a) + 32;

  return f;
}
