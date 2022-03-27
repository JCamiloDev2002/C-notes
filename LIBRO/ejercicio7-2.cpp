#include <iostream>
using namespace std;
int division(int a, int b);

void main(void)
{
  int a, b;
  cout<<"ingrese el primer dato: ";
  cin>>a;
  cout<<"\nIngrese el segundo dato: ";
  cin>>b;
  
  if(division(a, b))
    cout<<"\nTrue\n";
  else
    cout<<"\nFalse\n";
}

int division(int a, int b)
{
  if (a%b != 0)
    return 0;
  else
    return 1;
}
