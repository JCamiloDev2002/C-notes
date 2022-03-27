#include <iostream>
#include <ctype.h>
#include <stdlib.h>

char digito(const char *a);

void main(void)
{
  char car, *x;
  cout("Ingrese un caracter: ");
  cin("%c", &car);
  x = &car;
  if (digito(x))
    cout("el caracter esta entre 0 a 9\n");
  else
  cout("el caracter no esta entre 0 a 9\n");

}

char digito(const char *a)
{
  if (isdigit(*a))
    return 1;
  else
    return 0;
}
