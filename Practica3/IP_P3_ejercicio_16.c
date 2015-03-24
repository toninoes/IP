/*
 * PRACTICA 3 - EJERCICIO 16
 * Escribe un programa utilizando funciones que determine si dos números enteros
 * positivos son amigos (Dos números son amigos si la suma de los divisores del primero
 * excepto el mismo es igual al segundo y viceversa). Implementa la función
 * suma_divisores usando la siguiente cabacera
 * void suma_divisores (int numero, int *suma)
 */

//Los pares (220, 284), (1184, 1210), (17.296, 18.416), (9.363.584, 9.437.056) y (6232, 6368) son de números amigos.

void suma_divisores (int, int*);

int main(){
    int a, b, sumaA, sumaB;
    printf("Introduce 2 numeros: ");
    scanf("%d %d", &a, &b);
    suma_divisores(a, &sumaA);
    suma_divisores(b, &sumaB);
    printf("sumaA: %d sumaB: %d\n", sumaA, sumaB);
    if (sumaA == sumaB)
        printf("%d y %d son amigos", a, b);
    else
        printf("%d y %d NO son amigos", a, b);

    return 0;

}

void suma_divisores (int numero, int *suma){
    int i;
    *suma = 0;
    for(i=2 ; i<=numero ; i++){
        if(numero%i == 0)
            *suma = *suma + i;
    }
}
