#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CuadradoPerfecto(int n) {
    if (n < 0) return 0;
    for (int i = 0; i * i <= n; i++) { //cada cuadrado hasta que sea mayor
        if (i * i == n) {
            return 1; // si es igual, es cuadrado
        }
    }
    return 0; // si no, no lo es
}

int mcm(int a, int b) {
    int max = (a > b) ? a : b; // condicion, si a mayor que b, devuelve a
    int resultado = max; // el mcm no puede ser menor que el numero mas grande

    while (1) { //bucle infinito
        if (resultado % a == 0 && resultado % b == 0) { //repite hasta que no hay resto
            return resultado; // si es verdad, devuelve el resultado
        }
        resultado++; // si no, suma 1 y repite
    }
}

int main() {
    int opcion;

    do {
        printf("\n== menu insano ==\n");
        printf("1. verificar cuadrado perfecto\n");
        printf("2. calcular MCM\n");
        printf("3. salir\n");
        printf("ingrese un numero porfa: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                int num;
                printf("ingresar un numero: ");
                scanf("%d", &num);
                if (CuadradoPerfecto(num)) // si la funcion devuelve verdadero
                    printf("%d es cuadrado perfecto\n", num);
                else
                    printf("%d no es cuadrado perfecto\n", num);
                break;
            }
            case 2: {
                int a, b;
                printf("ingrese el primer numero");
                scanf("%d", &a);
                printf("ingrese el segundo numero");
                scanf("%d", &b);
                printf("el MCM de %d y %d es %d\n", a, b, mcm(a, b));
                break;
            }
            case 3:
                printf("nos vemos crack\n");
                break;
            default:
                printf("numero entre 1 y 3 porfa\n");
        }

    } while (opcion != 3);

    return 0;
}
