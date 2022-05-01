#include <iostream>
using namespace std;
int busqueda(int elementos[], int n);
void modificacion(int elementos[], int n);
void listado(int elementos[], int n);

int main(){
  const int tam = 20;
  int val1 = 0, val2 = 0, val3 = 0;
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
      val1 = busqueda(elementos, tam);
      if (val1 ==-1)
        cout<<"\nEl numero no existe...";
      else
        cout<<"\nel numero si existe y esta en la posicion: "<<val1;
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
  int num, x, val = -1;
  cout<<"\nIngrese un numero para buscar: ";
  cin>>num;

  for(x=0;x<tam;x++){
    if(num == elementos[x]){
      val = x;
      break;
      }
  }
    return val;
}

void modificacion(int elementos[], int tam){
  int num, nuevo, viejo;
  do{
  cout<<"\nIngrese un numero de ubicacion(0-19):";
  cin>>num;
  }while(num>19 || num<0);
  viejo = elementos[num];
  cout<<"\nEl elemento en la posicion "<<num<<" es "<<elementos[num];
  cout<<"\nIngrese un nuevo valor para sustituirlo:";
  cin>>nuevo;
  elementos[num] = nuevo;
  cout<<"\nEl valor"<<viejo<<" ha sido sustituido por "<<nuevo;
}


void listado(int elementos[], int tam){
  cout<<"\nLISTADO"<<endl;
  for(int x=0; x<tam;x++){
      cout<<x<<":"<<elementos[x]<<endl;
  }
}

