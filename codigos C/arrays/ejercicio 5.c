#include <stdio.h>

int main() {
    int Tamano;

    // pedir tamaño de los vectores
    printf("ingrese el tamano de los vectores: ");
    scanf("%d", &Tamano);

    int VectorA[Tamano];
    int VectorB[Tamano];

    // leer componentes del vector A
    printf("ingrese los elementos del vector A:\n");
    for (int i = 0; i < Tamano; i++) {
        // leer componente
        scanf("%d", &VectorA[i]);
    }

    // leer componentes del vector B
    printf("ingrese los elementos del vector B:\n");
    for (int i = 0; i < Tamano; i++) {
        // leer componente
        scanf("%d", &VectorB[i]);
    }

    int ProductoEscalar = 0;

    // calcular producto escalar
    for (int i = 0; i < Tamano; i++) {
        ProductoEscalar += VectorA[i] * VectorB[i];
    }

    // mostrar resultado
    printf("el producto escalar es: %d\n", ProductoEscalar);

    return 0;
}