/*
 * PRACTICA 2 - EJERCICIO 9
 * Realiza un programa que acepte tres números y devuelva el cubo de los dos
 * mayores.
 */

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, aux;

    printf("Introduce tres numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b){
        aux=a;
        a=b;
        b=aux;
    }
    if (b>c){
        aux=b;
        b=c;
        c=aux;
    }
    if (a>b){
        aux=a;
        a=b;
        b=aux;
    }

    printf("El cubo de %d es %.0f y el de %d es %.0f", c, pow(c,3), b, pow(b,3));

    return 0;
}
