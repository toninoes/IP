/*
 * PRACTICA 4 - EJERCICIO 30
 * Un instituto desea almacenar los datos de los N alumnos de un curso. De cada alumno
 * se almacenarán nombre, apellidos, dni, edad y las calificaciones que ha obtenido en cada
 * uno de los tres trimestres de cada una de las 7 asignaturas del curso; junto con las
 * calificaciones deberá almacenarse también el nombre de la asignatura. Diseña la estructura
 * necesaria para almacenar dicha información e implementa las siguientes funciones:
 *
 *     void nota_global (alumno * al)
 *        Recibe como parámetro exclusivamente los datos de un alumno y debe escribir por
 *        pantalla la nota global para cada asignatura.
 *     void mayor_nota (char *asig, alumno *clase)
 *        Recibe como parámetro los datos de todos los alumnos y el nombre de una asignatura y
 *        deberá escribir por pantalla el nombre y apellidos del alumno que más nota haya
 *        obtenido en la asignatura especificada por asig durante el primer trimestre.
 */

#include <stdio.h>
#include <string.h>
#define N 2
#define ASIG 3

typedef struct{
    char nomAsig[40];
    int notas[3];
}asignaturas;

typedef struct{
    char nombre[20];
    char apellidos[40];
    char dni[10];
    int edad;
    asignaturas asig[ASIG];
}alumnos;

void introducir_nomAsig(alumnos *clase, char nombre_asig[][40], int dim);
void introducir_alumnos(alumnos *clase, int dim);
void nota_global (alumnos *al);
void mayor_nota (char *nom_as, alumnos *clase, int dim);

int main(){

    char nombre_asig[ASIG][40] = {
        "Introduccion a la Programacion",
        "Calculo",
        "Matematica Discreta"
    };
    char dni[10];
    alumnos clase[N];
    introducir_nomAsig(clase, nombre_asig, N);
    introducir_alumnos(clase, N);
    nota_global(&clase[0]);
    mayor_nota (nombre_asig[0], clase, N);
    return 0;
}

void introducir_nomAsig(alumnos *clase, char nombre_asig[][40], int dim){
    int i, j;
    for(i=0 ; i<dim ; i++){
        for(j=0 ; j<ASIG ; j++)
            strcpy(clase[i].asig[j].nomAsig, nombre_asig[j]);
    }

}

void introducir_alumnos(alumnos *clase, int dim){
    int i, j, k;
    for(i=0 ; i<dim ; i++){
        printf("\nIntroduce los datos del Alumno[%d]", i);
        printf("\n\tNOMBRE: ");
        scanf("%s", clase[i].nombre);
        printf("\tAPELLIDOS: ");
        scanf("%s", clase[i].apellidos);
        printf("\tDNI: ");
        scanf("%s", clase[i].dni);
        printf("\tEDAD: ");
        scanf("%d", &clase[i].edad);
        printf("\tNOTAS de %s %s en:\n", clase[i].nombre, clase[i].apellidos);
        for(j=0 ; j<ASIG ; j++){
            printf("\t\t%s:\n", clase[i].asig[j].nomAsig);
            for(k=0 ; k<3 ; k++){
                printf("\t\t%dº trimestre: ", k+1);
                scanf("%d", &clase[i].asig[j].notas[k]);
            }
        }
    }
}

void nota_global (alumnos *al){
    int i, j;
    printf("Notas de %s %s", al->nombre, al->apellidos);
    for(i=0 ; i<ASIG ; i++){
        printf("\n\t%s", al->asig[i].nomAsig);
        for(j=0 ; j<3 ; j++){
            printf("\n\t\t%dº trimestre: %d", j+1, al->asig[i].notas[j]);
        }
    }

}

//cabecera
//precondicion
//postcondicion deberá escribir por pantalla el nombre y apellidos del alumno que más nota haya
//              obtenido en la asignatura especificada por asig durante el primer trimestre.
void mayor_nota (char *nom_as, alumnos *clase, int dim){
    int i, j;
    int maxima_nota=0;
    int alumno_max_nota;
    for(i=0 ; i<dim ; i++){
        for(j=0 ; j<ASIG ; j++){
            if (!strcmp(nom_as, clase[i].asig[j].nomAsig)){
                if(clase[i].asig[j].notas[0] > maxima_nota)
                    alumno_max_nota = i;
                    maxima_nota = clase[i].asig[j].notas[0];
            }
        }
    }
    printf("\nEl alumno con mayor nota en el primer trimestre de %s es %s %s con una nota de %d", nom_as, clase[alumno_max_nota].nombre, clase[alumno_max_nota].apellidos, maxima_nota);
}

