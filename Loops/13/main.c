#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int soma=0;

    while (n >= 0){
        printf("Insira um numero: ");
        scanf("%d", &n);
    if (n >= 0){
        soma=soma+n;
    }
    }
    printf("A soma dos numeros informados eh: %d", soma);
    return 0;
}

