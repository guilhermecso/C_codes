#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20];
    int n1=0;
    int n2=0;
    int n3=0;

    for (int i=0;i<20;i++){
        printf("Insira um numero: ");
        scanf("%d",&n[i]);
    if (n[i]>0 && n[i]<=100){
      n1++;
    }
    if (n[i]>100 && n[i]<=200){
      n2++;
    }
    if (n[i]>200){
      n3++;
    }
    }
    printf("%d numeros estao entre 0 e 100\n", n1);
    printf("%d numeros estao entre 101 e 200\n", n2);
    printf("%d numeros sao maiores que 200\n", n3);
    return 0;
}
