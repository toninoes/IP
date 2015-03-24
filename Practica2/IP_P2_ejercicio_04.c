/*
 * PRACTICA 2 - EJERCICIO 4
 * Realiza un programa que dados dos números enteros compruebe si el primero es
 * divisible por el segundo o viceversa.
 */

#include <stdio.h>

int main(){
    int a, b;
    puts("Introduce 2 numeros");
    scanf("%d %d", &a, &b);

    if (b!=0 && a%b == 0)
        printf("El numero %d es divisible entre %d", a, b);
    else{
        if (a!=0 && b%a == 0)
            printf("El numero %d es divisible entre %d", b, a);
        else
            printf("Los numeros no son divisibles entre si");
    }
    return 0;
}
