/*
 * PRACTICA 4 - EJERCICIO 2
 * Escribe un programa que lea diez enteros comprendidos entre 1 y 10, los almacene en
 * un vector y escriba por pantalla la cantidad de elementos de cada número que contiene.
 *
 *     Ejemplo: Dado el siguiente vector [2, 2, 2, 3, 3, 4, 4, 4, 7, 7]
 *     La salida producida sería:
 *     Existen 3 elementos del número 2
 *     Existen 2 elementos del número 3
 *     Existen 3 elementos del número 4
 *     Existen 2 elementos del número 7
 */

#include <stdio.h>
#define MAX 10
#define INT_MIN 1
#define INT_MAX 10

void inicializar_vector(int *vect, int fil, int min_int, int max_int);
void recuento_vector(int *vect, int fil, int min_int, int max_int);

int main(){
    int v[MAX];
    inicializar_vector(v, MAX, INT_MIN, INT_MAX);
    recuento_vector(v, MAX, INT_MIN, INT_MAX);
    return 0;
}

//cabecera void inicializar_vector(int *vect, int fil, int min_int, int max_int);
//precondicion vect es un vector de enteros, fil la longitud de vect, min_int y max_int los valores minimo y maximo de enteros aceptados
//postcondicion recorre la totalidad del vector para inicializarlo
void inicializar_vector(int *vect, int fil, int min_int, int max_int){
    int i;
    for(i=0 ; i<fil ; i++){
        do{
            printf("Introduce un valor para vect[%d] comprendido entre %d y %d: ", i, min_int, max_int);
            //scanf("%d", &vect[i]);
            //CON ARITMETICA DE PUNTEROS. Solo aplicable a vectores.
            scanf("%d", vect+i);
            if (vect[i] > max_int || vect+1 < vect[i])
                printf("ERROR: El numero debe estar entre %d y %d\n", min_int, max_int);
        }while(vect[i] > max_int || vect+1 < vect[i]);
    }
}

//cabecera void recuento_vector(int *vect, int fil, int min_int, int max_int);
//precondicion vect es un vector de enteros, fil la longitud de vect, min_int y max_int los valores minimo y maximo de enteros que contiene el vector
//postcondicion escribe por pantalla la cantidad de elementos de cada número que contiene entre min_int y max_int
void recuento_vector(int *vect, int fil, int min_int, int max_int){
    int i, j, cont=0;
    for(i=min_int ; i<=max_int ; i++){
        for(j=0 ; j<fil ; j++ ){
            if (vect[j]==i)
                cont++;
        }
        if (cont>0)
            printf("Existen %d elementos del número %d\n", cont, i);
        cont=0;
    }
}
