/*
 * PRACTICA 2 - EJERCICIO 2
 * Realiza un programa que lea tres números enteros positivos distintos e imprima el
 * mayor y el menor valor de los tres. Intente que el programa realice el menor número de
 * comparaciones posible entre los números.
 */

#include <stdio.h>

int main(){
    int a, b, c, aux;
    puts("Introduce 3 numeros");
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
    printf("El mayor es el %d y el menor es %d", c, a);

    return 0;
}
