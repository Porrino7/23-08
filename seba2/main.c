#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero1;
int numero2;
int suma;
float promedio;

printf("ingrese un numero:  ");
scanf("%d", &numero1);

printf ("ingrese otro numero :  ");
scanf("%d",&numero2);

promedio = (float) (numero1 + numero2) / 2.;

printf("el promedio es %.2f \n",promedio);


return 0;

}

