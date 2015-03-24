/*
 * PRACTICA 4 - EJERCICIO 5
 * Dada la siguiente definición:
 *
 *     int vector[4]={1, 7, 3, 4};
 *
 * Indica que valor resulta de la evaluación de las siguientes expresiones:
 *
 *     1.- *vector + (* (vector + 1))
 *     2.- *(vector + 3)
 */

int main(){
    int vector[4]={1, 7, 3, 4};
    printf("%d\n", *vector + (* (vector + 1)));
    printf("%d\n", *(vector + 3));
    return 0;
}
