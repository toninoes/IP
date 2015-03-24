/*
 * PRACTICA 3 - ejercicio 09
 * Realiza un programa que reciba un número y llame a una función que calcule el
 * factorial de ese número, posteriormente con el resultado del paso anterior, debe llamar
 * a la función fibonacci que calcule la sucesión de números hasta ese. (realizarlo de dos
 * formas, una usando funciones que devuelvan los valores y otra simulando el paso de
 * parámetros por referencia).
 */

#include <stdio.h>

void factorial(int*, int*);
void fibonacci(int*);

int main(){
    int num, fact;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    factorial(&num, &fact);
    printf("El factorial de %d es %d y la sucesion de fibonacci hasta ese numero es\n", num, fact);
    fibonacci(&fact);

    return 0;
}

//cabecera void factorial(int*, int*);
//precondicion debe recibir 2 parametros por referencia, n es un puntero a entero inicializado
//postcondicion modifica el contenido de factorial
void factorial (int* n, int* f){
    int i;
    *f=1;
    for(i=1 ; i <= *n ; i++)
        *f = *f * i;
}

//cabecera int fibonacci(int);
//precondicion n es un puntero a entero enteno inicializado
//postcondicion muestra la sucesión de fibonacci hasta n
void fibonacci(int* n){
    int ant=1, fib=0, aux;

    while(fib<=*n){
        aux = fib;
        printf("%d ", fib);
        fib += ant;
        ant = aux;
    }
}
