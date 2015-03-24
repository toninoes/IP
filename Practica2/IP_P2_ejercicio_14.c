/*
 * PRACTICA 2 - EJERCICIO 14
 * Realiza un programa que imprima la suma de los números pares entre dos y mil.
 */

#include <stdio.h>

int main(){

    int i, suma=0;

    for (i=4 ; i < 1000 ; i+=2){
        suma += i;
    }
    printf("La suma es: %d", suma);

    return 0;
}
