#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{

    int vet[n];

    for (int i=0;i<n;i++){
        printf("Insira um valor do vetor: ");
        scanf("%d", &vet[i]);
    }
    for (int i=0;i<n;i++){
        if(vet[i]<=0){ // nao consegui pensar em como "apagar" os numeros menores ou iguais a 0, entao setei zero em todos que atendam a condicao
            vet[i]=0;
        }
    }
    for (int i=0;i<n;i++){
        printf("vet[%d] = %d\n",i,vet[i]);
    }
    return 0;
}
