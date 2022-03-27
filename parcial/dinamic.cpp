#include <iostream>
#include <stdlib.h>
using namespace std;

int *arrai;
int n;
int main()
{
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    arrai = new int[n];

    for(int i=0;i < n; i++)
    {
        cout<<"ingresa un valor"<<endl;
        cin>>arrai[i];
    }

    for(int i = 0; i< n; i++)
    {
        cout<<"mostra valor"<<i+1<<endl;
        cout<<arrai[i];
    }
}