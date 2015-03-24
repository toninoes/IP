/*
 * PRACTICA 4 - EJERCICIO 15
 *  Un cuadrado latino de orden N es una matriz cuadrada que en su primera fila contiene
 * los N primeros números naturales y en cada una de las siguientes N-1 filas contiene la
 * rotación de la fila anterior un lugar a la derecha. Realiza un programa que reciba como
 * parámetro la dimensión del cuadrado y genere la matriz correspondiente a su cuadrado
 * latino
 */

#include <stdio.h>
#define N 10

void cuadrado_latino(int dim);
void mostrar_matriz_enteros(int m[][N], int filas, int columnas);

int main(){
    cuadrado_latino(N);
    return 0;
}

//cabecera void cuadrado_latino(int dim);
//precondicion dim es un entero inicializado que representa la dimension de la matriz cuadrada latina a generar
//postcondicion genera una matriz cuadrada latina de dimension dim
void cuadrado_latino(int dim){
    int m[dim][dim];
    int i,j;
    for(i=0 ; i<dim ; i++){
        for(j=0 ; j< dim ; j++){
            if(i+j >= dim)
                m[i][j] = i+j-(dim-1);
            else
                m[i][j] = i+j+1;
        }
    }
    mostrar_matriz_enteros(m, dim, dim);
}

//cabecera mostrar_matriz_enteros(int m[][COL], int filas, int columnas);
//precondicion m es una matriz de enteros inicializada, filas y columnas son enteros inicializados que reprentan las filas y columnas de la matriz de enteros.
//postcondicion muestra por pantalla la matriz m.
void mostrar_matriz_enteros(int m[][N], int filas, int columnas){
    int i, j;
    for(i=0 ; i<columnas ; i++ ){
        for(j=0 ; j<filas ; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}
