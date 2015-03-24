/*
 * PRACTICA 3 - EJERCICIO 4
 * Escribe una función que devuelva el número de cifras de un entero que se introduzca
 * por pantalla.
 */

#include <stdio.h>

int numerocifras (int);

int main(){
    int a;
    printf("Introduce un entero: ");
    scanf("%d", &a);
    printf("El numero %d consta de %d cifras.", a, numerocifras(a));
    return 0;
}

//cabecera int numerocifras (int);
//precondicion num inicializado
//postcondicion devuelve el numero de cifras de num
int numerocifras (int num){
    int cont=1;
    while(num/10 > 0){
        num/=10;
        cont++;
    }
    return cont;
}
