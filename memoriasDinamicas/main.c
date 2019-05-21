#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNumero;


    //malloc recibe un sizeof que representa un entero y, a su vez, la cant de bytes que se reservan, y devuelve un puntero a void
    //el puntero a void lo puedo hacer puntero para lo que quiera, casteandolo
    pNumero = (int*)malloc(sizeof(int));

    *pNumero = 99;
    printf("Heap--->pNumero : %d",pNumero);//direccion de mekoria del monton
    printf("\nStack---->&pNumero: %d", &pNumero);//direccion de memoria d ela pila

    if(pNumero!= NULL)
    {

        printf("\nValor--->*pNumero: %d", *pNumero);
        free(pNumero);
        printf("\nLuego del free: ");
        printf("Heap--->pNumero : %d",pNumero);//direccion de mekoria del monton
        printf("\nStack---->&pNumero: %d", &pNumero);//direccion de memoria d ela pila
        printf("\nValor--->*pNumero: %d", *pNumero);
    }



    return 0;
}
