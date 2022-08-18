#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int n;
    int fatorial=1;

    printf("Insira o numero: ");
    scanf("%d", &n);
    while(i <= n){
        fatorial = fatorial * i;
        i++;
    }
    printf ("O fatorial do numero inserido eh: %d", fatorial);
    return 0;
}
