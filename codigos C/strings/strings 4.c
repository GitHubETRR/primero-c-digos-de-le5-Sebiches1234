#include <stdio.h>

// funcion que invierte una cadena y la guarda en otra
void Invertir(char Texto[], char TextoInvertido[]) {
    int Largo = 0;

    // calcular largo de la cadena
    while (Texto[Largo] != '\0') {
        Largo++;
    }

    // copiar al reves
    for (int i = 0; i < Largo; i++) {
        TextoInvertido[i] = Texto[Largo - 1 - i];
    }

    // agregar caracter nulo al final
    TextoInvertido[Largo] = '\0';
}

int main() {
    char Texto[200];
    char TextoInvertido[200];

    // pedir texto
    printf("ingrese un texto: ");
    fgets(Texto, 200, stdin);

    // invertir texto
    Invertir(Texto, TextoInvertido);

    // mostrar resultado
    printf("texto invertido: %s\n", TextoInvertido);

    return 0;
}