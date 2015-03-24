/*
 * PRACTICA 4 - EJERCICIO 7
 * Implementa un programa que realice el producto escalar de dos vectores.
 */

#include <stdio.h>

void leer_vector(float* vect);
float producto_escalar(float* vect1, float* vect2);

int main(){
    int i;
    float u[2];
    float v[2];

    for(i=0 ; i<2 ; i++){
        if(i==0){
            printf("Introduce las coordenadas del vector U\n");
            leer_vector(u);
        }
        else{
            printf("Introduce las coordenadas del vector V\n");
            leer_vector(v);
        }
    }

    printf("El producto escalar de U por V es %f", producto_escalar(u, v));

    return 0;
}

//cabecera void leer_vector(float* vect);
//precondicion vect es un vector de reales de 2 posiciones X e Y
//postcondicion inicializa las 2 posiciones X e Y del vector con valores reales
void leer_vector(float* vect){
    int i;
    for(i=0 ; i<2 ; i++){
        if(i==0){
            printf("Introduce la coordenada de X: ");
            scanf("%f", &vect[i]);
        }else{
            printf("Introduce la coordenada de Y: ");
            scanf("%f", &vect[i]);
        }
    }
}

//cabecera float producto_escalar(float* vect1, float* vect2);
//precondicion vect1 y vect2 son dos vectores de reales inicializados la posicion 0 es X y la 1 es Y
//postcondicion devuelve el producto escalar de ambos vectores
float producto_escalar(float* vect1, float* vect2){
    float resultado;
    resultado = (vect1[0]*vect2[0]) + (vect1[1]*vect2[1]);
    return resultado;
}
