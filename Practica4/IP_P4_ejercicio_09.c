/*
 * PRACTICA 4 - EJERCICIO 9
 * Realiza un programa que dada una matriz cuadrada de números reales, obtenga una
 * segunda matriz traspuesta de la primera, escribiendo el resultado por pantalla.
 */

#include <stdio.h>
#define FIL 3
#define COL 3

void transpuesta_matriz_cuadrada_reales(float a[][COL], int lado);
void mostrar_matriz_reales(float m[][COL], int filas, int columnas);
void inicializar_matriz_reales(float m[][COL], int filas, int columnas);

int main(){
    float m[FIL][COL];
    inicializar_matriz_reales(m, FIL, COL);
    printf("La matriz es\n");
    mostrar_matriz_reales(m, FIL, COL);
    printf("La matriz traspuesta es\n");
    transpuesta_matriz_cuadrada_reales(m, COL);
}

//cabecera void transpuesta_matriz_cuadrada_reales(float a[][COL], int lado);
//precondicion a es una matriz cuadrada de reales inicializada, lado es un entero inicializado que representa la dimension de la matriz cuadrada
//postcondicion obtiene una segunda matriz traspuesta de la matriz a, escribiendo el resultado por pantalla.
void transpuesta_matriz_cuadrada_reales(float a[][COL],int lado){
    int i, j;
    float traspuesta[lado][lado];
    for(i=0 ; i<lado ; i++){
        for(j=0 ; j<lado ; j++)
            traspuesta[j][i] = a[i][j];
    }
    mostrar_matriz_reales(traspuesta, lado, lado);
}

//cabecera void mostrar_matriz_reales(float m[][COL], int filas, int columnas);
//precondicion m es una matriz de reales inicializada, filas y columnas son enteros inicializados que reprentan las filas y columnas de la matriz de reales.
//postcondicion muestra por pantalla la matriz m.
void mostrar_matriz_reales(float m[][COL], int filas, int columnas){
    int i, j;
    for(i=0 ; i<columnas ; i++ ){
        for(j=0 ; j<filas ; j++)
            printf("%f\t", m[i][j]);
        printf("\n");
    }
}

//cabecera void inicializar_matriz_reales(float m[][COL], int filas, int columnas);
//precondicion m es una matriz de reales, filas y columnas son enteros inicializados que reprentan las filas y columnas de la matriz de reales.
//postcondicion inicializa la matriz m con los valores que el usuario va introduciendo
void inicializar_matriz_reales(float m[][COL], int filas, int columnas){
    int i, j;
    for(i=0 ; i<columnas ; i++ ){
        for(j=0 ; j<filas ; j++){
            printf("Introducir posicion m[%d][%d]: ", i, j);
            scanf("%f", &m[i][j]);
        }
    }
}
