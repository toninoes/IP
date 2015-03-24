/*
 * PRACTICA 3 - EJERCICIO 12
 * Realiza un programa para calcular el coeficiente del binomio con una función
 * factorial.
 */

int coeficiente_binomio(int*, int*);
int factorial(int *);

int main(){
    int m, n;
    printf("Introduce 2 numeros: ");
    scanf("%d %d", &m, &n);

    printf("%d sobre %d es: %d", m, n, coeficiente_binomio(&m, &n));
    return 0;
}

//cabecera coeficiente_binomio(int*, int*);
//precondicion m y n son punteros a enteros los cuales deben estar inicializados
//postcondicion devuelve el coeficiente del binomio
int coeficiente_binomio(int *m, int *n){
    int p;
    p=*m-*n;
    return (factorial(m) / (factorial(n) * factorial(&p)));
}

//cabecera int factorial(int *);
//precondicion num es un punteroa entero que debe estar inicializado
//postcondicion devuelve el factorial de num
int factorial(int *num){
    int i, f=1;

    for (i=1 ; i<= *num ; i++)
        f *= i;

    return f;
}
