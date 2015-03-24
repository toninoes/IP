/*
 * PRACTICA 4 - EJERCICIO 3a
 * Escribe un programa que normalice los 20 números reales que están almacenados en un
 * vector estadisticas. Para llevar a cabo esta normalización, se debe dividir cada número por
 * el máximo valor del vector de forma que los valores resultantes estén comprendidos entre 0
 * y 1. Realiza una versión devolviendo el resultado en el mismo vector y otra que construya
 * un nuevo vector normalizado.
 */

#include <stdio.h>
#include <time.h>
#define MAX 20

void maximo(float *vect, float *m, int fil);
void leer_vector_aleatorio(float *vect, int fil);
//void normalizar_vector(float *vect1, float *vect2, int fil);
float* normalizar_vector(float *vect1, int fil);

int main(){
    float v[MAX];
    //float v_norm[MAX];
    float *v_norm;
    float mayor;
    printf("Cargando vector de reales pseudoaleatorios\n");
    leer_vector_aleatorio(v, MAX);
    printf("##### VECTOR SIN NORMALIZAR #####\n");
    visualizar_vector(v, MAX);
    printf("#####     VALOR MAXIMO      #####\n");
    maximo(v, &mayor, MAX);
    printf("El valor maximo del vector es %f\n", mayor);
    printf("#####   VECTOR NORMALIZADO  #####\n");
    //normalizar_vector(v, v_norm, MAX);
    v_norm = normalizar_vector(v, MAX);
    visualizar_vector(v_norm, MAX);

    return 0;
}

//cabecera void maximo(float *vect, float *m, int fil);
//precondicion vect es un vector de reales, m es un puntero a real, fil es la longitud de vect
//postcondicion almacena en m el valor del maximo elemento del vector.
void maximo(float *vect, float *m, int fil){
    int i;
    //*m = vect[0];
    //CON ARITMETICA DE PUNTEROS
    *m = *(vect+0);
    for(i=1 ; i<fil ; i++){
        //if (vect[i] > *m) *m = vect[i];
        //CON ARITMETICA DE PUNTEROS
        if (*m < *(vect +i))
            *m=*(vect+i);
    }
}

//cabecera void leer_vector_aleatorio(float *vect, int fil);
//precondicion vect es un vector de reales fil es un entero inicializado que indica la longitud maxima del vectos
//postcondicion inicializa el vector automaticamente con reales pseudoaleatorios
void leer_vector_aleatorio(float *vect, int fil){
    int i;
    int a, b;
    srand(time(NULL)); //si usa rand() ,solo va a conseguir que siempre se repitan los mismos numeros aleatorios pero con srand() conseguimos que rand cambie cada vez
    for(i=0 ; i<fil ; i++){
        vect[i] = (float)((rand()%1000)+1) / (float)((rand()%10)+1);
        //CON ARITMETICA DE PUNTEROS. Solo aplicable a vectores.
        //scanf("%d", vect+i);
    }
}

//cabecera void visualizar_vector(float *vect, int fil);
//precondicion vect es un vector de reales y fil es un entero inicializado que indica la longitud de vect
//postcondicion recorre la totalidad del vector para visualizarlo
void visualizar_vector(float *vect, int fil){
    int i;
    for(i=0 ; i<fil ; i++){
        //printf("El contenido de vect[%d] es: ", vect[i]);
        //CON ARITMETICA DE PUNTEROS. Solo aplicable a vectores.
        printf("El contenido de vect[%d] es: %f\n", i, *(vect+i));
    }
}

//cabecera void normalizar_vector(float *vect1, float *vect2, int fil);
//precondicion vect1 es un vector de reales inicializado sin normalizar, vect2 es un vector de reales y fil es un entero inicializado que indica la longitud de vect
//postcondicion normaliza el vect1 almacenandolol en vect2 de forma que los valores resultantes estén comprendidos entre 0 y 1
//void normalizar_vector(float *vect1, float *vect2, int fil){
//    int i;
//    float mayor;
//    maximo(vect1, &mayor, fil);
//    for(i=0 ; i<fil ; i++){
//        //vect2[i] = vect1[i] / mayor;
//        //CON ARITMETICA DE PUNTEROS. Solo aplicable a vectores.
//        *(vect2+i) = *(vect1+i) / mayor;
//    }
//}
float* normalizar_vector(float *vect1, int fil){
    int i;
    float mayor;
    float vect2[fil];
    maximo(vect1, &mayor, fil);
    for(i=0 ; i<fil ; i++){
        //vect2[i] = vect1[i] / mayor;
        //CON ARITMETICA DE PUNTEROS. Solo aplicable a vectores.
        *(vect2+i) = *(vect1+i) / mayor;
    }

    return vect2;
}
