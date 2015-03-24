/*
 * PRACTICA 4 - EJERCICIO 6
 * Realiza un programa que, dado un vector con 15 números enteros distintos, identifique
 * si los valores que el usuario introduzca a continuación, están o no contenidos en el vector
 * indicando la posición del elemento en caso de existir. El programa finalizará cuando se
 * introduzca un valor 0.
 */

#include <stdio.h>
#define MAX 15

int main(){
    int v[MAX] = {1,2,3,4,5,6,7,8,11,21,22,23,24,31,32};
    int i, num;
    do{
        printf("Introduce un numero entero: ");
        scanf("%d", &num);
        //ARITMETICA PUNTEROS
        for(i=0 ; i<MAX && *(v+i) != num ; i++);
        if (*(v+i) == num)
//        for(i=0 ; i<MAX && v[i] != num ; i++);
//        if (v[i] == num)
            printf("El numero %d esta en el vector en v[%d]\n", num, i);
        else
            printf("El numero %d no esta en el vector\n", num);

    }while(num != 0);
    return 0;
}
