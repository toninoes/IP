/*
 * PRACTICA 4 - EJERCICIO 13
 * Realiza una función que compruebe si una matriz es simétrica. La función devolverá 1
 * si la matriz es simétrica y 0 en caso contrario.
 */

#include <stdio.h>
#define FIL 3
#define COL 3

int es_matriz_enteros_simetrica(int A[][COL], int filas, int columnas);

int main(){
    //int m[FIL][COL]={ {1,2,3},{4,5,6},{7,8,9} };

    int m[FIL][COL]={ {1,2,3},{2,5,6},{3,6,9} };
    if (es_matriz_enteros_simetrica(m, FIL, COL) == 1)
        printf("Las matrices son simetricas");
    else
        printf("Las matrices NO son simetricas");

    return 0;
}

//cabecera int es_matriz_enteros_simetrica(int A[][COL], int filas, int columnas);
//precondicion A es una matriz de enteros inicializada, filas y columnas son enteros inicializados que reprentan las filas y columnas de la matriz de enteros
//postcondicion devolverá 1 si la matriz A es simétrica y 0 en caso contrario.
int es_matriz_enteros_simetrica(int A[][COL], int filas, int columnas){
    int i,j, sim=1;
    for(i=0 ; i<filas ; i++){
        for(j=0 ; j<columnas ; j++){
            if(A[i][j] != A[j][i])
                sim=0;
        }
    }
    return sim;
}


