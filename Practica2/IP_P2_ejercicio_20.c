/*
 * PRACTICA 2 - EJERCICIO 20
 * Escribe un programa que calcule el M.C.D (Máximo Común Divisor) de dos
 * números que se piden por teclado.
 */

#include <stdio.h>

int main(){
    int dividendo, divisor, cociente, resto, mcd;
    printf("Introduce 2 numeros: ");
    scanf("%d %d", &dividendo, &divisor);

    while(dividendo%divisor > 0){
        resto = dividendo%divisor;
        printf("%d / %d = %d + %d\n", dividendo, divisor, (dividendo/divisor), (dividendo%divisor));
        dividendo = divisor;
        divisor = resto;
    }

    printf("El m.c.d. es %d", divisor);

    return 0;
}
