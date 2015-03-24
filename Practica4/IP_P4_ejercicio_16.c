/*
 * PRACTICA 4 - EJERCICIO 16
 * Realiza una función longitud que devuelva la longitud de una cadena de caracteres sin
 * utilizar el fichero de cabecera <string.h>
 */

#include <stdio.h>

int longitud (char *);

int main(){
    char nombre[15];
    puts("Introducir nombre menor de 15 caracteres: ");
    gets(nombre);
    printf("El numero caract es: %d", longitud(nombre));
    return 0;
}

//cabecera int longitud (char *);
//precondicion c inicializado
//postcondicion devuelve el nº de caracteres de la cadena
int longitud (char *c){
    int i;
    for(i=0;c[i]!='\0';i++);
    return i;
}
