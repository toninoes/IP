/*
 * PRACTICA 1 - EJERCICIO 15
 * Se desea averiguar la distancia euclídea de dos puntos en el plano
 * (usando el teorema de Pitágoras), dando las coordenadas de sendos
 * puntos en un eje cartesiano de coordenadas (x1,y1) y (x2,y2).
 */

#include <stdio.h>
#include <math.h>

int main (){

    int x1, y1, x2, y2;
    double distancia;
    printf("Introduce las coordenadas del punto 1\n");
    scanf("%d %d", &x1, &y1);
    printf("Introduce las coordenadas del punto 2\n");
    scanf("%d %d", &x2, &y2);
    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("La distancia desde el punto 1 al 2 es %lf", distancia);

    return 0;

}
