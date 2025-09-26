#include <stdio.h>
#define DIASDELMES 31
#define MESESDELANIO 12
int main() {
    int diaNac, mesNac, anioNac;
    int diaAct, mesAct, anioAct;
    int edad;
    printf("calculadora de edad \n");
    do {
        printf("ingrese su dia de nacimiento (1-31 porfa): ");
        scanf("%d", &diaNac);
        if (diaNac <= 0 || diaNac > DIASDELMES) {
            printf("pusiste mal el dia crack, entre 1-31\n");
        }
    } while (diaNac <= 0 || diaNac > DIASDELMES);

    do {
        printf("ingrese su mes de nacimiento (1-12 porfa): ");
        scanf("%d", &mesNac);
        if (mesNac <= 0 || mesNac > MESESDELANIO) {
            printf("pusiste mal el mes crack, entre 1-12\n");
        }
    } while (mesNac <= 0 || mesNac > MESESDELANIO);

    printf("ingrese su año de nacimiento: ");
    scanf("%d", &anioNac);

    do {
        printf("ingrese el día actual (1-31 porfa): ");
        scanf("%d", &diaAct);
        if (diaAct <= 0 || diaAct > DIASDELMES) {
            printf("pusiste mal el dia crack, entre 1-31\n");
        }
    } while (diaAct <= 0 || diaAct > DIASDELMES);

    do {
        printf("ingrese el mes actual (1-12 porfa): ");
        scanf("%d", &mesAct);
        if (mesAct <= 0 || mesAct > MESESDELANIO) {
            printf("pusiste mal el mes crack, entre 1-12.\n");
        }
    } while (mesAct <= 0 || mesAct > MESESDELANIO);

    printf("ingrese el año actual: ");
    scanf("%d", &anioAct);

    edad = anioAct - anioNac;

    if (mesAct < mesNac || (mesAct == mesNac && diaAct < diaNac)) {
        edad--;
    }

    printf("su edad es: %d\n", edad);
    return 0;
}

