#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resposta;
    int r=0;

    printf("Ola tudo bem? (s/n) ");
    scanf("%c", &resposta);
    fflush(stdin);
    while (r==0){
        if (resposta == 's'){
            r++;
        }
        else{
            printf("Ola tudo bem? (s/n) ");
            scanf("%c", &resposta);
            fflush(stdin);
    }
    }
    return 0;
}
