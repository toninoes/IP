/*
 * PRACTICA 4 - EJERCICIO 12
 * Realiza una función int compara(int A[N][N], int B[N][N]) que determine si dos
 * matrices cuadradas de enteros son iguales. La función devolverá 1 si las matrices son
 * iguales y 0 en caso contrario.
 */

#include <stdio.h>
#define FIL 3
#define COL 3

int compara(int A[][COL], int B[][COL], int filas, int columnas);

int main(){
    int m[FIL][COL]={ {1,2,3},{4,5,6},{7,8,9} };
    int n[FIL][COL]={ {1,3,3},{4,5,6},{7,8,9} };

    if (compara(m,n, FIL, COL) == 1)
        printf("Las matrices son iguales");
    else
        printf("Las matrices son diferentes");

    return 0;
}

//cabecera int compara(int A[][COL], int B[][COL], int filas, int columnas);
//precondicion A y B son matrices de enteros inicializadas, filas y columnas son enteros inicializados que reprentan las filas y columnas de la matriz de enteros
//postcondicion devolverá 1 si las matrices A y B son iguales y 0 en caso contrario.
int compara(int A[][COL], int B[][COL], int filas, int columnas){
    int i=0, j=0, comp=1;
    for(i=0; i<filas ; i++){
        for(j=0 ; j<columnas ;j++){
            if (A[i][j] != B[i][j])
                comp=0;
        }
    }

    return comp;
}
