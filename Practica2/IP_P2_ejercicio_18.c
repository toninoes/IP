/*
 * PRACTICA 2 - EJERCICIO 18
 * Realiza un programa que devuelva los n primeros términos de la serie de Fibonacci,
 * siendo n un número introducido por el usuario.
 */

#include <stdio.h>
// FIB: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
// NUM: 1, 2, 3, 4, 5, 6, 7,  8,  9, 10..
int main(){

    int n, ant=1, fib=0, cont=0, aux;
    do{
        printf("Numero de terminos de Fibonacci: ");
        scanf("%d", &n);
        if (n<1)
            printf("ERROR: Introduce numero mayor o igual a 1\n");
    }while (n<1);

    while (cont < n){
        aux = fib;
        printf("%d ", fib);
        fib = fib + ant;
        ant = aux;
        cont++;
    }

    return 0;
}
