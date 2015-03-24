/*
 * PRACTICA 4 - EJERCICIO 28
 * Se desea almacenar la información relativa a las ventas semanales de los 25
 * vendedores de una compañía. De cada vendedor se almacena su nombre, apellidos y dni.
 * Realiza un programa que inicialice la estructura y calcule las ventas totales de cada
 * vendedor, las ventas totales de la compañía, y el nombre (e importe) de los dos vendedores
 * que más han facturado.
 */


#include <stdio.h>
#include <string.h>
#define DIM 3 //Pongo 3 para hacer pruebas, debería poner 25
#define SEM 2 //Pongo 3 para hacer pruebas, debería poner 53 semanas

typedef struct{
    char nombre[20];
    char apellidos[40];
    char dni[10];
    int ventas[SEM];
}vendedores;

void introducir_valores(vendedores reg[], int dim);
void escribir(vendedores reg[], int dim);
void informe_ventas(vendedores reg[], int dim);

int main(){
    vendedores v[DIM];
    introducir_valores(v, DIM);
    escribir(v, DIM);
    informe_ventas(v, DIM);

    return 0;
}

void introducir_valores(vendedores reg[], int dim){
    int i, j;
    for(i=0 ; i<dim ; i++){
        fflush(stdin);
        printf("Introduce NOMBRE de vendedor[%d]\n", i);
        //gets(reg[i].nombre);
        scanf("%s", reg[i].nombre);
        printf("Introduce APELLIDOS de vendedor[%d]\n", i);
        //gets(reg[i].apellidos);
        scanf("%s", reg[i].apellidos);
        printf("Introduce DNI de vendedor[%d]\n", i);
        //gets(reg[i].dni);
        scanf("%s", reg[i].dni);
        for(j=0 ; j<SEM ; j++){
            printf("Introduce las ventas de la SEMANA[%d] del vendedor[%d]\n", j, i);
            scanf("%d", &reg[i].ventas[j]);
        }
    }
}

void escribir(vendedores reg[], int dim){
    int i, j;
    for(i=0 ; i<dim ; i++){
        printf("DATOS de VENDEDOR[%d]\n", i);
        printf("\tNOMBRE: %s\n", reg[i].nombre);
        printf("\tAPELLIDOS: %s\n", reg[i].apellidos);
        printf("\tDNI: %s\n", reg[i].dni);
        printf("\tVentas semanales:\n");
        for(j=0 ; j<SEM ; j++){
            printf("\t\tSemana %d: %d\n", j, reg[i].ventas[j]);
        }
        printf("\n");
    }
}

int total_ventas(int v[], int dim){
    int i, suma=0;
    for(i=0 ; i<dim ; i++)
        suma += v[i];

    return suma;
}


void informe_ventas(vendedores reg[], int dim){
    int i, j, ventasV, ventasC=0, ventasOro, oro, ventasPlata, plata;
    ventasOro = total_ventas(reg[0].ventas, SEM);
    ventasPlata = total_ventas(reg[0].ventas, SEM);
    oro = 0;
    plata = 0;
    for(i=0 ; i<dim ; i++){
        ventasV = total_ventas(reg[i].ventas, SEM);
        if (ventasV > ventasOro){
            ventasPlata = ventasOro;
            plata = oro;
            ventasOro = ventasV;
            oro = i;
        }else{
            if(ventasV > ventasPlata){
                ventasPlata = ventasV;
                plata = i;
            }
        }

        printf("Las ventas totales del vendedor[%d] son: %d\n", i, ventasV);
        ventasC += ventasV;
    }
    printf("Las ventas totales de la compañia son: %d\n", ventasC);
    printf("Los 2 mejores vendedores son: %s y %s, que han vendido %d y %d respectivamente\n", reg[oro].nombre, reg[plata].nombre, ventasOro, ventasPlata);
}
