#include<iostream>
using namespace std;

void leer();
float estatura_media(float estaturas[], int N);
void max_min(float estaturas[], int n);
void cuantos_mayor_menor_media();
void mostrar_resultados();

int main(){

  void leer();
}

void leer(){
  int N, x;
  float promedio = 0, mayor = 0, menor = 0;
  cout<<"\nIngrese la cantidad de estudiantes: ";
  cin>>N;
  float estaturas[N];
  float *p;
  p = estaturas;

  for(x=0;x<N;x++){
    cout<<"\nIngrese la estatura del estudiante: "<<x+1;
    cin>>*p;
    p++;
  }

  promedio = estatura_media(estaturas, N);

  max_min(estaturas, N);

}

float estatura_media(float estaturas[], int N){
  int x;
  float promedio = 0;
  for(x=0;x<N;x++){
    promedio += estaturas[x];
  }
  return promedio/=N;
}

void max_min(float estaturas[], int N){

}

void cuantos_mayor_menor_media();
void mostrar_resultados();

