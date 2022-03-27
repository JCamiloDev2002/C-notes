#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Ingrese el primer numero entero: ";
    cin>>a;
    cout<<"\nIngrese el segundo numero entero: ";
    cin>>b;
    cout<<"\nIngrese el tercer numero  entero: ";
    cin>>c;

    if(a > b && b > c)
        cout<<"\nEstan en orden numerico"<<endl;
    else
        cout<<"\nNo estan en orden numeico"<<endl;

}