/*
 * PRACTICA 3 - ejercicio 09
 * Realiza un programa que reciba un número y llame a una función que calcule el
 * factorial de ese número, posteriormente con el resultado del paso anterior, debe llamar
 * a la función fibonacci que calcule la sucesión de números hasta ese. (realizarlo de dos
 * formas, una usando funciones que devuelvan los valores y otra simulando el paso de
 * parámetros por referencia).
 */

#include <stdio.h>

int factorial(int);
void fibonacci(int);

int main(){
    int num, fact;
    printf("Introduce un numero: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("El factorial de %d es %d y la sucesion de fibonacci hasta ese numero es\n", num, fact);
    fibonacci(fact);

    return 0;
}

//cabecera int factorial(int);
//precondicion n es un entero inicializado
//postcondicion devuelve el factorial de n
int factorial (int n){
    int i, factorial=1;
    for(i=1 ; i <= n ; i++)
        factorial *= i;

    return factorial;
}

//cabecera int fibonacci(int);
//precondicion n es enteno inicializado
//postcondicion muestra la sucesión de fibonacci hasta n
void fibonacci(int n){
    int ant=1, fib=0, aux;

    while(fib<=n){
        aux = fib;
        printf("%d ", fib);
        fib += ant;
        ant = aux;
    }
}
