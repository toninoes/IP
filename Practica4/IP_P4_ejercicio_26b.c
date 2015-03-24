/*
 * PRACTICA 4 - EJERCICIO 26b
 * Se desea almacenar la información relativa a 4 personas. De cada persona se
 * almacena sus apellidos, dni y edad. Implementa la estructura necesaria para
 * almacenar dicha información y realiza las funciones necesarias para la inicialización de la
 * estructura.
 * El programa deberá además recibir por teclado el dni de una persona e imprimir su edad
 * utilizando una función cuyo prototipo sea: int busca_persona(personas x[], char *dni)
 * No se puede utilizar la funcion <string.h>
 */

#include <stdio.h>
#define DIM 2 //Pongo 3 para hacer pruebas debería poner 20

typedef struct{
    char ape[20];
    char dni[10];
    int edad;
}personas;

int comparar_cadenas(char *cad1, char *cad2);
int mi_compara_cadenas(char cadena1[], char cadena2[]);
void clear_kb(void);
void introducir_valores(personas reg[], int dim);
void escribir(personas reg[], int dim);
int busca_persona(personas reg[], char *dni, int dim);

int main(){
    personas p[DIM];
    char dni[10];
    introducir_valores(p, DIM);
    escribir(p, DIM);
    printf("Introduce el dni de la persona que buscas:\n");
    scanf("%s", dni);

    if(busca_persona(p, dni, DIM))
        printf("La edad de la persona con dni %s es %d\n", dni, busca_persona(p, dni, DIM));
    else
        printf("No se encuentra ningúna persona con ese dni\n");

    return 0;

}

//cabecera introducir_valores(personas reg[], int dim);
//precondicion reg es vector de struct personas, dim es un entero inicializado que representa el tamaño del vector reg
//postcondicion inicializa el vector de struct personas
void introducir_valores(personas reg[], int dim){
    int i;
    for(i=0 ; i<dim ; i++){
        fflush(stdin);

        printf("Introduce APELLIDOS de registro[%d]\n", i);
        gets(reg[i].ape);

        printf("Introduce DNI de registro[%d]\n", i);
        gets(reg[i].dni);

        printf("Introduce EDAD de registro[%d]\n", i);
        scanf("%d", &reg[i].edad);
        clear_kb();
    }
}

//cabecera escribir(personas reg[], int dim);
//precondicion reg es vector de struct personas, dim es un entero inicializado que representa el tamaño del vector reg
//postcondicion muestra por pantalla el contenido del vector de struct personas mostrandolo campo a campo
void escribir(personas reg[], int dim){
    int i;
    for(i=0 ; i<dim ; i++){
        printf("Los APELLIDOS del registro[%d] es: %s\n", i, reg[i].ape);
        printf("La EDAD del registro[%d] es: %d\n", i, reg[i].edad);
        printf("El DNI del registro[%d] es: %s\n\n", i, reg[i].dni);
    }
}

//cabecera int busca_persona(personas reg[], char *dni, int dim)
//precondicion reg es vector de struct personas, dim es un entero inicializado que representa el tamaño del vector reg, dni es una cadena
//postcondicion recibir busca el dni de una persona e imprime su edad si lo encuentra o 0 si no lo encuentra.
int busca_persona(personas reg[], char *dni, int dim){
    int i, edad=0;

    for(i=0 ; i<dim && comparar_cadenas(reg[i].dni, dni) ; i++);

    if(i<dim)
        edad = reg[i].edad;

    return edad;
}

//cabecera mi_compara_cadenas(char cadena1[], char cadena2[]);
//precondicion cadena 1 y cadena2 son cadenas
//postcondicion compara lexicográficamente cadena1 y cadena2, devolviendo
//              0 si son iguales; -1 si cadena1 < cadena2; 1 si cadena1 > cadena2
int mi_compara_cadenas(char cadena1[], char cadena2[]){
    int resp = 0, i=0;
    while(cadena1[i] != '\0'){
        if(cadena2[i] == '\0')
            resp = 1;
        else if(cadena1[i] < cadena2[i])
            resp = -1;
        else if(cadena1[i] > cadena2[i])
            resp = 1;
        i++;

    }
    return resp;

}

//cabecera int comparar_cadenas(char *cad1, char *cad2);
//precondicion cad1 y cad2 son cadena de caracteres
//postcondicion compara lexicograficamente cad1 y cad2, devolviendo 0 si ambas cadenas son iguales, entero positivo si cad1>cad2 y entero negativo si cad1<cad2
int comparar_cadenas(char *cad1, char *cad2){
    int i, j;
    for(i=0, j=0 ; cad1[i] == cad2[j] && cad1[i] != '\0' && cad2[j] != '\0' ; i++, j++);

    return cad1[i] - cad2[j];
}

//int mi_compara_cadenas(const char* cadena1, const char* cadena2){
//
//    while(*cadena1 && (*cadena1==*cadena2))
//        cadena1++,cadena2++;
//    return *(const unsigned char*)cadena1-*(const unsigned char*)cadena2;
//}

/* Limpia a stdin de cualquier carácter que esté en espera. */
void clear_kb(void){

          char junk[80];
          gets(junk);
}
