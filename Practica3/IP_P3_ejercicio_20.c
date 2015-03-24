/*
 * PRACTICA 3 - EJERCICIO 20
 * Realiza un programa que reciba dos números, visualice un menú con la operación a
 * realizar y en función de dicha opción del usuario realice la suma, resta, producto o
 * división de dichos números a través de una función opera que recibe los dos enteros y
 * un puntero a función: int (*operación)(int, int)
 */

#include <stdio.h>

int suma_dos_enteros(int, int);
int resta_dos_enteros(int, int);
int producto_dos_enteros(int, int);
int division_entera(int, int);
int operacion(int (*)(int, int), int, int);
int menu();

int main(){
    int op, num1, num2, resultado;
    op = menu();

    while(op != 5 ){

        printf("Introducir dato1 :");
        scanf("%d", &num1);
        printf("Introducir dato2 :");
        scanf("%d", &num2);

        switch(op){
            case 1:
                resultado = operacion(suma_dos_enteros, num1, num2);
                break;
            case 2:
                resultado = operacion(resta_dos_enteros, num1, num2);
                break;
            case 3:
                resultado = operacion(producto_dos_enteros, num1, num2);
                break;
            case 4:
                resultado = operacion(division_entera, num1, num2);
                break;
        }
        printf("Resultado: %d\n\n", resultado);
        op = menu();
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

//cabecera int operacion(int (*)(int, int), int, int);
//precondicion pf es un puntero a funcion que recibe 2 enteros y devuelve un entero, a y b inicializados
//postcondicion devuelve el resultado de aplicar pf con los valores a y b
int operacion(int(*pf)(int, int), int a, int b){
    return (*pf)(a, b);
}
