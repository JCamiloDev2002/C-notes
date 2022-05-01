#include <iostream>

using namespace std;

int main()
{
  //declara una variable y un arreglo de 10 posiciones
  int x, v[10];
  //declara un puntero
  int *p;
  //el puntero apunta a la primera posicion del arreglo
  p = v;
  //declara un ciclo parapedir valores al usuario para ocupar en el vector
  for(x=0;x<10;x++){
    //pide los valores al usuario
    cout<<"\nIngrese un valor";
    cin>>*p;
    //incrementa p que esta en la posicion 0 del vector inicialmente
    p++;
  }
  
  //declara un ciclo para mostrar los valores del arreglo
  for(int r=0;r<10;r++){
    //muestra cada posicion de los elementos del arreglo
    cout<<v[r]<<"\t";
  }
}
