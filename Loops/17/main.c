#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pprato=1;
    int vbebida=1;
    int valor=0;

    while(pprato > 0 || vbebida > 0){
        printf("Insira o peso do prato: ");
        scanf ("%d", &pprato);
        printf("Insira o valor da bebida: ");
        scanf ("%d", &vbebida);
        valor = vbebida + (pprato * 15);
        printf("Valor da conta: %d\n", valor);
    }

    return 0;
}
