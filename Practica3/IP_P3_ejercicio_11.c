/*
 * PRACTICA 3 - EJERCICIO 11
 * Escriba un programa que contenga una función que nos permita calcular el valor
 * más pequeño de tres números reales
 */

void elmenor(float, float, float);

int main(){
    float x, y, z;
    printf("Introduce 3 numeros reales: ");
    scanf("%f %f %f", &x, &y, &z);

    elmenor(x, y, z);

    return 0;
}

void elmenor(float a, float b, float c){
    float menor=a;

    if (b<menor)
        menor=b;
    if (c<menor)
        menor=c;

    printf("El menor es: %f", menor);

}
