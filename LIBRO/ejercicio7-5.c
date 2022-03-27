#include<stdio.h>
#include<ctype.h>

void vocal(char a);

void main(void)
{
  char letra;
  printf("Ingrese un caracter: ");
  scanf("%c", &letra);

  vocal(letra);
}

void vocal(char a)
{
  a = tolower(a);
  if(a == "a" || a == "e" || a == "i" || a == "o" || a == "u")
    printf("%c es una vocal\n", a);
  else
    printf("%c no es una vocal\n", a);
}
