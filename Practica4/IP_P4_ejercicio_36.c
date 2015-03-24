/*
 * PRACTICA 4 - EJERCICIO 36
 * Escribe un programa que dado un vector dinámico desordenado de n enteros, elimine
 * los valores duplicados, desplazando los elementos y obtenga el número de elementos
 * restantes.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 9
//NO TERMINADO


void eliminar_duplicados(int *v, int dim);

int main(){
    int i, *vect;

    if( (vect = (int*)malloc(N*sizeof(int))) != NULL    ){
        printf("Malloc OK!\n");
        for(i=0 ; i<N ; i++){
            printf("Introduce valor en vect[%d]: ", i);
            scanf("%d", &vect[i]);
        }
    }else
        printf("Malloc fallido!");


    printf("ANTES\n");
    for(i=0; i<N ; i++)
        printf("%d ", vect[i]);
    printf("\n");

    eliminar_duplicados(vect, N);

    return 0;
}

void eliminar_duplicados(int *v, int dim){
    int i, j, k;
    for(i=0 ; i<dim ; i++){
        for(j=i+1 ; j<dim ; j++){
            if(v[j] == v[i]){
                dim--;
                for(k=j ; k<dim ; k++){
                   v[k] = v[k+1];
                }
            }
        }
    }

    if( ( v = (int*)realloc(v, (dim)*sizeof(int)) ) != NULL){
        printf("realloc OK\n");
    }else{
        printf("No ha podido hacer realloc\n");
    }

    printf("DESPUES\n");
    for(i=0; i<dim ; i++)
        printf("%d ", v[i]);

}
