#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"\tIngrese el valor de x: ";
    cin>>x;

    if(x < 0)
        cout<<x<<" es menor a 0"<<endl;
    else if(0 <= x && x <= 100)
        cout<<x<<" es mayor o igual a 0 y menor o igual a 100"<<endl;
    else if(x > 100)
        cout<<x<<" es mayor a 100"<<endl;
}