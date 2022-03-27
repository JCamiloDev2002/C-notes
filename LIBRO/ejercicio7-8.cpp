#include <iostream>
using namespace std;
void primos(int a, int b);
int main()
{
  int N=10, i;

  for(i=1;i<=N;i++)
  {
    primos(i, 2);
  }

}


void primos(int a, int b)
{
    if(a/2 < b)  
      cout<<a<<" es primo"<<endl;
    else
      if(a%b == 0)
        cout<<a<<" no es primo"<<endl;
      else
        primos(a, b +1);
    b = 2;
}

