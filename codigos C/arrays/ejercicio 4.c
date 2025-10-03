#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

//la funcion encuentra el maximo y el minimo
void encontrarMaxMin(int vec[], int n, int *max, int *min) {
    *max = vec[0];
    *min = vec[0];
    for (int i = 1; i < n; i++) {
        if (vec[i] > *max) {
            *max = vec[i];
        }
        if (vec[i] < *min) {
            *min = vec[i];
        }
    }
}

// la funcion encuentra el valor maximo
void mostrarPosicionesMax(int vec[], int n, int max) {
    printf("el valor maximo que es %d se repite en las posiciones: ", max);
    for (int i = 0; i < n; i++) {
        if (vec[i] == max) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int vec[TAM];
    int max, min;

    srand(time(NULL));

    // genera valores de 10 a 40
    for (int i = 0; i < TAM; i++) {
        vec[i] = 10 + (rand() % 31); // valores entre 10 y 40
    }

    // muestra el vector con 10 numeros por linea
    printf("vector:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%3d ", vec[i]);  // %3d para alinear prolijo
        if ((i + 1) % 10 == 0) { // cada 10 números, salto de linea
            printf("\n");
        }
    }
    printf("\n");

    // llamar a la funcion que encuentra maximo y minimo
    encontrarMaxMin(vec, TAM, &max, &min);
    printf("valor maximo: %d\n", max);
    printf("valor minimo: %d\n", min);

    // mostrar las posiciones donde se repite el maximo
    mostrarPosicionesMax(vec, TAM, max);

    return 0;
}
