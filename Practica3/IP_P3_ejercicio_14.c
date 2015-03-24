/*
 * PRACTICA 3 - EJERCICIO 14
 * Realiza un programa utilizando funciones que dado un número entero nos dé su
 * descomposición en factores primos. Todo número entero tiene una única
 * descomposición dada por una multiplicación de potencias de números primos. El
 * programa deberá encontrar estos números primos y además su potencia asociada
 */

void factores_primos(int*);

int main(){
    int n;
    printf("Introduce un numero: ");
    scanf("%d", &n);
    factores_primos(&n);
    return 0;
}

//cabecera void factores_primos(int*);
//precondicion num es un entero a entero inicializado
//postcondicion devuelve la descomposicion en factores primos con sus potencias asociadas
void factores_primos(int *num){
    int i, j;
    printf("%d = ", *num);
    for (i=2 ; i<= *num ; i++){
        j=0;
        if (*num%i == 0){
            printf("%d^", i);
            while(*num%i == 0){
                *num = *num/i;
                j++;
            }
            printf("%d", j);
            if (*num>1)
                printf(" x ");
        }
    }
}
