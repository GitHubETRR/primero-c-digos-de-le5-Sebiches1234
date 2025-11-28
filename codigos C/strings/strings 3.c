#include <stdio.h>

// funcion que convierte las letras a minuscula
void PasaMinuscula(char Texto[]) {
    int i = 0;

    // recorrer la cadena hasta el caracter nulo
    while (Texto[i] != '\0') {

        // si es letra mayuscula convertirla
        if (Texto[i] >= 'A' && Texto[i] <= 'Z') {
            Texto[i] = Texto[i] + 32;
        }

        i++;
    }
}

// funcion que cuenta cuantas vocales hay en la cadena
int Vocales(char Texto[]) {
    int i = 0;
    int Contador = 0;

    // recorrer la cadena buscando vocales
    while (Texto[i] != '\0') {

        // chequear si es vocal
        if (Texto[i] == 'a' || Texto[i] == 'e' || Texto[i] == 'i' || 
            Texto[i] == 'o' || Texto[i] == 'u') {
            Contador++;
        }

        i++;
    }

    return Contador;
}

int main() {
    char Texto[200];
    int CantVocales;

    // pedir texto
    printf("ingrese un texto: ");
    fgets(Texto, 200, stdin);

    // pasar a minuscula
    PasaMinuscula(Texto);

    // contar vocales
    CantVocales = Vocales(Texto);

    // mostrar resultados
    printf("texto en minusculas: %s", Texto);
    printf("cantidad de vocales: %d\n", CantVocales);

    return 0;
}