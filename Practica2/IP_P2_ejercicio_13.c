/*
 * PRACTICA 2 - EJERCICIO 13
 * Escribe un programa que calcule el factorial de un número n entero positivo, leído
 * por teclado.
 */

#include <stdio.h>

int main(){

    int num;
    long unsigned fact = 1;

    do{
        printf("Escribe un numero: ");
        scanf("%d", &num);
    }while(num < 0);

    while(num > 1){
        fact *= num;
        num--;
    }

    printf("El factorial es: %lu", fact);
    return 0;

}
