#include <iostream>
#include <string.h>
using namespace std;
int digitos(int a);

int main()
{
    int num;
    cout<<"\n\tIngrese un numero:";
    cin>>num;

    cout<<"el numero "<<num<<" tiene "<<digitos(num)<<" digitos"<<endl;
}

int digitos(int a)
{
    string palabras;
    palabras = to_string(a);
    return palabras.size();
}
