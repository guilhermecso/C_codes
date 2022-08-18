#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reservas=0;
    int areafum=0;
    int areanaofum=0;
    int aux;

    while (reservas < 50){
    printf("Qual area deseja reservar? (1 para nao fumantes e 2 para fumantes) ");
    scanf("%d", &aux);

    if (aux == 1){
        if (areanaofum < 25){
            areanaofum++;
            reservas++;
        }
        else
            printf("Nao existem reservas nesta area.\n");
    }
    if (aux == 2){
        if (areafum < 25){
            areafum++;
            reservas++;
        }
        else
            printf("Nao existem reservas nesta area.\n");
    }
    }
    printf("Reservas esgotadas.");
    return 0;
}
