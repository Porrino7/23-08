#include <stdio.h>
#include <stdlib.h>

int main()
{
 int dinero;
 char tipo;
 int contador = 0;
 int maximodolar;
 int primerdolar;
 int acumuladorpositivo = 0;
 float promedio;
 int contadorpositivos = 0;
    while(contador <4){
         contador++;
    printf("ingrese un numero :");
    scanf("%d",&dinero);
    printf("ingrse el tipo :");
    fflush(stdin);
    scanf("%c",&tipo);
    while(tipo != 'd'){
        printf("porfavor reingrese el tipo");
        fflush(stdin);
        scanf("%c",&tipo);
    }

        if(tipo=='d'){
            if (primerdolar == 1){
            maximodolar = dinero ;
            primerdolar = 0;
            }else{
                if(dinero > maximodolar){
                    maximodolar = dinero;
                }




                }





            }

if (dinero > 0){
   acumuladorpositivo += dinero;
   contadorpositivos++;

    }








        }





          if(primerdolar == 1){
                    printf("no ingreso dolares");
                }else{
             printf  ("el importe en dolares es : %d",maximodolar);
                }
       promedio = (float) acumuladorpositivo / contadorpositivos;
       printf("el promedio es %.4f",promedio);

   return 0;
    }
