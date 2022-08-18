#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20];
    int pares=0;

    for (int i=0;i<20;i++){
        printf("Insira um numero: ");
        scanf("%d",&n[i]);
    if (n[i]%2==0){
      pares++;
    }
    }
    printf("%d numeros sao pares", pares);
    return 0;
}
