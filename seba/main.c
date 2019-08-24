#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nombre [20];
  int edad;

  printf("ingrese nombre : ");
  gets(nombre);

  printf("ingrese edad : ");
  scanf("%d",&edad);

printf("usted se llama %s y tiene %d anios" ,nombre,edad);
}
