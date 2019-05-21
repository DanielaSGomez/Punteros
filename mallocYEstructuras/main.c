#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNumeros;
    int i;
    int* pAuxiliar;

   pNumeros = (int*) malloc(sizeof(int)*5);//le pide 20 bytes de memoria consecutiva en el heap(int vale 4)

    if(pNumeros != NULL)//significa que pudo reservar los 20 esacios ne la memoria//es un vector!!!!!!!!!!!!!!
    {
        for(i = 0; i<5; i++)
        {
            *(pNumeros+i)= i+ 1;
        }
        printf("\nIngrese 5 numeros: \n");

        for(i = 0; i<5; i++)
        {

            scanf("%d", pNumeros +i);//no se pone & ni * xq ya es la direccion del primer lugar del array
        }

        for(i= 0; i<5; i++)
        {
            printf("\n%d", *(pNumeros +i));
        }

        //realloc reasigna espacio en memoria
        //si no encuentra espacio en memoria consecutivo, realloc compromete otros espacios siguientes , copia los valores libera el segmento qe se cortaba
        //y asigna al putnero la nueva direcciond e memoria desde donde empieza todo el bloque nuevo sin cortarse
        //realloc recbe dos parametros un puntero a void y el tamaño que quiere redimensioanr, devuelve un puntero a void
           pAuxiliar = (int*)realloc(pNumeros, sizeof(int)*10);

           if(pAuxiliar != NULL)
           {
               pNumeros = pAuxiliar;

               printf("\nIngrese 5 numers mas:\n");

               for(i=5;i<10;i++)
               {
                   scanf("%d", pNumeros + i);
               }

                for(i=0; i<10;i++)
                {
                     printf("\n%d", *(pNumeros +i));
                }

           }
           else
           {
               printf("Nohay espacio en memoria");
           }
    }


    return 0;
}
