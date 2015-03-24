/*
 * PRACTICA 1 - EJERCICIO 16
 * Escribe un programa que pida el total de kilómetros recorridos, el precio de la gasolina
 * (por litro), el dinero de gasolina gastado en el viaje y el tiempo que se ha tardado (en horas
 * y minutos) y que calcule:
 *     -Consumo de gasolina (en litros y céntimos de euro) por cada cien kilómetros.
 *     -Consumo de gasolina (en litros y céntimos de euros) por cada kilómetro.
 *     -Velocidad media (en Km/h y m/s)
 */

#include <stdio.h>

int main(){

    float km, precio, dinero, tiempo;
    float velocidad, consumo_l, consumo_e, litros;
    printf("Introduce Km recorridos: ");
    scanf("%f", &km);
    printf("Precio/litro de la gasolina: ");
    scanf("%f", &precio);
    printf("Dinero gastado en gasolina: ");
    scanf("%f", &dinero);
    printf("Tiempo nvertido en el viaje: ");
    scanf("%f", &tiempo);

    litros = dinero/precio;
    consumo_l = (100 * litros)/km;
    consumo_e = (100 * dinero)/km;
    printf("Consumo gasolina por cada 100 Km: %0.2f l, %0.2f euros\n", consumo_l, consumo_e);
    printf("Consumo gasolina por cada 1 Km: %0.2f l, %0.2f euros\n", consumo_l/100, consumo_e/100);
    velocidad = km/tiempo;
    printf("Velocidad: %0.2f Km/h, %0.2f m/s", velocidad, (velocidad * 1000)/3600);

    return 0;
}
