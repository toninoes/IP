/*
 * PRACTICA 2 - ejercicio 5
 * Realiza un programa que lea dos números por teclado y a continuación un carácter
 * que indique la operación aritmética a realizar con ellos. El programa devuelve, por
 * pantalla, el resultado de dicha operación.
 */

#include <stdio.h>

int main(){
    int a, b;
    char op;
    printf("Introduce 2 numeros: ");
    scanf("%d %d", &a, &b);
    do{
        printf("Introduce que operacion [ + - * / ] a realizar: ");
        op = getchar();
    }while((op != '+') && (op != '-') && (op != '*') && (op != '/') );

    switch(op){
        case '+':
            printf("%d %c %d = %d", a, op, b, a+b);
            break;

        case '-':
            printf("%d %c %d = %d", a, op, b, a-b);
            break;

        case '*':
            printf("%d %c %d = %d", a, op, b, a*b);
            break;

        case '/':
            printf("%d %c %d = %d", a, op, b, a/b);
            break;

    }

    return 0;
}
