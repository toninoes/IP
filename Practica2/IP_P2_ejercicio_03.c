/*
 * PRACTICA 2 - EJERCICIO 3
 * Escribe un programa que resuelva una ecuación de segundo grado ax² + bx + c = 0 y
 * devuelva las raíces reales ordenadas ascendentemente.
 */

#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c;
    double x1, x2;
    puts("Introduce 3 numeros");
    scanf("%d%d%d", &a, &b, &c);


    if (a == 0){
        x1 = -c/b;
        printf("La ecuacion solo tiene una solucion x1=%lf", x1);
    }
    else{
        if (pow(b, 2) - (4*a*c) < 0)
            printf("La ecuacion no tiene solucion real");


    }

    return 0;
}
