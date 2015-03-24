/*
 * PRACTICA 2 - EJERCICIO 24
 * Realiza un programa que escriba todos los números primos entre 3 y 32767
 */

#include <stdio.h>
#include <math.h>

int main(){
    int i, j;

    for (i=3 ; i<=32767 ; i++){
        for (j=2 ; i%j>0 && j<=sqrt(i) ; j++ );
        if (j>sqrt(i))
            printf("%d ", i);
    }
    return 0;
}
