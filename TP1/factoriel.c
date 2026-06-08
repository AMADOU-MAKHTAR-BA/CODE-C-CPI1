#include <stdio.h>

long long factorielWithoutRecursive(int entier)
{
    int i;
    long long factoriel = 1;
    if (entier == 1 || entier == 0)
        return 1;
    else
    {
        for (i = 1; i <= entier; i++)
        {
            factoriel *= i;
        }
    }
    return factoriel;
}

long long factorielWithRecursive(int entier)
{
    if (entier == 1)
        return 1;
    else
        return entier * factorielWithRecursive(entier - 1);
}
int main()
{
    int entier1, entier2;
    long long factoriel_without_recursive;
    long long factoriel_with_recursive;
    do
    {
        printf("Veuillez saisir l'entier dont vous voulez calculer le factoriel avec la fonction non recursive : ");
        scanf("%d", &entier1);
    } while (entier1 < 0);
    factoriel_without_recursive = factorielWithoutRecursive(entier1);

    do
    {
        printf("Veuillez saisir l'entier dont vous voulez calculer le factoriel avec la fonction  recursive : ");
        scanf("%d", &entier2);
    } while (entier2 < 0);
    factoriel_with_recursive = factorielWithRecursive(entier2);
    printf("~Le factoriel de ( %d ) calcule avec la fonction non recursive est : %lld \n", entier1, factoriel_without_recursive);
    printf("~Le factoriel de ( %d ) calcule avec la fonction  recursive est : %lld \n", entier2, factoriel_with_recursive);

    return 0;
}