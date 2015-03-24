/*
 * PRACTICA 3 - EJERCICIO 7
 * Escribe una función que realice el intercambio de dos variables enteras. La cabecera
 * de la función será void swap (int *x, int *y) y la llamada swap(&x, &y)
 */

#include <stdio.h>

void swap_int(int*, int*);

int main(){
    int x, y;
    printf("Introduce 2 numeros: ");
    scanf("%d %d", &x, &y);
    printf("Direccion de x=%p valor=%d\n", &x, x);
    printf("Direccion de y=%p valor=%d\n", &y, y);
    swap_int(&x, &y);
    printf("#####################################\n");
    printf("Direccion de x=%p valor=%d\n", &x, x);
    printf("Direccion de y=%p valor=%d\n", &y, y);
    return 0;
}

//cabecera void swap(int*, int*);
//precondicion a y b son punteros a enteros iniciados
//postcondicion intercambia la direccion de a por la de b
void  swap_int(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
