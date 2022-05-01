#include <iostream>
using namespace std;

int main(){
  int N, x;
  cout<<"\nIngrese la cantidad de alumnos: ";
  cin>>N;
  float peso[N];
  float *p;
  p = peso;

  for(x=0;x<N;x++){
    cout<<"\nIngrese el peso del alumno "<<x +1 <<" :";
    cin>>*p;
    p++;
  }

  int clase1 = 0, clase2 = 0, clase3 = 0, clase4 = 0;

  for(x = 0;x<N;x++){
    if(peso[x] < 40){
      clase1++;
    }
    else if(peso[x] >= 40 && peso[x] <=50){
      clase2++;
    }
    else if(peso[x] >50 && peso[x] <60){
      clase3++;
    }else{
      clase4++;
    }
  }



  cout<<"\nCriterio";
  cout<<"\nAlumnos de menos de 40kg: "<<clase1;
  cout<<"\nAlumnos entre 40kg y 50kg: "<<clase2;
  cout<<"\nAlumnos de mas de 50kg y menos de 60kg: "<<clase3;
  cout<<"\nAlumnos de mas o igual a 60kg: "<<clase4<<endl;
}
