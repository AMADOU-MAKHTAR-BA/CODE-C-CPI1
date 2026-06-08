#include <stdio.h>
#include <math.h>
int main()
{
    float tabNombre[10], moyenne = 0, ecartType = 0;
    printf("Vous allez saisir succesivement 10 nombre pour remplir votre tableau \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Veuillez saisir la valeur numero %i de votre tableau \n", i+1);
        scanf("%f", &tabNombre[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        moyenne += tabNombre[i];
    }
    moyenne = (float)moyenne / 10;
    for (int i = 0; i < 10; i++)
    {
        ecartType += (tabNombre[i] - moyenne) * (tabNombre[i] - moyenne);
    }
    ecartType = sqrt((float)ecartType / 10);

    printf("L'ecart-type des valeurs de votre tableau de moyenne ( %.3f ) est : %.3f \n", moyenne, ecartType);
    return 0;
}