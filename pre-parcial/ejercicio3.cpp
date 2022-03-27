#include <iostream>
using namespace std;

//prototipo de funciones
void cargar_datos();
void consulta_estudiante(int lista[], *int, int arrai[][50], int, int*);
void imprimir_reporte();

int *x,*num, *y;

int main()
{
    int N;
    do{
    cout<<"1. Cargar datos"<<endl;
    cout<<"2. Consultar estudiante"<<endl;
    cout<<"3. Imprimir reporte de las notas: Mostrar reporte de notas parciales y definitiva de cada uno de los N estudiantes"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"\nSeleccione una opcion: ";
    cin>>N;

    if(N<1 || N>4)
        cout<<"\nEl numero ingresado es incorrecto. Intentelo de nuevo"<<endl;

    } while(N<1 || N>4);

    switch (N)
    {
        case 1:
            cargar_datos();
            break;
        case 2:
            consulta_estudiante(&x, &num, &y, 3, &num );
            break;
        case 3:
            imprimir_reporte();
            break;
        case 4:
            cout<<"\nHa salido del programa exitosamente"<<endl;
            break;
    }
}

void cargar_datos()
{
    int est;
    cout<<"\nCuantos estudiantes desea ingresar:";
    cin>>est;
    int codigos[est], notas[3][est];

    for(int i=0; i <= est; i++)
    {
        cout<<"DATOS DEL ESTUDIANTES N-"<<i+1<<endl;

        cout<<"\nIngrese el codigo del estudiante N-"<<i+1<<" :";
        cin>>codigos[i];

        cout<<"\nIngrese la nota 1 del estudiante N-"<<i +11<<" :";
        cin>>notas[i][0];

        cout<<"\nIngrese la nota 1 del estudiante N-"<<i +11<<" :";
        cin>>notas[i][1];

        cout<<"\nIngrese la nota 1 del estudiante N-"<<i +11<<" :";
        cin>>notas[i][2];
    }
    x = &codigos[0];
    num = &est;
    y = &notas[0][0];
}

void consultar_estudiante(int lista[], int* filas1, int arrai[][50], int filas2, int* columnas1)
{
    int id;
    id = 3;
    int cod;

    do{
    cout<<"\nIngrese el codigo del estudiante:";
    cin>>cod;
    for(int i = 0; i <= *filas1; i++)
    {
        if(cod == *lista[i])
        {
            cout<<"\nCODIGO: "<<cod;
            cout<<"\nNOTA 1: "<<arrai[i][0];
            cout<<"\nNOTA 2: "<<arrai[i][1];
            cout<<"\nNOTA 3: "<<arrai[i][2];
            id = 1;
        }    
    }
    if (id != 1)
    {
        cout<<"\nEl codigo que ingreso no se encuentra..."<<endl;
    } 
    cout<<"\nIngrese 0 para salir y 1 para seguir: ";
    cin>>id;
    } while(id != 0);
}