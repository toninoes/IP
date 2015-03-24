/*
 * PRACTICA 2 - EJERCICIO 21
 * Escribe un programa que copie de la entrada estándar a la salida estándar.
 */

#include <stdio.h>

int main(){

    char c;

    c=getchar();
    while(c != EOF){
        putchar('\n');
        putchar(c);
        c=getchar();
    }

/*     ASI SUELE APARECER EN LOS LIBROS
 *     while ((c=getchar())!=EOF)
 *         putchar(c);
 */

    return 0;
}
