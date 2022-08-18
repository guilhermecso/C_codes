#include <stdio.h>
#include <stdlib.h>

#define n 4

int main()
{
    int vet[n];
    int menor15=0;
    int maior15=0;
    int igual15=0;
    int media15=0;

    for (int i=0;i<n;i++){
    printf("Insira um valor do vetor: ");
    scanf("%d", &vet[i]);
    if (vet[i]<15){
        menor15=menor15+vet[i];
    }
    if (vet[i]==15){
        igual15++;
    }
    if (vet[i]>15){
        maior15++;
        media15=media15+vet[i];
        media15=media15/maior15;
    }
    }
    printf("Soma dos valores menores que 15: %d\n", menor15);
    printf("Quantidade de valores iguais a 15: %d\n", igual15);
    printf("Media dos valores maiores que 15: %d\n", media15);
    return 0;
}
