/*
 * PRACTICA 1 - EJERCICIO 12
 * Escribe un programa que calcule la reactancia inductiva para un frecuencia en
 * particular. El usuario del programa debe introducir el valor del inductor y de la frecuencia.
 * La fórmula para calcular la reactancia inductiva es: XL = 2 PIfL
 * Donde:
 * XL = Resistencia inducida en ohmios
 * f= frecuencia en herzios
 * L= valor de la inductancia en henrios
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){

    float xl, f, l;
    printf("Introduzca el valor del inductor en Hz: ");
    scanf("%f", &l);
    printf("Introduzca el valor de la frecuencia en Hz: ");
    scanf("%f", &f);
    xl = 2* PI* f* l;
    printf("El valor de la reactancia inductiva resultantes es: %f", xl);

    return 0;
}
