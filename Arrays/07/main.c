#include <stdio.h>
#include <stdlib.h>

void leVetor(int vet[], int TAM);
void imprimeVetor(int vet[], int TAM);
void inteseccaoVetor(int v1[], int v2[], int r[], int TAM);

int main() {

    int TAM = 4;
    int vet1[TAM];
    int vet2[TAM/2];
    int resp[TAM/2];


    printf("Vetor 1:\n");
    leVetor(vet1, TAM);

    printf("\nVetor 2:\n");
    leVetor(vet2, TAM/2);


    printf("\nVetor 1: ");
    imprimeVetor(vet1, TAM);

    printf("\nVetor 2: ");
    imprimeVetor(vet2, TAM/2);


    inteseccaoVetor(vet1, vet2, resp, TAM);


    printf("\nResposta: ");
    imprimeVetor(resp, TAM/2);

    return 0;
}

void leVetor(int vet[], int TAM) {
    for(int i=0;i<TAM;i++) {
        printf("V[%d]: ", i);
        scanf("%d", &vet[i]);
    }

}

void imprimeVetor(int vet[], int TAM) {
    for(int i=0;i<TAM;i++) {
        printf("%d ", vet[i]);
    }
}

void inteseccaoVetor(int v1[], int v2[], int r[], int TAM) {
    int indiceR = 0;

    for(int i=0; i<TAM; i++) {
        for(int j=0;j<TAM/2; j++) {
            if(v1[i] == v2[j]) {
                r[indiceR] = v1[i];
                indiceR++;
            }
        }
    }
}
