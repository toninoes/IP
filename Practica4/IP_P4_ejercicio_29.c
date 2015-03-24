/*
 * PRACTICA 4 - EJERCICIO 29
 * Se desea realizar un programa en C que implemente un diccionario Inglés/Español. El
 * programa debe leer palabras en Inglés y traducirlas a Español hasta que el usuario
 * introduzca la palabra “Fin”. Diseña la estructura de datos adecuada para almacenar las
 * parejas de palabras Inglés-Español introducidas por el usuario. Inicializa dicha estructura y
 * realiza el proceso de traducción descrito. El número de parejas de palabras es variable, pero
 * limitado a un máximo de 100, siendo la longitud de cada palabra de un máximo de 40
 * caracteres.
 *     Ejemplo: Si se introducen las siguientes parejas de palabras:
 *         book     libro
 *         green    verde
 *         mouse    ratón
 *         door     puerta
 *     Cuando el usuario introduzca la palabra green la respuesta será verde.
 */

#include <stdio.h>
#include <string.h>
#define MAX 2 //Pongo 3 para hacer pruebas, debería poner 100 parejas de palabras

typedef struct{
    char ing[40];
    char esp[40];
}diccionario;

void introducir_palabras(diccionario reg[], int dim);
void escribir_diccionario(diccionario reg[], int dim);
int traducir(diccionario reg[], int dim, char *p1, char *p2);

int main(){
    char ing[40];
    char esp[40];
    diccionario d[MAX];
    introducir_palabras(d, MAX);
    escribir_diccionario(d, MAX);
    do{
        printf("Introduce palabra buscada ingles: ");
        gets(ing);
        if (!traducir(d, MAX, ing, esp))
            printf("\tEn español es: %s\n", esp);
        else
            printf("\tERROR: No se encuentra esa palabra\n");
    }while(strcmp(ing, "fin"));
}

void introducir_palabras(diccionario reg[], int dim){
    int i, j, continuar=1;
    for(i=0 ; i<dim && continuar ; i++){
        fflush(stdin);
        printf("[%d].Introduce palabra en INGLES: ", i);
        gets(reg[i].ing);
        if (!strcmp(reg[i].ing, ""))
            continuar = 0;

        printf("[%d].Introduce palabra en ESPAÑOL: ", i);
        gets(reg[i].esp);
        printf("\n");
    }
}

void escribir_diccionario(diccionario reg[], int dim){
    int i;
    printf("INGLES\t\tESPAÑOL\n");
    for(i=0 ; i<dim ; i++){
        printf("%s\t\t%s\n", reg[i].ing, reg[i].esp);
    }
}

int traducir(diccionario reg[], int dim, char *p1, char *p2){
    int i, resp=1;
    for(i=0 ; i<dim ; i++){
        if(!strcmp(p1, reg[i].ing)){
            resp = 0;
            strcpy(p2, reg[i].esp);
        }
    }
    return resp;
}


