#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntd;
    int n1;
    int n2;
    int media;

    printf("Insira a quantidade de alunos: ");
    scanf("%d", &qntd);
    for (int i=0;i<qntd;i++){
        printf("Insira a primeira nota do aluno %d: (0 a 100) ", i+1);
        scanf("%d",&n1);
        printf("Insira a segunda nota do aluno %d: (0 a 100) ", i+1);
        scanf("%d",&n2);
        media=(n1+n2)/2;
        if(media < 60){
            printf("O aluno %d esta reprovado.\n", i+1);
        }
        else{
            printf("O aluno %d esta aprovado.\n", i+1);
        }
    }

    return 0;
}
