#include<iostream>
#include<string.h>
using namespace std;

int main(){
  //crear dos arrays de caracteres y una variable tipo char
  char c1[50], c2[50], car;
  //crear dos variables enteras
  int tc1, tc2;
  //lee los datos de los dos array de carcteres y una variable tipo char
  cout<<"Ingrese la primera cadena:";
  fgets(c1,50, stdin);
  cout<<"Ingrese la segunda cadena: ";
  fgets(c2, 50, stdin);
  cout<<"Ingrese un caracter: ";
  cin>>car;

  //devuelve el numero de caracteres de la cadena 1 y la cadena 2
  tc1 = strlen(c1);
  tc2 = strlen(c2);
  
  //imprime los tamaños de ambas cadenas de caracteres
  cout<<"tamaño cadena "<<c1<<" es: "<<tc1<<endl;
  cout<<"tamaño cadena "<<c2<<" es: "<<tc2<<endl;

  //compara las primeras letras y mira cual es mayor. si la primera es menor manda un numero negativo sino uno positivo y si son iguales manda 0
  if(strcmp(c1,c2) == 0){
    cout<<"las cadenas son iguales";
  }
  else if(strcmp(c1, c2) > 0){
    cout<<c1<<" es la cadena es mayor";
  }
  else{
    cout<<c2<<" es la cadena mayor";
  }
  //busca el caracter de la variable car en la cadena 1
  if(strchr(c1, car)){
    cout<<car<<" esta contenido en "<<c1;
  }
  //busca el caracter de la variable car en la cadena 2
  if(strchr(c2, car)){
    cout<<car<<" esta contenido en "<<c2;
  }
  system("pause");
  return 0;
}

