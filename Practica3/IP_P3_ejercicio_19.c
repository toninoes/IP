/*
 * PRACTICA 3 - EJERCICIO 19
 * Escribe un programa que ordene tres números por el método del intercambio
 * usando una macro para realizar el intercambio de dos variables.
 */

#include <stdio.h>
#define INTERCAMBIO(x,y) {int aux; aux=(x); (x)=(y); (y)=aux;}

int main(){
    int a, b, c;
    puts("Introduce 3 numeros");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b) INTERCAMBIO(a,b)
    if(b>c) INTERCAMBIO(b,c)
    if(a>b) INTERCAMBIO(a,b)

    printf("%d %d %d", a, b, c);
    return 0;
}
