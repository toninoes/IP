/*
 * PRACTICA 1 - EJERCICIO 5
 * Realiza un programa que imprima el tamaño en bytes de los tipos básicos.
 */

 #include <stdio.h>

 int main(){

     printf("TIPO\t     (Bytes)\n");
     printf("--------------------\n");
     printf("char\t\t%d\n", sizeof(char));
     printf("int\t\t%d\n", sizeof(int));
     printf("short\t\t%d\n", sizeof(short));
     printf("long\t\t%d\n", sizeof(long));
     printf("unsigned char\t%d\n", sizeof(unsigned char));
     printf("unsigned int\t%d\n", sizeof(unsigned int));
     printf("unsigned short\t%d\n", sizeof(unsigned short));
     printf("unsigned long\t%d\n", sizeof(unsigned long));
     printf("float\t\t%d\n", sizeof(float));
     printf("double\t\t%d\n", sizeof(double));
     printf("long double\t%d\n", sizeof(long double));
     printf("--------------------\n");

     return 0;
 }
