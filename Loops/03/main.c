#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];

    printf("Insira o nome: ");
    scanf("%s", nome);

    for(int i=0;i<10;i++){
    printf("%d - %s\n", i+1, nome);
    }

    return 0;
}
