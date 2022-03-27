/*
 * Escribe un programa que lea la entrada estandar de dos numeros y muestre en la salida estandar su suma, resta, multiplicacion y division
 * */

#include <iostream>
using namespace std;

int main(){
  int a, b;
  cout<<"Ingrese el primer numero: ";
  cin>>a;
  cout<<"ingrese el segundo numero: ";
  cin>>b;
  
  cout<<"la suma de "<<a<<" y "<<b<<" es de:"<<a+b<<endl;
  cout<<"la resta de "<<a<<" y "<<b<<" es de:"<<a-b<<endl;
  cout<<"la multiplicacion de "<<a<<" y "<<b<<" es de:"<<a*b<<endl;
  cout<<"la division de "<<a<<" y "<<b<<" es de:"<<a/b<<endl;

  return 0;
}
