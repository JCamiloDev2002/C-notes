#include <cstdio>
#include <iostream>
#include <stdlib.h>

using namespace std;
void datos(void);
void nomina(void);
void chofer(int cod);
void reporte(void);

//punteros globales
int *code, *ARRE2, *lista;
int users, sue_hrs;


int main()
{
  int num;
  do{
  cout<<"\t\tCOMPAÑIA DE TRANSPORTES RAPIDOS Y FURIOSOS"<<endl;
  cout<<"1.\tIngresar datos del chofer."<<endl;
  cout<<"2.\tGenerar nomina del chofer."<<endl;
  cout<<"3.\tConsultar un chofer."<<endl;
  cout<<"4.\tReporte."<<endl;
  cout<<"5.\tSalir."<<endl;
  
  cout<<"\nSeleccion una opcion: ";
  cin>>num;

  switch(num){
  case 1: 
      datos();
    break;
  case 2:
      nomina();
    break;
  case 3:
      consultar();
    break;
  case 4:
    reportes();
    break;
  case 5:
      cout<<"Ha salido exitosamente del programa";
    break;
  default:
      cout<<"EL numero ingresado es erroneo";
    break;
    }
  }while(num < 5 && num > 0);
}

void datos(void)
{
    do{
  cout<<"Cuantos usuarios va ingresar(max50): ";
  cin>>users;
  }while(users > 50);
  

  code = new int [users];
  ARRE2 = new int[users];

  cout<<"\nIngrese el sueldo por hora: ";
  cin>>sue_hrs;

  //ciclo de lectura de datos de choferes
  for(int i = 0; i < users; i++)
  { 
    cout<<"Ingrese el codigo del chofer N-"<<i+1<<": ";
    cin>>code[i]; 

     //ciclo de horas trabajadas
     int value = 0;
    for(int a = 0;a < 6; a++)
    {
      int v;
      cout<<"\nIngrese las horas trabajadas el dia "<<a +1<<" : ";
      cin>>v;
     value += v;
    } 
    ARRE2[i] = value;
    
  } 
  }

void nomina()
{
  lista = new int[users];

  for(int i = 0; i < users; i++)
  {
    lista[i] = ARRE2[i] * sue_hrs;
  }
  
  cout<<"\nCantidad horas trabajadas y total a pagar"<<endl;
  for(int a = 0; a < users; a++)
  {
        cout<<"codigo: "<<code[a]<<"\tHoras trabajadas: "<<ARRE2[a]<<" \tTotal a pagar: "<< lista[a]<<endl;
  }
}

void consultar()
{
  int cod, id = 0;
  do{
  cout<<"\nIngresar el codigo del chofer";
  cin>>cod;

  for(int i = 0; i < users; i++)
  {
    if (cod == code[i])
    {
      id = 1;
      cout<<"\nCantidad de horas: "<<ARRE2[i];
      cout<<"\nsueldo por hora: "<<sue_hrs;
      cout<<"\ntotal a cancelar: "<<lista[i]<<endl;
    }
  }

  if (id = 0)
    cout<<"\nel codigo ingresado es erroneo"<<endl;
  }while(id == 0);
}

void reportes()
{
  int opt, total = 0;

  do{
  cout<<"\n1.Total pagado por la empresa";
  cout<<"\n2.total horas trabajadas"<<endl;

  cout<<"\nSeleccione una opcion: ";
  cin>>opt;

  if(opt == 1)
  {
    
    for(int i = 0; i < users; i++)
    {
      cout<<"\nCodigo: "<< code[i];
      cout<<"\ntotal cancelado: "<< lista[i];
      total += lista[i];
    }
      cout<<"el total a apagar por la empresa es: "<<total<<endl;
  }
  else if(opt == 2)
  {

  }
  else
    cout<<"\nOpcion incorrecta";
  } while(opt !=1 && opt !=2);
}