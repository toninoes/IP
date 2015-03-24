/*
 * PRACTICA 2 - EJERCICIO 10
 * Escribe un programa que escriba en la salida estándar todos los caracteres ASCII.
 * Suponiendo un código ASCII de 8 bits (256 valores posibles).
 */

#include <stdio.h>

int main(){
    int i;
    printf("Tabla ASCII\n");
    printf("-----------\n");
    printf("DEC\tREPR.\n");
    for (i=0 ; i<256 ; i++){
        printf("%d\t%c\n", i, i);
    }

    return 0;
}
