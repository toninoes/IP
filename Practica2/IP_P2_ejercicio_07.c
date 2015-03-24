/*
 * PRACTICA 2 - EJERCICIO 7
 * Escribe un programa que dada una fecha, día, mes y año, compruebe si es una fecha
 * válida o no. (Febrero tiene 29 días si el año es divisible por 4 y no por 100, o es
 * divisible por 400).
 */

#include <stdio.h>

int main(){

    int dia, mes, anyo;
    int bis=0;
    printf("Introduce fecha separadas por guion dd-mm-yyyy: ");
    scanf("%d-%d-%d", &dia, &mes, &anyo);

    if ( (anyo%4 == 0 && anyo%100 != 0) || (anyo%400 == 0) )
        bis=1;

    if ( (mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12) ){
        if (dia>0 && dia<32 && anyo>0)
            printf("Fecha válida");
        else
            printf("Fecha NO válida");
    }else{
        if ( (mes == 4) || (mes == 6) || (mes == 9) || (mes == 11) ){
            if (dia>0 && dia<31 && anyo>0)
                printf("Fecha válida");
            else
                printf("Fecha NO válida");
        }else{
            if ( (mes == 2) ){
                if (bis == 1){
                    if (dia>0 && dia<30 && anyo>0)
                        printf("Fecha válida");
                    else
                        printf("Fecha NO válida");
                }else{
                    if (dia>0 && dia<29 && anyo>0)
                        printf("Fecha válida");
                    else
                        printf("Fecha NO válida");
                }
            }else
                printf("Fecha NO válida");
        }
    }

    return 0;
}
