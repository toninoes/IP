/*
 * PRACTICA 4 - EJERCICIO 11
 * Implementa una función que permita copiar todos los elementos de una matriz
 * cuadrada de enteros en otra matriz.
 */

#include <stdio.h>
#define FIL 3
#define COL 3

void inicializar_matriz_enteros_aleatorios(int m[][COL], int filas, int columnas, int num1, int num2);
void mostrar_matriz_enteros(int m[][COL], int filas, int columnas);
void copiar_matriz_enteros(int m[][COL], int n[][COL], int filas, int columnas);

int main(){
    int a[FIL][COL];
    inicializar_matriz_enteros_aleatorios(a, FIL, COL, 1, 100);
    printf("La matriz A es\n");
    mostrar_matriz_enteros(a, FIL, COL);
    int b[FIL][COL];
    copiar_matriz_enteros(a, b, FIL, COL);
    printf("La matriz B es la copia de A\n");
    mostrar_matriz_enteros(b, FIL, COL);

    return 0;
}

//cabecera void copiar_matriz_enteros(int m[][COL], int n[][COL], int filas, int columnas);
//precondicion m y n son matrices de enteros, m inicializada, filas y columnas son enteros inicializados que reprentan las filas y columnas de la matriz de enteros
//postcondicion copia de la matriz origen (m) a la matriz destino (n)
void copiar_matriz_enteros(int m[][COL], int n[][COL], int filas, int columnas){
    int i, j;
    for(i=0 ; i<filas ; i++){
        for(j=0 ; j<columnas ; j++)
            n[i][j] = m[i][j];
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
