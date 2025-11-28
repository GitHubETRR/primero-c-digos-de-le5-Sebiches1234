#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CargaVector(int Vector[], int Tamano) {
    // cargar el vector con numeros aleatorios entre 20 y 90
    for (int i = 0; i < Tamano; i++) {
        Vector[i] = rand() % 71 + 20; 
        // 71 porque 90 - 20 + 1 = 71
    }
}

void InvertirVector(int VectorOriginal[], int VectorInvertido[], int Tamano) {
    // invertir el vector copiando desde el final hacia el principio
    for (int i = 0; i < Tamano; i++) {
        VectorInvertido[i] = VectorOriginal[Tamano - 1 - i];
    }
}

void MostrarVector(int Vector[], int Tamano) {
    // mostrar todos los elementos del vector
    for (int i = 0; i < Tamano; i++) {
        printf("%d ", Vector[i]);
    }
    printf("\n");
}

int main() {
    // inicializar generador de numeros aleatorios
    srand(time(NULL));

    int VectorOriginal[20];
    int VectorInvertido[20];

    // cargar vector original
    CargaVector(VectorOriginal, 20);

    // invertir vector
    InvertirVector(VectorOriginal, VectorInvertido, 20);

    // mostrar vectores
    printf("vector original:\n");
    MostrarVector(VectorOriginal, 20);

    printf("vector invertido:\n");
    MostrarVector(VectorInvertido, 20);

    return 0;
}