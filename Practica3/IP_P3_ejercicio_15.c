/*
 * PRACTICA 3 - EJERCICIO 15
 * Escribe un programa utilizando funciones que calcule los números perfectos
 * menores que 1000 (Un número es perfecto si la suma de sus divisores, excepto él
 * mismo es igual al propio número). Implementa la función suma_divisores utilizando la
 * siguiente cabecera int suma_divisores(int numero)
 */

void perfecto (int, int*);

int main(){
    int suma, i;
    for(i=1 ; i<1000 ; i++){
        perfecto(i, &suma);
        if (i==suma)
            printf("%d es perfecto\n", i);
    }
}

//cabecera void perfecto (int, int*);
//precondicion num inicializado y puntero a suma
//postcondicion suma los divisores de num excluyendo num y almacena dicha suma en la variable referenciada a traves de *suma
void perfecto(int num, int *suma){
    int i;
    *suma = 1;
    for(i=2 ; i<num ; i++){
        if(num%i == 0)
            *suma = *suma + i;
    }
}
