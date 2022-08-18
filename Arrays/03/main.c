#include <stdio.h>
#include <stdlib.h>

#define n 8
int main()
{
    int vetA[n];
    int vetB[n];

    for (int i=0;i<n;i++){
        printf("Insira um numero: ");
        scanf("%d", &vetA[i]);
        vetB[i]=vetA[i]*2;
    }
    for (int i=0;i<n;i++){
        printf("vetB[%d] = %d\n",i,vetB[i]);
    }

    return 0;
}
