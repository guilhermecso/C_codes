#include <stdio.h>
#include <stdlib.h>
#define n 10

int main()
{
    int gabarito[]={5,6,7,8,9};
    int resposta[n];
    int pontos=0;

    for (int i=0;i<n;i++){
        printf("Insira um valor do vetor: ");
        scanf("%d", &resposta[i]);
    }

        for (int i=0;i<n;i++){
            for (int j=0;j<n/2;j++){
                if(resposta[i] == gabarito[j]){
                    pontos++;
                }
            }
        }
        printf("Quantidade de pontos feitos: %d",pontos);
    return 0;
}
