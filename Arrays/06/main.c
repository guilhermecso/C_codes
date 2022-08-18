#include <stdio.h>
#include <stdlib.h>

#define n 10
int main()
{
    int vet[n];
    int maior=0;
    int menor=0;
    int posicaomaior=0;
    int posicaomenor=0;

    for (int i=0;i<n;i++){
        printf("Insira um valor do vetor: ");
        scanf("%d", &vet[i]);
        maior=vet[0];
        menor=vet[0];
    }
    for(int i=0;i<n;i++){
    if (vet[i]>maior){
        posicaomaior=i;
        maior=vet[i];

    }
    if (vet[i]<menor){
        menor=vet[i];
        posicaomenor=i;
    }
}
    printf("Maior numero: %d na posicao: %d\n",maior, posicaomaior);
    printf("Menor numero: %d na posicao: %d\n",menor, posicaomenor);
    return 0;
}
