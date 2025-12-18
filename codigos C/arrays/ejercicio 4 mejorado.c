#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

// estructura para guardar maximo y minimo
typedef struct {
    int max;
    int min;
} MaxMin;

// la funcion devuelve maximo y minimo
MaxMin encontrarMaxMin(int vec[], int n) {
    MaxMin resultado;
    resultado.max = vec[0];
    resultado.min = vec[0];

    for (int i = 1; i < n; i++) {
        if (vec[i] > resultado.max) {
            resultado.max = vec[i];
        }
        if (vec[i] < resultado.min) {
            resultado.min = vec[i];
        }
    }

    return resultado;
}

// la funcion muestra las posiciones del maximo
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
    MaxMin datos;

    srand(time(NULL));

    // genera valores de 10 a 40
    for (int i = 0; i < TAM; i++) {
        vec[i] = 10 + (rand() % 31);
    }

    // muestra el vector con 10 numeros por linea
    printf("vector:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%3d ", vec[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");

    // obtener maximo y minimo sin punteros
    datos = encontrarMaxMin(vec, TAM);

    printf("valor maximo: %d\n", datos.max);
    printf("valor minimo: %d\n", datos.min);

    // mostrar posiciones del maximo
    mostrarPosicionesMax(vec, TAM, datos.max);

    return 0;
}
