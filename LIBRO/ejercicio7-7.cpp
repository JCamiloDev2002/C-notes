#include <iostream>
using namespace std;
int grande(int a, int b);

int main()
{
  int a, b;
  cout<<"\n\tIngrese el primer numero: ";
  cin>>a;
  cout<<"\n\tIngrese el segundo numero: ";
  cin>>b;
  
  cout<<"\n\tel numero mas grande es: "<<grande(a, b)<<endl;
}

int grande(int a, int b)
{
  if(a>b)
    return a;
  else
    return b;
}
