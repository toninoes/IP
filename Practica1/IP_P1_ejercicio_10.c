/*
 * PRACTICA 1 - EJERCICIO 10
 * El periodo de un péndulo de longitud L se define mediante la fórmula P = 2*PI*SQRT(L/G)
 * donde G y PI son constantes, (aceleración de la gravedad G= 9,8 m/seg2). Escribe un
 * programa que reciba por teclado la longitud y devuelva el periodo de un péndulo.
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define G 9.8

int main(){

    float periodo, longitud;
    printf("Introduce un valor para la longitud del pendulo: ");
    scanf("%f", &longitud);
    periodo = 2*PI*sqrt(longitud/G);
    printf("El periodo del pendulo es de %f", periodo);

    return 0;
}
