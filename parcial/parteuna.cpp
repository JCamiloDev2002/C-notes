#include <iostream>
using namespace std;
int primos(int a, int b);
int number(void);
int gemelos(int A, int B);

int main()
{
    int i, arre[2];

    for(i = 0; i <=1; i++)
    {
         arre[i] = number();
    }

    if(gemelos(arre[0], arre[1]))
        cout<<arre[0]<<" y "<<arre[1]<<" son gemelos."<<endl;
    else
        cout<<arre[0]<<" y "<<arre[1]<<" no son gemelos."<<endl;
}

int number()
{
  int num, val;

    do{
    do{

    cout<<"Ingrese un numero: ";
    cin>>num;

    }while(num < 1);
    
    val = primos(num, 2);

    }while(val == 0);

    return num;
}

//funcion primos
int primos(int a, int b)
{
    if(a/2 < b)
    {
      cout<<a<<" es primo"<<endl;
      return 1;
    }
    else
      if(a%b == 0)
      {
        cout<<a<<" no es primo"<<endl;
        return 0;
      }
      else
        primos(a, b +1);
    b = 2;
}

//funcion gemelos
int gemelos(int A, int B)
{
  if (A>B && A-B==2){
    cout<<endl<<A<<" - "<<B<<" es: "<<A-B<<endl;      
    return 1;
  }else if(B>A && B-A==2){
    cout<<endl<<B<<" - "<<A<<" es: "<<B-A<<endl;
    return 1;
  }else
    return 0;
}
