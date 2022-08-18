#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20];
    int maior8=0;

    for (int i=0;i<20;i++){
        printf("Insira um numero: ");
        scanf("%d",&n[i]);
    if (n[i]>8){
      maior8++;
    }
    }
    printf("%d numeros sao maiores que 8", maior8);
    return 0;
}
