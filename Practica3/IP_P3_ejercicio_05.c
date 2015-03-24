/*
 * PRACTICA 3 - EJERCICIO 5
 * Realiza un programa que lea dos números 10 veces y realice en la primera lectura el
 * producto de los números sin utilizar el operador * y en la segunda lectura la división sin
 * usar el operador / y así sucesivamente. Finalmente debe imprimir los resultados.
 * Implementarlo utilizando funciones (Producto_sumas, división_restas).
 * (Realiza la comprobación de si el número es par o impar a través de un macro).
 */

#include <stdio.h>

int division_restas(int, int);
int producto_sumas(int, int);

int main(){
    int a, b, cont=1;
    while (cont<=10){
        printf("%d.- Introduce 2 numeros: ", cont);
        scanf("%d %d", &a, &b);
        if (cont%2 > 0)
            printf("%d x %d es: %d\n", a, b, producto_sumas(a, b));
        else
            printf("%d entre %d es: %d\n", a, b, division_restas(a, b));
        cont++;
    }
    return 0;
}

//cabecera int producto_sumas(int, int);
//precondicion multiplicando y multiplicador inicializados
//postcondicion devuelve la multiplicacion
int producto_sumas(int multiplicando, int multiplicador){
    int multiplicacion=0, cont=0;
    while(cont<abs(multiplicador)){
        multiplicacion += abs(multiplicando);
        cont++;
    }
    if (multiplicando<0 && multiplicador<0)
        multiplicacion = abs(multiplicacion);
    else{
        if (multiplicando<0 || multiplicador<0)
            multiplicacion *= -1;
    }
    return multiplicacion;
}

//cabecera int division_restas(int, int);
//precondicion divisor y dividendo inicializados
//postcondicion devuelve el cociente
int division_restas(int divisor, int dividendo){
    int cociente=0;

    if ( (divisor>=0 && dividendo>=0) || (divisor<0 && dividendo<0)){
        while(abs(divisor)-abs(dividendo) >= 0){
            divisor=abs(divisor)-abs(dividendo);
            cociente++;
        }
    }else{
        while(abs(divisor)-abs(dividendo) >= 0){
            divisor+=dividendo;
            cociente--;
        }
    }
    return cociente;
}
