/*
 * PRACTICA 1 - EJERCICIO 4
 * Escribe un programa que lea por teclado un carácter y muestre en pantalla el código
 * ASCII del mismo y el carácter siguiente alfabéticamente.
 */

#include <stdio.h>

int main(){
    unsigned char caracter;
    printf("Introduce un caracter: ");
    scanf("%c", &caracter);
    printf("El caracter introducido es: %c y tiene el código %d de la tabla ASCII\n", caracter, caracter);
    printf("El caracter siguiente corresponde a: %c y tiene el código %d de la tabla ASCII", (int)caracter + 1, (int)caracter + 1);

    return 0;
}
