/*
 * PRACTICA 2 - EJERCICIO 22
 * Realiza una modificación al ejercicio anterior, reemplazando cada cadena de uno o
 * más espacios, por un solo espacio y que cuente además el número de caracteres que se
 * introducen.
 */

#include <stdio.h>

int main(){
    char c;
    int esp=0;

    c=getchar();
    while(c != EOF){
        if (c == ' '){
            if (esp=0){
                putchar(c);
                esp=1;
            }else
                putchar(c);
        }

        c=getchar();
    }
    return 0;
}
