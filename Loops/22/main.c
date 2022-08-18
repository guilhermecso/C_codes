#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kmP;
    int kmT=0;

    while (kmT < 4000){
        printf("Insira a distancia percorrida: ");
        scanf ("%d",&kmP);
        kmT=kmT+kmP;
    }

    return 0;
}
