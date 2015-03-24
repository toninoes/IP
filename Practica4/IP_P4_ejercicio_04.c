/*
 * PRACTICA 4 - EJERCICIO 4
 * Realiza un programa que escriba por pantalla el máximo de los elementos de un vector.
 * Para ello se deben usar las funciones cuyos prototipos se describen a continuación y utilizar
 * aritmética de punteros para acceder a los elementos del vector.
 *
 *     void leer_vector(int *vector)
 *
 *     void maximo(int *vector, int *max)
 */

#include <stdio.h>
#define MAX 5

void leer_vector(int *vect, int);
void maximo(int *vect, int *m, int);

int main(){
    int v[MAX];
    int mayor;
    leer_vector(v, MAX);
    maximo(v, &mayor, MAX);
    printf("El valor maximo del vector es %d\n", mayor);
    return 0;
}

//cabecera void leer_vector(int *vect, int);
//precondicion vect es un vector de enteros y fil es un entero inicializado que indica la longitud del vector
//postcondicion inicializa el vector
void leer_vector(int *vect, int fil){
    int i;
    for(i=0 ; i<fil ; i++){
        printf("Introduce un valor para vect[%d]: ", i);
        //scanf("%d", &vect[i]);
        //CON ARITMETICA DE PUNTEROS. Solo aplicable a vectores.
        scanf("%d", vect+i);
    }
}

//cabecera void maximo(int *vect, int *m, int);
//precondicion vect es un vector de enteros inicializado, m es un puntero a entero y fil es un entero inicializado que indica la longitud del vector
//postcondicion almacena en m el valor del maximo elemento del vector.
void maximo(int *vect, int *m, int fil){
    int i;
    //*m = vect[0];
    //CON ARITMETICA DE PUNTEROS
    *m = *(vect+0);
    for(i=1 ; i<fil ; i++){
        //if (vect[i] > *m) *m = vect[i];
        //CON ARITMETICA DE PUNTEROS
        if (*m < *(vect +i)) *m=*(vect+i);

    }
}
