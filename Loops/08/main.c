#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idadeMenor=9999;
    int n;
    char nome[50];
    char nomeMenor[50];

    for(int i=0;i<5;i++){
        printf("Insira o nome da pessoa %d: ", i+1);
        scanf("%s", nome);
        printf("Insira a idade %d: ", i+1);
        scanf("%d", &n);

        if(n < idadeMenor){
            idadeMenor = n;
            strcpy(nomeMenor, nome);
            printf("%s", nomeMenor);
        }
    }
    printf("a pessoa mais nova eh %s com %d anos", nomeMenor, idadeMenor);

    return 0;
}
