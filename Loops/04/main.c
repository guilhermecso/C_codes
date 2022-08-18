#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nome[50];
    int n;

    printf("Insira o nome: ");
    scanf("%s", nome);
    printf("Insira um numero: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
    printf("%d - %s\n", i+1, nome);
    }

    return 0;
}


