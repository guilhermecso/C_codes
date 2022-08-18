#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior;
    int menor;
    int altura[3];

    for (int i=0;i<3;i++){
        printf("Insira a altura da pessoa %d: ", i+1);
        scanf("%d", &altura[i]);
        maior=altura[0];
        menor=altura[0];
    }
        for (int i=0;i<3;i++){
        if(maior < altura[i]){
            maior=altura[i];
        }
        if(menor > altura[i]){
            menor=altura[i];
        }
    }
    printf("A pessoa mais alta tem %d de altura e a menor tem %d de altura. ",maior, menor);
    return 0;
}
