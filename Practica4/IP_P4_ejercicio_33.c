/*
 * PRACTICA 4 - EJERCICIO 33
 * Realiza un programa que permita a través de un menú realizar las siguientes
 * operaciones sobre un fichero de texto: crear un fichero, escribir en el fichero sin eliminar su
 * contenido, leer el contenido y escribirlo en pantalla.
 */

#include <stdio.h>

int main(){
    int num;
    FILE *pf;
    char c;
    char nombre_fichero[20];

    do{
        printf("Indicar operacion:\n\t1: Crear fichero\n\t2: Escribir en el fichero sin eliminar su contenido\n\t3: Leer contenido y mostrar en pantalla.\n");
        printf("Pulsar cualquier otra tecla para finalizar.\n");
        scanf("%d", &num);
        gets(nombre_fichero);//aqui se va ha quedar el '\n' del scanf,...fflush(stdin) no funciona en Linux.
        switch(num){
            case 1:{
                printf("Nombre del fichero que quieres CREAR: ");
                gets(nombre_fichero);
                if( (pf = fopen(nombre_fichero, "wt")) == NULL){
                    printf("No ha podido crearse el fichero.\n");
                    exit(1);
                }else{
                    printf("Fichero creado correctamente.\n");
                    fclose(pf);
                }
                break;
            }

            case 2:{
                printf("Nombre del fichero sobre el que quieres ESCRIBIR: ");
                gets(nombre_fichero);
                if( (pf = fopen(nombre_fichero, "at+")) == NULL){
                    printf("No ha podido abrirse el fichero.\n");
                    exit(1);
                }else{
                    printf("Introducir caracteres en el fichero, * para terminar\n");
                    while( (c=getchar())!= '*'){
                        fputc(c, pf);
                    }
                    fclose(pf);
                }
                break;
            }

            case 3:{
                printf("Nombre del fichero sobre el que quieres LEER: ");
                gets(nombre_fichero);
                if( (pf = fopen(nombre_fichero, "rt")) == NULL ){
                    printf("No ha podido abrirse el fichero.\n");
                    exit(1);
                }else{
                    printf("Contenido del fichero: %s\n", nombre_fichero);
                    printf("-------------------------");
                    while( (c = fgetc(pf)) != EOF ){
                        putc(c, stdout);
                    }
                    fclose(pf);
                }

                break;
            }
        }
    }while(num > 0 && num < 4);

    return 0;
}
