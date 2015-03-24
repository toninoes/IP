/*
 * PRACTICA 1 - EJERCICIO 8
 * Realiza un programa que evalúe un polinomio de grado tres p(x) = ax³ + bx² + cx + d
 * suponiendo que recibe por teclado, los datos del valor de la variable y los valores de los
 * coeficientes.
 */

#include <stdio.h>
#include <math.h>

int main (){
    float a, b, c, d, x, p;
    printf("Introduce el valor de la variable x del polinomio: ");
    scanf("%f", &x);
    printf("Introduce el valor de los coeficientes a, b, c y d del polinomio: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    p = a*pow(x,3) + b*pow(x,2) + c*x +d;
    printf("El resultado es: %f", p);
    return 0;
}
