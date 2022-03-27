#include <iostream>
using namespace std;

int main()
{
    int nota;

    cout<<"\tIngrese el valor de la nota: ";
    cin>>nota;

    if(nota > 100)
        cout<<"\n\tla nota "<<nota<<" es ALTA"<<endl;
    else if(nota < 100)
        cout<<"\n\tla nota "<<nota<<" es BAJA"<<endl;
}