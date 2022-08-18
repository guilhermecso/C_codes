#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[20];
    int soma;
    int media;

    for (int i=0;i<20;i++){
        printf("Insira uma idade: ");
        scanf("%d",&n[i]);
        soma=soma+n[i];
        media=soma/20;
    }
    printf("A media das idades informadas eh: %d", media);
    return 0;
}
