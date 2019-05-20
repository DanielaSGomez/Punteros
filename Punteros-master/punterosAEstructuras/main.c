#include <stdio.h>
#include <stdlib.h>


typedef struct{

    int numero;
    char letra;

}eDato;

void showUnDato(eDato*);

int showDatos(eDato*, int);

int bubbleSortByLetter(eDato*, int);



int main()
{

    eDato muchosDatos[3] = {{1, 'C'},{1, 'F'},{1, 'A'}};
    int estado;

    estado = bubbleSortByLetter(muchosDatos,3);

    if(estado==0)
    {
        showDatos(muchosDatos,3);
    }
    else
    {
        printf("Error!!!");
    }


    return 0;
}


void showUnDato(eDato* unDato)
{
    //printf("%d-----%c",(*pDato).numero,(*pDato).letra);
    printf("\n%d\t%c", unDato->numero,unDato->letra);
}



 int showDatos(eDato* datos, int tam)
 {
    int i;
    int esNull = 1;

    if(datos != NULL && tam>0)
    {
        printf("\nNUM\tLETRA");
        for(i= 0; i<tam; i++)
        {
            showUnDato(datos+i);
        }

        esNull = 0;
    }

    return esNull;

 }





int bubbleSortByLetter(eDato* datos , int tam)
{
    int i;
    int j;
    eDato aux;
    int esNull = 1;


    if(datos != NULL && tam>0)
    {
        for(i=0; i<tam; i++)
        {
            for(j= i +1; j<tam; j++)
            {
                if((datos+i)->letra>(datos+j)->letra)
                {
                    aux = *(datos+i);
                    *(datos+i)= *(datos+j);
                    *(datos+j)= aux;
                }
            }
        }

        esNull = 0;
    }

    return esNull;
}
