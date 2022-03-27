#include <iostream>
using namespace std;
int number(int n);

int main()
{
  int num;
  cout<<"Ingrese un numero: ";
  cin>>num;
  
  if (number(num))
    cout<<"\nEs P\n";
  else
    cout<<"\nEs N\n";

}

int number(int n)
{
  if (n <= 0)
    return 0;
  else
    return 1;
}
