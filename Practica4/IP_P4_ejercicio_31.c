/*
 * PRACTICA 4 - EJERCICIO 31
 * Una empresa desea realizar un programa para controlar la permanencia de sus
 * trabajadores en el lugar de trabajo. Para ello debe almacenar la hora de llegada y salida de
 * cada trabajador en horas, minutos y segundos de cada uno de los cinco días laborables de la
 * semana. Además se desea almacenar nombre, apellidos, dni, y salario por hora de cada
 * trabajador. Elige la estructura adecuada para almacenar esta información y realiza las
 * funciones básicas de inicialización e inserción de información.
 * Suponiendo que cada trabajador debe contar con una permanencia de 35 horas semanales,
 * se considerarán el resto como horas extra. El programa debe obtener el nombre, apellidos y
 * el salario total de cada uno de los trabajadores considerando un incremento de un 10% del
 * salario por hora para las horas extra. Así como, los nombres y apellidos de todos aquellos
 * trabajadores que contabilicen una permanencia semanal menor a la exigida por la empresa.
 */

#include <stdio.h>
#define N 2

typedef struct{
    int h_llegada[3];
    int h_salida[3];
    int total_dia[3];
}perm_dia;

typedef struct{
    char nombre[20];
    char apellidos[40];
    char dni[10];
    float sal_hora;
    perm_dia horas_semana[5];
}trabajador;

char dias[5][20] = {"lunes", "martes", "miercoles", "jueves", "viernes"};

void introducir_hora(int v_hora[]);
void restar_hora(int v_hora1[], int v_hora2[], int diff_hora[]);
void insertar_trabajadores(trabajador T[], int dim);
void salario_trabajadores(trabajador T[], int dim);


int main(){

    trabajador trabajadores[N];
    insertar_trabajadores(trabajadores, N);
    salario_trabajadores(trabajadores, N);

    return 0;
}

//cabecera void introducir_hora(int v_hora[]);
//precondicion
//postcondicion
void introducir_hora(int v_hora[]){
    int h, m, s;
    do{
        printf("Introducir hora (h m sg): ");
        scanf("%d %d %d", &h, &m, &s);
        fflush(stdin);
        if(h>23 || h<0 || m>59 || m<0 || s>59 || s<0)
            printf("ERROR: Formato de hora no valido\n");
    }while(h>23 || h<0 || m>59 || m<0 || s>59 || s<0);
    v_hora[0] = h;
    v_hora[1] = m;
    v_hora[2] = s;
}

//cabecera void restar_hora(int v_hora1[], int v_hora2[], int diff_hora[]);
//precondicion
//postcondicion
void restar_hora(int v_hora1[], int v_hora2[], int diff_hora[]){
    if(v_hora2[2] < v_hora1[2]){
        v_hora2[1] = v_hora2[1] -1;
        v_hora2[2] = v_hora2[2] + 60;
    }
    diff_hora[2] = v_hora2[2] - v_hora1[2];

    if(v_hora2[1] < v_hora1[1]){
        v_hora2[0] = v_hora2[0] -1;
        v_hora2[1] = v_hora2[1] + 60;
    }
    diff_hora[1] = v_hora2[1] - v_hora1[1];

    if(v_hora2[0] < v_hora1[0]){
        v_hora2[0] = v_hora2[0] + 24;
    }
    diff_hora[0] = v_hora2[0] - v_hora1[0];
}

//cabecera void insertar_trabajadores(trabajador T[], int dim);
//precondicion
//postcondicion
void insertar_trabajadores(trabajador T[], int dim){
    int i, j;
    for(i=0 ; i<dim ; i++){
        printf("Nombre: ");
        gets((T[i].nombre));
        printf("Apellidos: ");
        gets(T[i].apellidos);
        printf("DNI: ");
        gets(T[i].dni);
        printf("Salario/hora: ");
        scanf("%f", &T[i].sal_hora);
        fflush(stdin);
        for(j=0 ; j<5 ; j++){
            printf("Hora de ENTRADA del %s\n", dias[j]);
            introducir_hora(T[i].horas_semana[j].h_llegada);
            printf("Hora de SALIDA del %s\n", dias[j]);
            introducir_hora(T[i].horas_semana[j].h_salida);
            restar_hora(T[i].horas_semana[j].h_llegada, T[i].horas_semana[j].h_salida, T[i].horas_semana[j].total_dia);
        }
    }
}

//cabecera void salario_trabajadores(trabajador T[], int dim);
//precondicion
//postcondicion
void salario_trabajadores(trabajador T[], int dim){
    int i, j;
    int horas_sem[3];
    for(i=0 ; i<dim ; i++){
        printf("Horas semanales del trabajador %s: ", T[i].apellidos);
        horas_sem[0]=0;
        horas_sem[1]=0;
        horas_sem[2]=0;
        for(j=0 ; j<5 ;j++){
            horas_sem[0] = horas_sem[0] + T[i].horas_semana[j].total_dia[0];
            horas_sem[1] = horas_sem[1] + T[i].horas_semana[j].total_dia[1];
            horas_sem[2] = horas_sem[2] + T[i].horas_semana[j].total_dia[2];
        }
        horas_sem[1] = horas_sem[1] + horas_sem[2]/60;
        horas_sem[2] = horas_sem[2]%60;

        horas_sem[0] = horas_sem[0] + horas_sem[1]/60;
        horas_sem[1] = horas_sem[1]%60;
        printf("%d horas\n", horas_sem[0]);
        if(horas_sem[0] >= 35){
            printf("\tSu salario es: %.2f euros.\n", 35*T[i].sal_hora + (horas_sem[0]-35)*(T[i].sal_hora*1.10));
        }else{
            printf("\tSu salario es: %.2f euros.\n", horas_sem[0]*T[i].sal_hora);
            printf("\tEl trabajador no ha cumplido con su jornada minima de 35 horas semana.\n");
        }
    }
}
