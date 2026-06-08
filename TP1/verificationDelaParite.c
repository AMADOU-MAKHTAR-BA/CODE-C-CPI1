#include <stdio.h>
int main(void)
{
    int nombreSaisie;
    printf("Veillez saisir un entier: \n");
    scanf("%d", &nombreSaisie);
    printf("Le nombre saisie est : %d .\n", nombreSaisie);
    if (nombreSaisie % 2 == 0)
    {
        printf("Le nombre saisie %d est paire .", nombreSaisie);
    }
    else
    {
        printf("Le nombre saisie %d est impaire.", nombreSaisie);
    }
    return 0;
}
