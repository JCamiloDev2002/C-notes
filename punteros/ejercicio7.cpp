#include<iostream>
using namespace std;
float mayor(float numeros[],int num);
float menor(float numeros[],int num);
float promedio(float numeros[],int num);

int main(){
  const int num = 10;
  int x, selector;
  float numeros[num], *p;
  p = numeros;

  for(x=0;x<num;x++){
    cout<<"\nIngrese un numero en la posicion: "<<x+1<<": ";
    cin>>*p;
    p++;
  }
  
  do{
  do{
  cout<<"\nSeleccione una opcion";
  cout<<"\n1.mayor";
  cout<<"\n2.Menor";
  cout<<"\n3.Promedio";
  cout<<"\n4.salir"<<endl;
  cin>>selector;
  }while(selector>4 || selector<1);

  switch(selector){
    case 1:
      float val1;
      val1 = mayor(numeros, num);
      cout<<"\nEl numero mayor del arreglo es: "<<val1;
      break;
    case 2:
      float val2;
      val2 = menor(numeros, num);
      cout<<"\nEl numero menor del arreglo es:"<<val2;
      break;
    case 3:
      float prom;
      prom = promedio(numeros, num);
      cout<<"\nEl promedio del arreglo es: "<<prom;
      break;
    case 4:
      exit(1);
      break;
  }
  }while(selector!=4);
}

  float mayor(float numeros[],int num){
    int x;
    float mayor = numeros[0];
    for(x=0;x<num;x++){
      if (numeros[x] > mayor)
        mayor = numeros[x];
    }
    return mayor;
  }
  float menor(float numeros[],int num){
    int x;
    float menor = numeros[0];
    for(x=0;x<num;x++){
      if(numeros[x] < menor)
        menor = numeros[x];
    }
    return menor;
  }
  float promedio(float numeros[],int num){
    int x;
    float prom = 0;
    for(x=0;x<num;x++){
      prom += numeros[x];
    }
    return prom/=num;
  }



