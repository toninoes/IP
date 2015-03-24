/*
 * PRACTICA 1 - EJERCICIO 3
 * Escribe un programa que lea desde teclado cuatro datos de tipo char, int, float, double y
 * los muestre en pantalla.
 */


#include <stdio.h>

int main(){
    char caracter;
    int entero;
    float real;
    double doblereal;
    printf("Introduce un caracter: ");
    scanf("%c", &caracter);
    printf("Introduce un numero entero: ");
    scanf("%d", &entero);
    printf("Introduce un numero real: ");
    scanf("%f", &real);
    printf("Introduce un numero real con doble precision: ");
    scanf("%lf", &doblereal);

    printf("Has introducido:\n-Caracter: %c\n-Entero: %d\n-Real: %f\n-Real dob: %lf", caracter, entero, real, doblereal);
}
