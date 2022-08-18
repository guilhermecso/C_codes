#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aux;
    int vet[]={5,6,7,1,3,0};
    int tam=sizeof(vet)/sizeof(int);

    int posicao_menor;
    for(int inicio=0;inicio<tam;inicio++){
        posicao_menor=inicio;
        for(int i=(1+inicio);i<tam;i++){
            if(vet[posicao_menor]>vet[i]){
            posicao_menor = i;
            }
        }
    aux = vet[posicao_menor];
    vet[posicao_menor] = vet[inicio];
    vet[inicio] = aux;

    }
        for (int i=0;i<tam;i++){
            printf("%d ",vet[i]);
        }
    return 0;
}

