#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20];
    int maioridade=0;

    for (int i=0;i<20;i++){
        printf("Insira uma idade: ");
        scanf("%d",&n[i]);
    if (n[i]>=18){
      maioridade++;
    }
    }
    printf("%d sao maiores de idade", maioridade);
    return 0;
}
