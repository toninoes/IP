/*
 * PRACTICA 2 - EJERCICIO 12
 * Escribe un programa que eleve un número a cualquier potencia, dadas la base y la
 * potencia.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int base, exp, cont=0;
    double pot=1;

    printf("Introduzca 2 numeros base y exponente: ");
    scanf("%d %d", &base, &exp);

/*    SIN UTILIZAR funcion abs() de stdlib.h
    int fincont
    if (exp<0)
        fincont = exp*-1;
    else
        fincont = exp;
    while (cont < fincont){
        pot*=base;
        cont++;
    }
*/

    while (cont < abs(exp)){
        pot*=base; //pot = pot * base
        cont++;
    }

    if (exp<0){
        pot = 1/pot;
        printf("%d elevado a %d es %f", base, exp, pot);
    }else
        printf("%d elevado a %d es %.0f", base, exp, pot);

    return 0;
}
