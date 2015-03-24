/*
 * PRACTICA 2 - EJERCICIO 6
 * Realiza un programa en C que lea un número entre 1 y 7 y devuelva el día de la
 * semana correspondiente.
 *     Dia 1 ...... Lunes
 *     Día 2 ...... Martes
 *     Dia 3 ...... Miércoles
 *     Dia 4 ...... Jueves
 *     Dia 5 ...... Viernes
 *     Dia 6 ...... Sábado
 *     Dia 7 ...... Domingo
 */

#include <stdio.h>

int main(){
    int a;

    do{
        printf("Introduce 1 numero entre 1 y 7: ");
        scanf("%d", &a);
    }while( (a > 7) || (a < 1) );

    switch(a){
        case 1:
            printf("Dia 1 ...... Lunes");
            break;

        case 2:
            printf("Día 2 ...... Martes");
            break;

        case 3:
            printf("Dia 3 ...... Miércoles");
            break;

        case 4:
            printf("Dia 4 ...... Jueves");
            break;

        case 5:
            printf("Dia 5 ...... Viernes");
            break;

        case 6:
            printf("Dia 6 ...... Sábado");
            break;

        case 7:
            printf("Dia 7 ...... Domingo");
            break;

    }

    return 0;
}
