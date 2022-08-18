#include <stdio.h>
#include <stdlib.h>

#define n 20

int main()
{
    int vet[n];
    int par=0;
    int impar=0;
    int maior50=0;
    int menor7=0;

    for (int i=0;i<n;i++){
        printf("Insira um numero: ");
        scanf("%d", &vet[i]);
        if (vet[i]%2 == 0){
            par++;
        }
        if (vet[i]%2 != 0){
            impar++;
        }
        if (vet[i]>50){
            maior50++;
        }
        if (vet[i]<7){
            menor7++;
        }
    }
    printf("quantidade de pares: %d\nquantidade de impares: %d\nquantidade de numeros maiores que 50: %d\nquantidade de numeros menores que 7: %d",par,impar,maior50,menor7);
    return 0;
}
