#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* x = NULL;
    int v = 10;

    x = &v;
    printf("%d",v);
    //MOSTRAR  LA DIRECCION DE MEMORIA DE LA VARIABLE V

    printf("\n%p",&v);

    //MOSTRAR LA DIRECCION DE MEMORIA DE LA VARIABLE X
    printf("\n%p",&x);

    //MOSTARR EL VALOR DE X

    printf("\n%p",x);

    //MOSTRAR EL VALOR AL QUE APUNTA X

    printf("\n%d",*x);

   //////////pedir una variable char por puntero...//////////////////


    //variable algo
    char ingresado;
    //regla de estilo  puntero a la variable algo : pAlgo
    char* pIngresado = NULL;

    pIngresado = &ingresado;

    printf("\nIngrese un caracter: ");
    fflush(stdin);
    scanf("%c",pIngresado);
    printf("%c",ingresado);





    return 0;
}
