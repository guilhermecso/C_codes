#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int casas;
    int canal;
    int canal3=0,canal5=0,canal8=0,canal11=0,canal13=0;
    int total;
    int pessoas;

    printf("Insira a quantidade de casas: ");
    scanf("%d", &casas);

    while (i < casas){
        printf("Insira qual canal esta sendo assistido na casa %d: (3, 5, 8, 11 ou 13)", i+1);
        scanf("%d", &canal);
        printf("Insira quantas pessoas estavam assistindo ao canal: ");
        scanf ("%d", &pessoas);
        total=total+pessoas;

        switch (canal){
        case 3:
            canal3=canal3+pessoas;
            break;
        case 5:
            canal5=canal5+pessoas;
            break;
        case 8:
            canal8=canal8+pessoas;
            break;
        case 11:
            canal11=canal11+pessoas;
            break;
        case 13:
            canal13=canal13+pessoas;
            break;
        }
        i++;
    }
    printf("\n");
    printf("%d pessoas estavam assistindo ao canal 3.\n", canal3);
    printf("%d pessoas estavam assistindo ao canal 5.\n", canal5);
    printf("%d pessoas estavam assistindo ao canal 8.\n", canal8);
    printf("%d pessoas estavam assistindo ao canal 11.\n", canal11);
    printf("%d pessoas estavam assistindo ao canal 13.\n", canal13);
    printf("\n");
    printf("A media de pessoas assistindo ao canal 3 eh: %d%%\n",canal3*100/total);
    printf("A media de pessoas assistindo ao canal 5 eh: %d%%\n",canal5*100/total);
    printf("A media de pessoas assistindo ao canal 8 eh: %d%%\n",canal8*100/total);
    printf("A media de pessoas assistindo ao canal 11 eh: %d%%\n",canal11*100/total);
    printf("A media de pessoas assistindo ao canal 13 eh: %d%%\n",canal13*100/total);
    return 0;
}
