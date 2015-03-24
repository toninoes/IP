/*
 * PRACTICA 2 - EJERCICIO 1
 * Realiza un programa que lea de la entrada estándar un número entero positivo y
 * escriba en la salida estándar si es par o impar.
 */

#include <stdio.h>

int main(){
    int a;
    puts("Introduce un numero");
    scanf("%d", &a);
    if (a<0) puts("Numero negativo");
    else{
        if (a%2 == 0)
            printf("El numero %d es par", a);
        else
            printf("El numero %d es impar", a);
    }

    return 0;
}

