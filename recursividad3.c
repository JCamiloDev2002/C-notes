#include <stdio.h>
#include <string.h>

int par(int n);
int impar(int n);

int main()
{
  int num;
  char rslt[12];

  do{
  printf("Ingrese un numero: ");
  scanf("%d", &num);
  } while(num < 0);
  
  if (par(num))
    strcpy(rslt, " es par");
  else
    strcpy(rslt, " es impar");
  return 0;
}

int par(int n)
{
  if (n == 0)
    return 1;
  else 
    return impar(n-1);
}

int impar(int n)
{
  if (n == 0)
    return 0;
  else
    return par(n-1);

}
