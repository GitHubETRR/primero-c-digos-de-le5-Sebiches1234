#include <stdio.h>

// funcion que convierte un texto a minusculas ignorando numeros
void PasaMinuscula(char Texto[]) {
    int i = 0;

    // recorrer la cadena hasta encontrar el caracter nulo
    while (Texto[i] != '\0') {

        // si es letra mayuscula convertirla a minuscula
        // ignorar numeros del 0 al 9
        if (Texto[i] >= 'A' && Texto[i] <= 'Z') {
            Texto[i] = Texto[i] + 32;
        }

        i++;
    }
}

int main() {
    char Texto[200];

    // pedir texto al usuario
    printf("ingrese un texto: ");
    fgets(Texto, 200, stdin);

    // convertir a minuscula ignorando numeros
    PasaMinuscula(Texto);

    // mostrar resultado
    printf("el texto en minusculas es: %s\n", Texto);

    return 0;
}