#include <stdio.h>

// funcion que calcula el largo de una cadena
int Dimension(char Texto[]) {
    int Largo = 0;

    // recorrer hasta el caracter nulo
    while (Texto[Largo] != '\0') {
        Largo++;
    }

    return Largo;
}

int main() {
    char Texto[200];
    int LargoCadena;

    // pedir texto al usuario
    printf("ingrese un texto: ");
    fgets(Texto, 200, stdin);

    // calcular dimension usando la funcion
    LargoCadena = Dimension(Texto);

    // mostrar resultado
    printf("el largo de la cadena es: %d\n", LargoCadena);

    return 0;
}