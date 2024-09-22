#include <stdio.h>

int main() {
    float base, altezza, area;


    printf("Inserisci la base del triangolo: ");
    scanf("%f", &base);


    printf("Inserisci l'altezza del triangolo: ");
    scanf("%f", &altezza);


    area = (base * altezza) / 2;


    printf("L'area del triangolo e: %.2f\n", area);

    return 0;
}
