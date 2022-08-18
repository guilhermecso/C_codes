#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntd;
    int preco;
    int valor=0;

    printf("Insira a quantidade de itens: ");
    scanf ("%d", &qntd);

    for (int i=0;i<qntd;i++){
        printf("Insira o preco do produto %d: ", i+1);
        scanf("%d", &preco);
        valor=valor+preco;
    }
    printf("O valor a ser pago eh: %d", valor);
    return 0;
}
