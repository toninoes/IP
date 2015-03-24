/*
 * PRACTICA 2 - EJERCICIO 19
 * Escribe un programa en C que muestre el n-ésimo término de la serie de Fibonacci.
 * Dicho término lo introduce el usuario.
 */

// FIB: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...
// NUM: 1, 2, 3, 4, 5, 6, 7,  8,  9, 10..
#include <stdio.h>

int main(){

    int n, ant=1, fib=0, cont=1, aux;

    do{
        printf("Muestra el termino de Fibonacci nº: ");
        scanf("%d", &n);
        if (n<1)
            printf("ERROR: Introduce numero mayor o igual a 1\n");
    }while (n<1);

    while (cont < n){
        aux = fib;
        fib = fib + ant;
        ant = aux;
        cont++;
    }

    printf("%d ", fib);

    return 0;
}
