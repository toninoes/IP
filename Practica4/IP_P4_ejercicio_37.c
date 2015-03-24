/*
 * PRACTICA 4 - EJERCICIO 37
 * Dado un vector dinámico de n elementos inicializados con valores 0 y 1. Escribe una
 * función que reciba dicho vector y el tamaño n y añada un elemento más que represente el
 * bit de paridad, es decir que contenga 0 o 1 para que la paridad sea par, es decir que la
 * cantidad total de 1 sea par.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10

void sumar_paridad(int *v, int dim);

int main()
{
    int i;
    int *vect;
    if( ( vect = (int*)malloc(N*sizeof(int)) ) != NULL){
        printf("malloc OK\n");
        for(i=0 ; i<N ; i++){
            vect[i] = i%2;
        }
    }else{
        printf("No ha podido crearse el vector\n");
    }

    sumar_paridad(vect, N);

    for(i=0; i<(N+1) ; i++)
        printf("%d ", vect[i]);

}

//cabecera void sumar_paridad(int *v, int dim)
//precondicion v es un vector dinamico de enteros inicializado con ceros o unos, dim es un entero inicializado que representa el tamaño actual del vector
//postcondicion añade un elemento mas al vector, pasando a tener un tamaño de dim+1 y con el bit de paridad par como contenido.
void sumar_paridad(int *v, int dim){
    int i, num=0;
    for(i=0 ; i<dim ; i++){
        if(v[i] == 1)
            num++;
    }

    //añado un elemento mas al vector, ahora tendra un tamaño de dim+1.
    if( ( v = (int*)realloc(v, (dim+1)*sizeof(int)) ) != NULL){
        printf("realloc OK\n");
    }else{
        printf("No ha podido hacer realloc\n");

    }

    //añado la paridad par al ultimo elemento.
    if(num%2 == 0)
        v[dim] = 0;
    else
        v[dim] = 1;

}
