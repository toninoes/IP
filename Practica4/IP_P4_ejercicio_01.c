/*
 * PRACTICA 4 - EJERCICIO 1
 * Realiza un programa que declare un vector de 10 enteros y a través de funciones, lo
 * inicialice y lo visualice por pantalla.
 */

#include <stdio.h>
#define MAX 10

void inicializar_vector(int *vect, int fil);
void visualizar_vector(int *vect, int fil);

int main(){
    int v[MAX];
    inicializar_vector(v, MAX);
    visualizar_vector(v, MAX);
    return 0;
}

//cabecera void inicializar_vector(int *vect, int fil);
//precondicion vect es un vector de enteros y fil la longitud de vect
//postcondicion recorre la totalidad del vector para inicializarlo
void inicializar_vector(int *vect, int fil){
    int i;
    for(i=0 ; i<fil ; i++){
        printf("Introduce un valor para vect[%d]: ", i);
        //scanf("%d", &vect[i]);
        //CON ARITMETICA DE PUNTEROS. Solo aplicable a vectores.
        scanf("%d", vect+i);
    }
}

//cabecera void visualizar_vector(int *vect, int fil);
//precondicion vect es un vector de enteros y fil la longitud de vect
//postcondicion recorre la totalidad del vector para visualizarlo
void visualizar_vector(int *vect, int fil){
    int i;
    for(i=0 ; i<fil ; i++){
        //printf("El contenido de vect[%d] es: ", vect[i]);
        //CON ARITMETICA DE PUNTEROS. Solo aplicable a vectores.
        printf("El contenido de vect[%d] es: %d\n", i, *(vect+i));
    }
}
