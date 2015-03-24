/*
 * PRACTICA 3 - EJERCICIO 17
 * Escribe funciones que lleven a cabo lo siguiente:
 *     a) Calcule la parte entera del cociente cuando el entero A se divide por el entero B
 *
 *     b) Calcule el residuo entero cuando el entero A es dividido por el entero B
 *
 *     c) Utilice las funciones desarrolladas en a y b para describir una función que introduzca
 *     un entero entre 1 y 32.767 y lo visualice como una serie de dígitos, estando separados
 *     cada par de dígitos por dos espacios. Por ejemplo el entero 4562 deberá ser visualizado
 *     como 4 5 6 2
 */

#include <stdio.h>

void calcular_cociente(int *, int *, int *);
void calcular_resto(int *, int *, int *);

int main(){

    return 0;
}

void calcular_cociente(int *dividendo, int *divisor, int *cociente){
    *cociente = *dividendo / *divisor;
}

void calcular_resto(int *dividendo, int *divisor, int *resto){
    *resto = *dividendo % *divisor;
}
