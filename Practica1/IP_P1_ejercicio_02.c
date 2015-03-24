/*
 * PRACTICA 1 - EJERCICIO 2
 * Realiza un programa que escriba en pantalla las constantes ‘A’, 3 y 3.3 como datos de
 * tipo char, int y float respectivamente.
 */

#include <stdio.h>

int main()
{
    #define A 'A'
    #define tres 3
    #define tres_con_tres 3.3
    printf("%c %d %0.1f", A, tres, tres_con_tres);
    return 0;
}
