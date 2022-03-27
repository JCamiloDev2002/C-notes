#include <stdio.h>

void main(void)
{
int num_pos = 0, num_neg = 0, num_null = 0;
int I, num;
int A;

printf("\n\tCuantos numeros quiere ingresar en el arreglo:");
scanf("%d", &num);
int ARRE[num];

for(A = 0; A < num; A++){
    printf("Ingrese el %d dato: ", A+1);
    scanf("%d", &ARRE[A]);
}

for(I = 0;I < num; I++)
{ 
  if(ARRE[I] > 0){
    num_pos++;
  }else if(ARRE[I] < 0){
    num_neg++;
  }else{
    num_null++;
  }
}
printf("\n\tDatos positivos: %d", num_pos);
printf("\n\tDatos negativos: %d", num_neg);
printf("\n\tDatos nulos: %d \n", num_null);
}
