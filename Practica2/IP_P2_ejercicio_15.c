/*
 * PRACTICA 2 - EJERCICIO 15
 * Realiza un programa que calcule la media de 10 números introducidos por teclado.
 */

#include <stdio.h>
#define TOT 10
int main(){

    int num, cont=1;
    float media=0;
    printf("Introduce %d numeros para calcular su media\n", TOT);
    while(cont<=TOT){
        printf("Mete el %dº: ", cont);
        scanf("%d", &num);
        media += num;
        cont++;
    }
    printf("La media de todos los numeros es: %.2f", media/TOT);

    return 0;
}
