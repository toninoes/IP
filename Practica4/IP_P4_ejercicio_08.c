/*
 * PRACTICA 4 _ EJERCICIO 8
 * Realiza un programa que calcule la desviación típica de una serie de números reales
 * almacenados en un vector.
 */

#include <stdio.h>
#include <math.h>
#define MAX 6

float promedio(float *vect, int fil);
float desviacion_estandar(float *vect, int fil);
void leer_vector_reales(float* vect, int fil);

//cabecera float desviacion_estandar(float *vect, int fil);
//precondicion vect es un vector de reales inicializado, cuya longitud maxima viene determinada por fil, que es un entero inicializado
//postcondicion devuelve la desviacion estandar de los valores reales del vector
float desviacion_estandar(float *vect, int fil){
    int i = 0;
    float suma = 0;
    float media = promedio(vect, fil);
    printf("El promedio es: %f\n", media);
    for (i=0 ; i<fil ; i++)
        suma = suma + pow((vect[i] - media), 2);

    return sqrt(suma/(fil-1));
}

//cabecera float promedio(float *vect, int fil);
//precondicion vect es un vector de reales inicializado, cuya longitud maxima viene determinada por fil, que es un entero inicializado
//postcondicion devuelve el promedio de los valores reales del vector
float promedio(float *vect, int fil){
    int i;
    float suma = 0;
    for(i=0 ; i<fil ; i++)
        suma = suma + vect[i];

    return suma/fil;
}

//cabecera void leer_vector_reales(float* vect, fil);
//precondicion vect es un vector de reales de, cuya longitud maxima viene determinada por fil, que es un entero inicializado
//postcondicion inicializa todas las posiciones del vector con valores reales
void leer_vector_reales(float* vect, int fil){
    int i;
    for(i=0 ; i<fil ; i++){
        printf("Introduce valor para vect[%i]: ", i);
        scanf("%f", &vect[i]);
    }
}

int main(){
    float v[6];
    leer_vector_reales(v, MAX);
    printf("La desviacion estandar es: %f\n", desviacion_estandar(v, MAX));
    return 0;
}
