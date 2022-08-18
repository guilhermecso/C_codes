#include <stdio.h>
#include <stdlib.h>

#define n 10
int main()
{
    int vet1[n];
    int vet2[n];
    int soma[n];

    for(int i=0;i<n;i++){
        printf("Insira um numero: ");
        scanf("%d",&vet1[i]);
    }
    for(int i=0;i<n;i++){
        printf("Insira um numero: ");
        scanf("%d",&vet2[i]);
    }

    for(int i=0;i<n;i++){
        soma[i]=vet1[i]+vet2[i];
    }

    for(int i=0;i<n;i++){
        printf("posicao %d - %d\n", i, soma[i]);
}
    return 0;
}
