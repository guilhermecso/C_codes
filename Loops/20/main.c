#include <stdio.h>
#include <stdlib.h>

int main()
{
    int animal;
    int especie;
    int gato=0;
    int cachorro=0;
    int i=0;

    printf("Insira a quantidade de animais na loja: ");
    scanf("%d", &animal);
    while ((cachorro+gato)<animal){
        printf("o animal %d eh cachorro ou gato (1 cachorro, 2 gato): ",i+1);
        scanf("%d", &especie);
        i++;
        switch (especie){
    case 1:
        cachorro++;
        break;
    case 2:
        gato++;
        break;
    }
    }
    printf("%d sao cachorros e %d sao gatos.", cachorro, gato);
    return 0;
}
