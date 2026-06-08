#include <stdio.h>
#include <math.h>
int saisirNombrepositif()
{
    int n;
    do
    {
        printf("Veuillez saisir un entier  strictement superieur positif : ");
        scanf("%d", &n);
    } while (n < 1);
    return n;
}
void nombrePremier(int n)
{
    if (n == 1)
    {
        printf("1 n'est pas un nombre premier\n");
        return;
    }

    if (n == 2)
    {
        printf("Le nombre saisi : %d est premier\n", n);
        return;
    }

    int estPremier = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            estPremier = 0;
            break;
        }
    }

    if (estPremier == 1)
        printf("Le nombre saisi : %d est premier\n", n);
    else
        printf("Le nombre saisi : %d n'est pas premier\n", n);
}
void diviseursPositifs(int n)
{
    int i;
    printf("Les diviseurs de %d sont : ", n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf(" %d ,", i);
        }
    }
}
void nombreParfait(int n)
{
    int i, testNombre = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            testNombre += i;
        }
    }
    if (n == testNombre)
        printf("\nLe nombre %d est parfait ", n);
    else
        printf("\nLe nombre %d n'est pas parfait ", n);
}
int main()
{
    int nombreSaisi;
    nombreSaisi = saisirNombrepositif();
    nombrePremier(nombreSaisi);
    diviseursPositifs(nombreSaisi);
    nombreParfait(nombreSaisi);
    return 0;
}
