#include <stdio.h>
#include <stdlib.h>

#define n 10

int main()
{
    int vetA[n];
    int vetB[n];
    int vetC[n];

    for (int i=0;i<n;i++){
    printf("Insira um valor do vetor A: ");
    scanf("%d", &vetA[i]);
    }
    for (int i=0;i<n;i++){
    printf("Insira um valor do vetor B: ");
    scanf("%d", &vetB[i]);
    vetC[i]=vetA[i]+vetB[i];
    }

    for (int i=0;i<n;i++){
        printf("vetC[%d] = %d\n",i,vetC[i]);
    }
    return 0;
}
