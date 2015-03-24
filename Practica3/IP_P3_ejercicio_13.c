/*
 * PRACTICA 3 - EJERCICIO 13
 * Realiza un programa que, utilizando funciones calcule el valor del número e como
 * suma de la serie:
 *
 * 1/i! = 1/0! + 1/1! + 1/2! +....+1/n!
 */

#include <stdio.h>

void numeroE(int *, double *);

int main(){
    double e;
    int n;
    printf("Introduce numero: ");
    scanf("%d", &n);
    numeroE(&n, &e);
    printf("El numero e: %lf", e);
    return 0;
}

//cabecera void numeroE(int *, double *);
//precondicion num es un punteroa entero inicializado y suma es un puntero a real
//postcondicion almacena en suma el valor aproximado de 'e' en funcion de num
void numeroE(int *num, double *suma){
    int i, j, f;
    *suma=1;
    for (i=1 ; i<= *num ; i++){
        f=1;
        for(j=1 ; j<=i ; j++)
            f *= j;
        *suma = *suma + (1.0/f);
    }
}
