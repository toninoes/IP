/*
 * PRACTICA 1 - EJERCICIO 11
 * Construye un programa en C que dado un número N evalúe las siguientes expresiones:
 * N², N³, 2^n, 3^n
 */


#include <stdio.h>
#include <math.h>

int main(){

    int n;
    printf("Introduce un numero entero: ");
    scanf("%d", &n);
    printf("%d al cuadrado es: %0.0lf\n", n, pow(n,2));
    printf("%d al cubo es: %0.0lf\n", n, pow(n,3));
    printf("2 elevado a %d es: %0.0lf\n", n, pow(2,n) );
    printf("3 elevado a %d es: %0.0lf\n", n, pow(3,n));

    return 0;

}
