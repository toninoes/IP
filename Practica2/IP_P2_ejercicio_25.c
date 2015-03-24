/*
 * PRACTICA 2 - EJERCICIO 25
 * Realiza un programa que dado un número entero devuelva su descomposición en
 * factores primos (todo número entero tiene una única descomposición dada por una
 * multiplicación de potencias de números primos). El programa debe calcular, no sólo
 * estos números primos, sino además su potencia asociada.
 */


#include <stdio.h>
#include <math.h>

int main(){
    int num, pot=0, factor=2, cont=2;
    printf("Mete num: ");

    do{
        scanf("%d", &num);
    }while (num<0);

    while (factor <= num){
        while (factor%cont > 0 && cont <= sqrt(factor)){
            cont++;
        }
        if (cont >= sqrt(factor)){
            if (num%factor == 0){
                printf("%d", factor);
                num = num/factor;
                pot++;
                if (num%factor == 0)
                    printf(" x ");
                if (num%factor != 0){
                    printf(" = %d elevado a %d\n", factor, pot);
                    pot=0;
                }
            }else{
                factor++;
            }
        }
    }
    return 0;
}

