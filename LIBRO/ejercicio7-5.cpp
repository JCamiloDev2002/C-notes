#include <cctype>
#include<iostream>
#include<string.h>

using namespace std;

void vocal(string a);

int main()
{
  string letra;
  cout<<"Ingrese un caracter: ";
  cin>>letra;

  vocal(letra);
}

void vocal(string a)
{
  if((a == "a" || a =="A")|| (a == "e" || a =="E")||( a == "i" || a == "I")|| (a == "o" || a == "O")|| (a == "u" || a == "U"))
  cout<<a<<" Es una vocal\n";
  else
    cout<<a<<" No es una vocal\n";
}
