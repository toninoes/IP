/*
 * PRACTICA 2 - EJERCICIO 11
 * Escribe un programa que lea dos números y muestre por pantalla todos los números
 * comprendidos entre esos números dados.
 */

#include <stdio.h>

int main(){
    int a, b, aux, i;
    printf("Introduce dos numeros: ");
    scanf("%d %d", &a, &b);
    if (a>b){
        aux=a;
        a=b;
        b=aux;
    }
    i=a+1;
    while(i<b){
        printf("%d\t", i);
        i++;
    }
    //for (i=a+1 ; i<b ; i++)
    //    printf("%d\t", i);

    return 0;
}
