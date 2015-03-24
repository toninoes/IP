/*
 * PRACTICA 2 - EJERCICIO 16
 * Realiza un programa que imprima las tablas de multiplicar del 1 al 10.
 */

#include <stdio.h>

int main(){
    int i,j;

    for (i=1 ; i<= 10 ; i++){
        printf("\nTabla del %d\n", i);
        for (j=1 ; j<=10 ; j++)
            printf("%d x %d = %d\n", i, j, i*j);
    }

    return 0;
}
