using namespace std;
int main(){
  float x, y, rta, *p, *q;
  x = 100;
  p = &x;
  q = p;
  y = pow(*q,2);
  cout<<"\nx = 100";
  cout<<"\np = &x";
  cout<<"\ny=pow(*q,2)";
  cout<<"\nQue valor tiene y? digitalo";
  cin >> rta;
  
  if (rta == y){
    cout<<"\n***Felicitaciones, tienes claro el concepto de puntero";
  }else{
    cout<<"\n***Lo lamento, aun no tienes claroe el concepto de puntero, el valor de y es de "<< y <<"***Repasa e intentalo de nuevo\n";
    system("pause");
    return 0;
  }
}
