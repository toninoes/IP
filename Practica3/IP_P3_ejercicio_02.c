/*
 * PRACTICA 3 - EJERCICIO 2
 * Realiza tres funciones que tengan como argumento un valor radio, y calculen el
 * perímetro de la circunferencia, área del círculo y volumen de la esfera. Se debe
 * implementar una función main que haga uso de estas funciones dependiendo de una
 * opción del usuario.
 */

#include <stdio.h>

float perimetro_circulo(float);
float area_circulo(float);
float volumen_circulo(float);

int main(){
    float radio;
    do{
        puts("Introduce valor para el radio");
        scanf("%f", &radio);
        if (radio<0)
            puts("ERROR: Introduce valor positivo");
    }while(radio<0);


    printf("El perimetro circunferencia de radio %f es: %f\n", radio, perimetro_circulo(radio));
    printf("El area circulo de radio %f es: %f\n", radio, area_circulo(radio));
    printf("El volumen esfera de radio %f es: %f\n", radio, volumen_circulo(radio));

    return 0;
}

//cabecera float perimetro_circulo(float);
//precondicion r positivo e inicializado
//postcondicion devuelve el perimetro de un circulo de radio r
float perimetro_circulo(float r){
    const float pi=3.1416;

    return 2*pi*r;
}

//cabecera float area_circulo(float);
//precondicion r y positivoinicializado
//postcondicion devuelve el area de un circulo de radio r
float area_circulo(float r){
    const float pi=3.1416;

    return pi*r*r;
}

//cabecera float volumen_circulo(float);
//precondicion r inicializado
//postcondicion devuelve el volumen de un circulo de radio r
float volumen_circulo(float r){
    const float pi=3.1416;

    return (4*pi*r*r*r)/3;
}
