/*
 * PRACTICA 4 - EJERCICIO 10
 * Realiza un programa que dadas dos matrices cuadradas de enteros, obtenga una matriz
 * producto de las anteriores e imprima ese resultado por pantalla.
 */

#include <stdio.h>
#define FIL 3
#define COL 3


void multiplica_dos_matrices_enteros(int a[][COL], int b[][COL], int filas, int columnas);
void mostrar_matriz_enteros(int m[][COL], int filas, int columnas);
void inicializar_matriz_enteros_aleatorios(int m[][COL], int filas, int columnas, int num1, int num2);

int main(){
    int m1[FIL][COL];
    inicializar_matriz_enteros_aleatorios(m1, FIL, COL, 1, 9);
    printf("Matriz 1\n");
    mostrar_matriz_enteros(m1, FIL, COL);
    int m2[FIL][COL];
    inicializar_matriz_enteros_aleatorios(m2, FIL, COL, 1, 9);
    printf("Matriz 2\n");
    mostrar_matriz_enteros(m2, FIL, COL);
    printf("Matriz 1 x Matriz 2\n");
    multiplica_dos_matrices_enteros(m1, m2, FIL, COL);
    return 0;
}

//cabecera void multiplica_dos_matrices_enteros(int a[][COL], int b[][COL], int filas, int columnas);
//precondicion a y b son matrices de enteros de igual dimension e inicializados, filas y columnas son enteros inicializados que reprentan las filas y columnas de las matrices de enteros.
//postcondicion obtiene una matriz producto de las anteriores e imprime ese resultado por pantalla
void multiplica_dos_matrices_enteros(int a[][COL], int b[][COL], int filas, int columnas){
    int res[filas][columnas];
    int i,j, k;
    //inicializao la matriz res a 0 en todas las celdas.
    for(i=0; i<filas; i++){
        for(j=0 ; j<columnas ; j++)
            res[i][j] = 0;
    }

    for(i=0 ; i<filas ; i++){
        for(j=0 ; j<columnas ; j++){
            for(k=0; k<filas; k++)
                res[i][j] = res[i][j] + a[i][k] * b[k][j];
        }
    }
    mostrar_matriz_enteros(res, filas, columnas);
}

//cabecera mostrar_matriz_enteros(int m[][COL], int filas, int columnas);
//precondicion m es una matriz de enteros inicializada, filas y columnas son enteros inicializados que reprentan las filas y columnas de la matriz de enteros.
//postcondicion muestra por pantalla la matriz m.
void mostrar_matriz_enteros(int m[][COL], int filas, int columnas){
    int i, j;
    for(i=0 ; i<columnas ; i++ ){
        for(j=0 ; j<filas ; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

//cabecera void inicializar_matriz_enteros_aleatorios(int m[][COL], int filas, int columnas);
//precondicion m es una matriz de enteros, filas y columnas son enteros inicializados que reprentan las filas y columnas de la matriz de enteros, num1 y num2 son enteros inicializados que representan los enteros entre los que se obtendra el entero aleatorio.
//postcondicion inicializa la matriz automaticamente con enteros pseudoaleatorios comprendidos entre num1 y num2
void inicializar_matriz_enteros_aleatorios(int m[][COL], int filas, int columnas, int num1, int num2){
    int i, j;
    srand(time(NULL)); //si usa rand() ,solo va a conseguir que siempre se repitan los mismos numeros aleatorios pero con srand() conseguimos que rand cambie cada vez
    for(i=0 ; i<filas ; i++){
        for(j=0 ; j<columnas ; j++)
            m[i][j] = num1+(rand()%(num2 - num1 +1));
    }
}
