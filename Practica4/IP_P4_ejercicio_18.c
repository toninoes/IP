 /*
 * PRACTICA 4 - EJERCICIO 18
 * Implementa un programa que dadas dos cadenas de caracteres, a través de un menú de
 * opciones, realice las siguientes operaciones:
 *
 *     1.- Comparación cadenas.
 *     2.- Copia de la primera sobre la segunda
 *     3.- Concatenación de ambas cadenas
 *     4.- Cálculo de la longitud de las cadenas
 */

#include <stdio.h>
#define LON 3

int comparar_cadenas(char *cad1, char *cad2);
void concatenar_cadenas(char *c1, char *c2);
int longitud_cadena(char *c);
void copiar_cadenas(char *origen,char *destino);
void copiar_cadenas_seguro(char *origen,char *destino, int tam_destino);

int main(){
    char cad1[LON];
    printf("Introducir cadena1 menor de %d caracteres: ", LON-1);
    gets(cad1);
    fflush(stdin);

    char cad2[LON];
    printf("Introducir cadena2 menor de %d caracteres: ", LON-1);
    gets(cad2);
    fflush(stdin);
    printf("ORIGEN: %s\n", cad1);
    printf("DESTINO: %s\n", cad2);
    copiar_cadenas_seguro(cad1, cad2, LON);

    printf("%s", cad1);

}

//cabecera int comparar_cadenas(char *cad1, char *cad2);
//precondicion cad1 y cad2 son cadena de caracteres
//postcondicion compara lexicograficamente cad1 y cad2, devolviendo 0 si ambas cadenas son iguales, entero positivo si cad1>cad2 y entero negativo si cad1<cad2
int comparar_cadenas(char *cad1, char *cad2){
    int i, j;
    for(i=0, j=0 ; cad1[i] == cad2[j] && cad1[i] != '\0' && cad2[j] != '\0' ; i++, j++);

    return cad1[i] - cad2[j];
}

//cabecera void concatenar_cadenas(char *c2,char *c1);
//precondicion c1 y c2 son cadena de caracteres
//postcondicion añade la cadena c1 al final de la cadena c2, sin utilizar el fichero de cabecera <string.h>
void concatenar_cadenas(char *c2,char *c1){
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

//cabecera void copiar_cadenas(char *destino, char *origen);
//precondicion origen y destino son cadenas de caracteres
//postcondicion copia el contenido de origen en destino
void copiar_cadenas(char *destino, char *origen){
    int i;
    for (i = 0; origen[i] != '\0'; i++)
        destino[i] = origen[i];

    destino[i] = '\0';
}

//cabecera void copiar_cadenas_seguro(char *origen,char *destino, int tam_destino);
//precondicion origen y destino son cadenas de caracteres, tam_destino es un entero inicializado que indica el tamaño disponible en destino
//postcondicion copia el contenido de origen en destino, cortando la longitud de origen para que quepa en destino.
void copiar_cadenas_seguro(char *destino, char *origen, int tam_destino){
    int i;
    for (i = 0; i < tam_destino && origen[i] != '\0'; i++)
        destino[i] = origen[i];

    destino[i] = '\0';
}
