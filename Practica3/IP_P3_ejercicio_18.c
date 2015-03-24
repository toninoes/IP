/*
 * PRACTICA 3 - EJERCICIO 18
 * Escribe un programa que lea varios números y que utilice una función que le
 * permita redondear el número al entero más cercano. Para cada número procesado debe
 * mostrar tanto el número original como el número redondeado.
 */


#include <stdio.h>

void redondear(float *, int *);

int main(){
    float real;
    int entero;
    do{
        printf("Mete un numero: ");
        scanf("%f", &real);
        redondear(&real, &entero);
        printf("El numero %f redondeado es %d\n", real, entero);
    }while(real != 0);

    return 0;
}

//cabecera void redondear(float *, int *);
//precondicion numF y numE son punteros a real y entero respectivamente inicializados
//postcondicion modifica el valor del entero al numero entero mas cercano al real
void redondear(float *numF, int *numE){
    if(*numF > 0)
        *numE = (int)(*numF + 0.5);
    else
        *numE = (int)(*numF - 0.5);
}
