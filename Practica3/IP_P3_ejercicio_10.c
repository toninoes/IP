/*
 * PRACTICA 3 - EJERCICIO 10
 * Escribe una función llamada múltiplo que determine para un par de enteros, si el
 * segundo de ellos es múltiplo del primero. La función debe tomar dos argumentos
 * enteros y regresar 1 (verdadero) si el segundo es múltiplo del primero, y 0 (falso) de no
 * ser así. Utilice ésta función en un programa que introduzca una serie de pares enteros.
 */

int multiplos(int, int);

int main(){
    int a, b;
    printf("Introduce 2 numeros: ");
    scanf("%d %d", &a, &b);

    if (multiplos(a,b) == 1)
        printf("%d es multiplo de %d", b, a);
    else
        printf("%d no es multiplo de %d", b, a);

    return 0;

 }

//cabecera int multiplos(int, int);
//precondicion x e y son enteros inicializados
//postcondicion regresar 1 (verdadero) si el segundo es múltiplo del primero, y 0 (falso) de no ser así
int multiplos(int x, int y){
    int resultado=0;
    if (y%x == 0)
        resultado=1;

    return resultado;
 }
