/*
 * PRACTICA 2 - EJERCICIO 17
 * Escribe un programa, que dado un número, compruebe si es o no un número primo
 */

#include <stdio.h>


int main(){
    int num;
    int cont=2;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    while (num%cont > 0){
        cont++;
    }
    //printf("%d\n", cont);
    if (cont == num)
        printf ("El numero %d es primo", num);
    else
        printf ("El numero %d no es primo", num);
    return 0;
}
