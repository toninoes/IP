/*
 * PRACTICA 1 - EJERCICIO 13
 * Construye un programa que convierta grados Celsius a grados Fahrenheit.
 * La entrada del usuario será la temperatura Celsius. La relación es: F = (9/5)C + 32
 */

#include <stdio.h>

int main(){

    float temp_celsius, temp_faren;
    printf("Introduce un valor de temperatura en grados Celsius\n");
    scanf("%f", &temp_celsius);
    temp_faren = (9*temp_celsius/5) + 32;
    printf("La temperatura introducida en grados Fahrenheit es igual a: %f", temp_faren);

    return 0;
}
