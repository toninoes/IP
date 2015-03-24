/*
 * PRACTICA 4 - EJERCICIO 27
 * Se dispone de la información relativa a 100 estaciones meteorológicas diferentes
 * repartidas por una determinada área geográfica. Conocemos el nombre de las estaciones y
 * la cantidad de lluvia en litros/m2 que recogieron durante el año pasado en cada uno de los
 * 12 meses. Implementa la estructura adecuada para almacenar dicha información. Realiza
 * las funciones necesarias para determinar en qué punto llovió más y en cual menos y la
 * cantidad media de agua recogida en las estaciones meteorológicas durante cada mes.
 */

#include <stdio.h>
#include <string.h>
#define DIM 3 //Pongo 3 para hacer pruebas, debería poner 100
#define MESES 3 //Pongo 3 para hacer pruebas, pero debería poner 12, los meses del año

typedef struct{
    char nomEst[10];
    int lluvia[MESES];
}estaciones;

void estacion_mas_menos_lluviosa(estaciones e[], int dim);



int main(){
    estaciones e[DIM];
    strcpy(e[0].nomEst, "Estacion0");
    strcpy(e[1].nomEst, "Estacion1");
    strcpy(e[2].nomEst, "Estacion2");
    e[0].lluvia[0] = 1;
    e[0].lluvia[1] = 2;
    e[0].lluvia[2] = 2;

    e[1].lluvia[0] = 10;
    e[1].lluvia[1] = 6;
    e[1].lluvia[2] = 1;

    e[2].lluvia[0] = 1;
    e[2].lluvia[1] = 920;
    e[2].lluvia[2] = 19;

    estacion_mas_menos_lluviosa(e, DIM);
    media_lluvia_mes(e, DIM);

    return 0;
}

int total_litros(int v[], int dim){
    int i, suma=0;
    for(i=0 ; i<dim ; i++)
        suma += v[i];

    return suma;
}

void estacion_mas_menos_lluviosa(estaciones e[], int dim){
    int i, j, sumlitros, maxlitros, minlitros, maxlluvia=0, minlluvia=0;
    maxlitros = total_litros(e[0].lluvia, MESES);
    minlitros = total_litros(e[0].lluvia, MESES);

    for(i=1 ; i<dim ; i++){
        sumlitros = total_litros(e[i].lluvia, MESES);
        if (sumlitros > maxlitros){
            maxlitros = sumlitros;
            maxlluvia = i;
        }
        if (sumlitros < minlitros){
            minlitros = sumlitros;
            minlluvia = i;
        }
    }
    printf("La estacion mas lluviosa ha sido %s con un total de %d litros.\n", e[maxlluvia].nomEst, maxlitros);
    printf("La estacion menos lluviosa ha sido %s con un total de %d litros.\n\n", e[minlluvia].nomEst, minlitros);
}

void media_lluvia_mes(estaciones e[], int dim){
    int i, j;
    float sumlitros;
    for(j=0 ; j<MESES ; j++ ){
        sumlitros=0;
        for(i=0 ; i<dim ; i++){
            sumlitros += e[i].lluvia[j];
        }
        printf("La media de lluvias en el mes %d ha sido de %.2f litros\n", j+1, sumlitros/dim);
    }
}
