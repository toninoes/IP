/*
 * PRACTICA 1 - EJERCICIO 9
 * Escribe un programa que pida un radio y calcule el perímetro de la circunferencia (2*PI*r),
 * el área del círculo (PI*r²) y el volumen de la esfera (4/3 PI r³)
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(){

    double radio, perimetro, area, volumen;
    printf("Introduce un valor para el radio de la circunferencia: ");
    scanf("%lf", &radio);
    perimetro = 2* PI* radio;
    area = PI* pow(radio, 2);
    volumen = 4.0/3 * PI* pow(radio, 3);
    printf("El perimetro de la circunferencia de radio %0.2lf es: %0.2lf\n", radio, perimetro);
    printf("El area del circulo de radio %0.2lf es: %0.2lf\n", radio, area);
    printf("El volumen de la esfera de radio %0.2lf es: %0.2lf", radio, volumen);

    return 0;
}
