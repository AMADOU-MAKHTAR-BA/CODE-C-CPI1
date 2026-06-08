#include <stdio.h>

void lireTableau(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Veuillez saisir la valeur du tableau d'index  %d : ", i);
        scanf("%d", &tab[i]);
    }
}

void trierTableau(int trieTab[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (trieTab[i] > trieTab[j])
            {
                temp = trieTab[i];
                trieTab[i] = trieTab[j];
                trieTab[j] = temp;
            }
        }
    }
}

void afficherTableau(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char *virgule = (i == n - 1) ? "" : ", ";
        printf("%d %s", tab[i], virgule);
    }
}

int main()
{
    int n;
    printf("Veullez saisir la taille de votre tableau : ");
    scanf("%d", &n);
    int tableau[n];
    lireTableau(tableau, n);

    printf("Les valeurs de votre tableau avant le trie est : [");
    afficherTableau(tableau, n);
    printf("] \n");

    trierTableau(tableau, n);
    printf("Les valeurs de votre tableau apres le trie est : [");
    afficherTableau(tableau, n);
    printf("]");

    return 0;
}