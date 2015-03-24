/*
 * PRACTICA 2 - EJERCICIO 8
 * Escribe un programa que acepte tres números, horas, minutos y segundos y devuelva
 * la hora que será dentro de un segundo, controlando que sea una hora correcta.
 */

#include <stdio.h>

int main(){
    int h, m, s;
    printf("Escribir la hora h:m:s\n");
    scanf("%d:%d:%d", &h, &m, &s);
    if (h>23 || h<0 || m>59 || m<0 || s>59 || s<0)
        printf("Hora no valida");
    else{
        s++;
        if (s==60){
            s = 0;
            m++;
            if (m==60){
                m = 0;
                h++;
                if (h==24)
                    h = 0;
            }
        }
    }
    printf("La hora un segundo despues es: %d:%d:%d", h, m, s);

    return 0;
}
