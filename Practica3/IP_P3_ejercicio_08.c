/*
 * PRACTICA 3 - EJERCICIO 8
 * Realiza un programa que calcule la intensidad que circula por una resistencia dados
 * R y V. I=V/R suponiendo que la función main del programa sea:
 *     main()
 *     {
 *         float res, vol, intensidad;
 *         obtener_valores(&res,&vol);
 *         intensidad= calcular(res, vol);
 *         imprimir_respuesta(intensidad);
 *     }
 */

#include <stdio.h>
void obtener_valores(float*, float*);
float calcular(float, float);
void imprimir_respuesta(float);

int main(){
    float res, vol, intensidad;
    obtener_valores(&res, &vol);
    intensidad = calcular(res, vol);
    imprimir_respuesta(intensidad);
    return 0;
}

//cabecera obtener_valores(float*, float*);
//precondicion r y v  son punteros a reales iniciados
//postcondicion obtiene los valores para r y v
void obtener_valores(float *r, float *v){
    printf("Introduzca valor para resistencia y voltaje: ");
    scanf("%f %f", r, v);
}

//cabecera calcular(float, float);
//precondicion r y v  son los valores reales para resistencia y voltaje iniciados
//postcondicion devuelve un valor real, que corresponde con la intensidad
float calcular(float r, float v){
    return r/v;
}

//cabecera imprimir_respuesta(float);
//precondicion i es un valor real inicializado
//postcondicion escribe i
void imprimir_respuesta(float i){
   printf("La intensidad es: %.2f", i);
}
