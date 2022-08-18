#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20];
    int n1=0;

    for (int i=0;i<20;i++){
        printf("Insira um numero: ");
        scanf("%d",&n[i]);
    if (n[i]>0 && n[i]<100){
      n1++;
    }
    }
    printf("%d numeros estao entre 0 e 100", n1);
    return 0;
}
