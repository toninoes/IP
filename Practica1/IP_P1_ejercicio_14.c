/*
 * PRACTICA 1 - EJERCICIO 14
 * Escribe un programa para deducir el salario neto de un trabajador a partir de las horas
 * trabajadas y el precio de la hora, sabiendo que los impuestos aplicados son el 10% del
 * salario bruto
 */

#include <stdio.h>
#define IMP 10

int main(){
    float horas, precio, salario_neto;
    printf("Introduce numero de horas trabajadas: ");
    scanf("%f", &horas);
    printf("Introduce precio/hora: ");
    scanf("%f", &precio);
    salario_neto = (horas * precio) * (100-IMP)/100;
    printf("El salario neto del trabajador es %0.2f euros.", salario_neto);

    return 0;
}
