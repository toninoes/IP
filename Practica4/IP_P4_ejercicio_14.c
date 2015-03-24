/*
 * PRACTICA 4 - EJERCICIO 14
 * Dada una matriz A de enteros de dimensión nxn, implementa un programa que determine si existen
 * dos elementos ubicados en la diagonal principal (cada uno de ellos en una posición distinta)
 * cuyo producto sea igual a algún otro elemento que ocupe una posición distinta a las de la
 * diagonal principal.
 */

#include <stdio.h>
#define N 4


void busca_numero_excepto_diagonal(int A[N][N], int dimension, int num);

int main(){
    int i, j, k, l, buscar;
    int m[N][N]={ {3,20,3,15}, {4,4,6,7}, {7,12,5,8}, {18,1,4,6} };

    for(i=0, j=0 ; i<N ; i++, j++){
        for(k=i+1, l=j+1 ; k<N ; k++, l++){
            buscar = m[i][j] * m[k][l];
            printf("m[%d][%d] X m[%d][%d] = %d\n", i, j, k, l, buscar);
            busca_numero_excepto_diagonal(m, N, buscar);
        }
    }

    return 0;
}

//cabecera void busca_numero_excepto_diagonal(int A[N][N], int dimension, int num);
//precondicion A es una matriz cuadrada de enteros inicializada, dimension y num son enteros inicializados, dimension reprenta la dimension de la matriz cuadrada y num es el numero a buscar
//postcondicion indica la posicion de num siempre y cuando esa posicion no se encuentre en la diagonal principal
void busca_numero_excepto_diagonal(int A[N][N], int dimension, int num){
    int i,j;
    for(i=0 ; i<dimension ; i++){
        for(j=0 ; j<dimension ; j++){
            if(i != j && (A[i][j] == num) )
                printf("El numero %d esta en la posicion [%d][%d] de la matriz\n", A[i][j], i, j);
        }
    }
}

//cabecera void multiplica_diagonales(int A[N][N], int dimension);
//precondicion A es una matriz cuadrada de enteros inicializada, dimension es un entero inicializado que reprenta la dimension de la matriz cuadrada
//postcondicion realiza todas las combinaciones posibles de producto de dos elementos de la diagonal principal.
//void multiplica_diagonales(int A[N][N], int dimension){
//    int i, j, k, l;
//
//    for(i=0, j=0 ; i<dimension ; i++, j++){
//        for(k=i+1, l=j+1 ; k<dimension ; k++, l++){
//            printf("A[%d][%d] X A[%d][%d] = %d\n", i, j, k, l, (A[i][j] * A[k][l]) );
//        }
//    }
//}
