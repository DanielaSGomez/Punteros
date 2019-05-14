#include <stdio.h>
#include <stdlib.h>

//PRIMER CLASE PUNTEROS----------------------------------------------------------------------------------------------
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

    //---------------------------------------------------------------------------------------------------------------
   //pedir una variable char por puntero...


    //variable algo
    char ingresado;
    //regla de estilo  puntero a la variable algo : pAlgo
    //hay que inicializar el puntero en null
    char* pIngresado = NULL;
    //despues se le asigna la direccion de memoria a la que apunta, sino apunta a cualquier lado y rompe el programa
    pIngresado = &ingresado;

    printf("\nIngrese un caracter: ");
    fflush(stdin);
    scanf("%c",pIngresado);
    printf("%c",ingresado);

    //--------------------------------------------------------------------------------------------------------------

    int p;
    int* q;
    int* r;

    p = 10;
    q = &p;

    printf("\n%p",q);
    r = q;

    printf("\n%p",r);

    printf("\n%d",*q);

    printf("\n%d",*r);



    return 0;
}
