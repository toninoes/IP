/*
 * PRACTICA 4 - EJERCICIO 17
 * Escribe una función void concatena(char *c1,char *c2) que añada la cadena c1 al
 * final de la cadena c2, sin utilizar el fichero de cabecera <string.h>
 */

#include <stdio.h>
#define LON 3

int longitud_cadena(char *);
void concatenar_cadenas(char *c1,char *c2);

int main(){
    char cad1[LON];
    printf("Introducir cadena1 menor de %d caracteres: ", LON);
    gets(cad1);
    fflush(stdin);
    char cad2[LON];
    fflush(stdin);
    printf("Introducir cadena2 menor de %d caracteres: ", LON);
    gets(cad2);
    if(longitud_cadena(cad1) + longitud_cadena(cad2) < LON){
        concatenar_cadenas(cad1, cad2);
    }
    else
        printf("ERROR: Cadena1 + Cadena2 debe ser de longitud menor a %d caracteres.\n", LON);

    printf("cad2= %s", cad2);
    return 0;
}

//cabecera void concatenar_cadenas(char *c1,char *c2);
//precondicion c1 y c2 son cadena de caracteres
//postcondicion añade la cadena c1 al final de la cadena c2, sin utilizar el fichero de cabecera <string.h>
void concatenar_cadenas(char *c1,char *c2){
    int i, j, k;

    //Sin usar funcion longitud_cadena
    for(i=0 ; c2[i]!='\0' ; i++);
    for(j=0 ; c1[j]!='\0' ; j++);
    for(k=0, i ; k<j+1 ; k++, i++)
        c2[i] = c1[k];

    //Usando funcion longitud_cadena
    //i=longitud_cadena(c2);
    //for(j=0, i ; j<longitud_cadena(c1)+1 ; j++, i++)
    //  c2[i] = c1[j];

}

//cabecera int longitud_cadena(char *);
//precondicion c inicializado
//postcondicion devuelve el nº de caracteres de la cadena
int longitud_cadena(char *c){
    int i;
    for(i=0;c[i]!='\0';i++);
    return i;
}
