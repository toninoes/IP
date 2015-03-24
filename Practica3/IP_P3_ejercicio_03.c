/*
 * PRACTICA 3 - EJERCICIO 3
 * Realiza un programa que lea dos números enteros y en función de una opción del
 * usuario realice la suma, resta producto o división entera de los mismos, utilizando
 * funciones. El menú también será visualizado por una función sin argumentos, que
 * devolverá como resultado la opción elegida.
 *
 * La ejecución será de la siguiente forma:
 * 1.-Sumar
 * 2.-Restar
 * 3.-Multiplicar
 * 4.-Dividir
 * 5.-Salir
 * Seleccione la operación deseada: 3
 * Introducir dato1 : 2.5
 * Introducir dato2 : 10
 * Resultado 25
 */

#include <stdio.h>

int suma_dos_enteros(int, int);
int resta_dos_enteros(int, int);
int producto_dos_enteros(int, int);
int division_entera(int, int);
int menu();

int main(){
    int operacion, num1, num2, resultado;
    operacion = menu();

    while(operacion != 5 ){

        printf("Introducir dato1 :");
        scanf("%d", &num1);
        printf("Introducir dato2 :");
        scanf("%d", &num2);

        switch(operacion){
            case 1:
                resultado = suma_dos_enteros(num1, num2);
                break;
            case 2:
                resultado = resta_dos_enteros(num1, num2);
                break;
            case 3:
                resultado = producto_dos_enteros(num1, num2);
                break;
            case 4:
                resultado = division_entera(num1, num2);
                break;
        }
        printf("Resultado: %d\n\n", resultado);
        operacion = menu();
    }
}

//cabecera int menu();
//precondicion no se le debe pasar ningun valor
//postcondicion devuelve la opcion elegida
int menu(){
    int opcion;
    printf("1.-Sumar\n");
    printf("2.-Restar\n");
    printf("3.-Multiplicar\n");
    printf("4.-Dividir\n");
    printf("5.-Salir\n");
    do{
        printf("Seleccione la operación deseada: ");
        scanf("%d", &opcion);
            if((opcion<1)||(opcion>5))
                printf("\nERROR: Debes marcar una opcion entre 1 y 5\n");
    }while((opcion<1)||(opcion>5));

    return opcion;

}


//cabecera int suma_dos_enteros(int, int);
//precondicion a y b deben ser enteros inicializados
//postcondicion devuelve la suma de a y de b
int suma_dos_enteros(int a, int b){
    return a+b;
}

//cabecera int resta_dos_enteros(int, int);
//precondicion a y b deben ser enteros inicializados
//postcondicion devuelve a - b
int resta_dos_enteros(int a, int b){
    return a-b;
}

//cabecera int producto_dos_enteros(int, int);
//precondicion a y b deben ser enteros inicializados
//postcondicion devuelve a*b
int producto_dos_enteros(int a, int b){
    return a*b;
}

//cabecera int division_entera(int, int);
//precondicion a y b deben ser enteros inicializados
//postcondicion devuelve a/b
int division_entera(int a, int b){
    return a/b;
}
