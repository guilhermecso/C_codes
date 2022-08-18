#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    int soma=0;

    printf("Insira dois valores: ");
    scanf("%d %d", &n1, &n2);

    if (n1 <= n2){
    for (int i=n1;i<=n2;i++){
        soma=soma+i;
    }
    printf("A soma dos numeros de %d ate %d eh: %d", n1, n2, soma);
    }
    else
        printf("O primeiro numero eh maior que o segundo numero");
    return 0;
}
