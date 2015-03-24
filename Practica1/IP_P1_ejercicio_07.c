/*
 * PRACTICA 1 - EJERCICIO 7
 * Realiza un programa que pida por teclado dos números enteros e imprima en pantalla su
 * suma, resta, multiplicación, división y resto (modulo) de la división. Si la operación no es
 * conmutativa, también se mostrará el resultado, invirtiendo los operandos.
 */

#include <stdio.h>

int main(){

    int a,b, resta, mult, divi;
    printf("Introduce dos numeros enteros: ");
    scanf("%d %d", &a, &b);
    printf("La suma de %d + %d es: %d\n", a, b, a+b);
    printf("La resta de %d - %d es: %d\n", a, b, a-b);
    printf("La resta de %d - %d es: %d\n", b, a, b-a);
    printf("La multiplicacion de %d x %d es: %d\n", a, b, a*b);
    printf("La division de %d/%d es: %d y el resto %d\n", a, b, a/b, a%b);
    printf("La division de %d/%d es: %d y el resto %d\n", b, a, b/a, b%a);

    return 0;
}
