/*
 * PRACTICA 3 - EJERCICIO 1
 * Realiza una función que reciba como entrada las coordenadas cartesianas de un
 * punto del plano(x,y) y devuelva el cuadrante en el que se encuentra el punto (1, 2, 3, 4),
 * debe devolver 0 si se encuentra en un eje.
 */

#include <stdio.h>

int devuelve_cuadrante(float, float);

int main(){

    float a, b;
    printf("Introducir coordenadas cartesianas de un punto: ");
    scanf("%f %f", &a, &b);
    printf("El punto se encuentra en el cuadrante nº %d", devuelve_cuadrante(a, b));
    return 0;

}

//cabecera int devuelve_cuadrante(float, float);
//precondicion deben pasarseles obligatoriamente dos valores de tipo real inicializados
//postcondicion devuelve el cuadrante en el que se encuentra el punto (1, 2, 3, 4) o 0 si está en un eje
int devuelve_cuadrante(float x, float y){
    int cuadrante;

    if (x > 0){
        if (y > 0)
            cuadrante = 1;
        else
            if (y < 0)
                cuadrante = 4;
            else
                cuadrante = 0;
    }else
        if (x < 0){
            if (y > 0)
                cuadrante = 2;
            else
                if (y < 0)
                    cuadrante = 3;
                else
                    cuadrante = 0;
        }else
            cuadrante = 0;

    return cuadrante;

}
