/*
 * PRACTICA 4 - EJERCICIO 26
 * Se desea almacenar la información relativa a 20 personas. De cada persona se
 * almacena su nombre, apellidos, dni, edad. Implementa la estructura necesaria para
 * almacenar dicha información y realiza las funciones necesarias para la inicialización de la
 * estructura.
 * El programa deberá además recibir por teclado el dni de una persona e imprimir su edad
 * utilizando una función cuyo prototipo sea: int busca_persona(personas x[], char *dni)
 */

#include <stdio.h>
#include <string.h>
#define DIM 3 //Pongo 3 para hacer pruebas debería poner 20

typedef struct{
    char nom[10];
    char ape[20];
    char dni[10];
    int edad;
}personas;

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

void introducir_valores(personas reg[], int dim){
    int i;
    for(i=0 ; i<dim ; i++){
        fflush(stdin);
        printf("Introduce NOMBRE de registro[%d]\n", i);
        gets(reg[i].nom);

        printf("Introduce APELLIDOS de registro[%d]\n", i);
        gets(reg[i].ape);

        printf("Introduce DNI de registro[%d]\n", i);
        gets(reg[i].dni);

        printf("Introduce EDAD de registro[%d]\n", i);
        scanf("%d", &reg[i].edad);
        clear_kb();
    }
}

void escribir(personas reg[], int dim){
    int i;
    for(i=0 ; i<dim ; i++){
        printf("El NOMBRE del registro[%d] es: %s\n", i, reg[i].nom);
        printf("El APELLIDO del registro[%d] es: %s\n", i, reg[i].ape);
        printf("La EDAD del registro[%d] es: %d\n", i, reg[i].edad);
        printf("El DNI del registro[%d] es: %s\n\n", i, reg[i].dni);
    }
}

int busca_persona(personas reg[], char *dni, int dim){
    int i, edad;

    for(i=0 ; i<dim && strcmp(reg[i].dni, dni) ; i++);

    if(i<dim)
        edad = reg[i].edad;
    else
        edad = 0;

    return edad;
}

/* Limpia a stdin de cualquier carácter que esté en espera. */
void clear_kb(void){

          char junk[80];
          gets(junk);
}
