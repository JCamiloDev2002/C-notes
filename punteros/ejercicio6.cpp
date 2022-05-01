#include <iostream>
using namespace std;
int busqueda(int elementos[], int n);
int modificacion(int elementos[], int n);
int listado(int elementos[], int n);

int main(){
  const int tam = 20;
  int elementos[tam], x;
  int *p, selector;
  p = elementos;

  for(x=0;x<20;x++){
    cout<<"\nIngresa el elemento "<<x+1<<" del arreglo: ";
    cin>>*p;
    p++;
  }

    
  do{
  
  do{

  cout<<"\nOPCIONES";
  cout<<"\n1.Busqueda";
  cout<<"\n2.Modificacion";
  cout<<"\n3.Listado";
  cout<<"\n4.Fin";
  cout<<"\nIngrese una opcion: ";
  cin>>selector;

  }while(selector>4 || selector<1);


  switch(selector){
    case 1:
      busqueda(elementos, tam);
      break;
    case 2:
      modificacion(elementos, tam);
      break;
    case 3:
      listado(elementos, tam);
      break;
    case 4:
      exit(1);
      break;
  }
  }while(selector != 4);
}


int busqueda(int elementos[], int tam){
  int num, x;
  cout<<"\nIngrese un numero para buscar: ";
  cin>>num;

  for(x=0;x<tam;x++){
    if(num == elementos[x])
      return 1;
    else
      return 0;
  }
}

int modificaion(int elementos[], int tam){
  return 1;
}

int listado(int elementos[], int tam){
  return 1;
}

