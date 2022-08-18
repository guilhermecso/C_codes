#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10];
    int soma;

    for (int i=0;i<10;i++){
        printf("Insira um numero: ");
        scanf("%d",&n[i]);
        soma=soma+n[i];
    }
    printf("A soma dos numeros informados eh: %d", soma);
    return 0;
}
