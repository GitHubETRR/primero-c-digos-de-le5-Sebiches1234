#include <stdio.h>

#define TAM 50

int contarMayor(int vec[], int n) {
    int i, max = vec[0], contador = 0;

    // busca el mayor numero
    for (i = 1; i < n; i++) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }

    // va contando cuantas veces pasa el mayor
    for (i = 0; i < n; i++) {
        if (vec[i] == max) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int vec[TAM];
    int i;

    // genera valores aleatorios
    srand(time(NULL));
    for (i = 0; i < TAM; i++) {
        vec[i] = 10 + rand() % 11; // de 10 a 20
    }

    // muestra el vector
    printf("vector: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    // llama a la funcion
    int repeticiones = contarMayor(vec, TAM);
    printf("el mayor valor se repite %d veces\n", repeticiones);

    return 0;
}
