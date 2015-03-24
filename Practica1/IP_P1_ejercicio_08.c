/*
 * PRACTICA 1 - EJERCICIO 8
 * Realiza un programa que lea por teclado tres números enteros y calcule su media
 * aritmética.
 */

#include <stdio.h>

int main()
{
    int a,b,c;
    float media;

    printf("Introduce 3 numeros\n");
    scanf("%d %d %d", &a, &b, &c);
    media = (float)(a+b+c)/3;
    //tb media = (a+b+c)/3.0;
    printf("La media de %d, %d y %d es: %f", a, b, c, media);

    return 0;
}
