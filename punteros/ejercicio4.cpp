#include <iostream>
using namespace std;

int main(){
  float meses[12];
  int x = 0, z =0;
  float *p;
  p = meses;

  for(x=0;x<12;x++){
    cout<<"\nIngrese el costo de produccion del mes "<<x + 1<<" :";
    cin>>*p;
    p++;
  }

  cout<<"\nMes de mayor costo de produccion:";
  int mayor = 0;
  float may = 0;
  for(x=0;x<12;x++){
    if(meses[x] > may){
      mayor = x + 1;
      may = meses[x];
    }
  }
  cout<<mayor<<endl;

  cout<<"\nPromedio anual de los costos de produccion:";
  float promedio = 0;
  for(x=0;x<12;x++){
    promedio += meses[x];
  }
  promedio /= 12;
  cout<<promedio<<endl;

  cout<<"\nMes de menor costo de produccion:";
  int menor = 0;
  float men = 999999;
  for(x=0;x<12;x++){
    if(meses[x] < men){
      menor = x + 1;
      men = meses[x];
    }
  }
  cout<<menor<<endl;
  
}
