#include <stdio.h>

void frequenceChiffre(long long n, int frequence[10])
{
    int chiffre;

    for (int i = 0; i < 10; i++)
    {
        frequence[i] = 0;
    }

    if (n < 0)
        n = -n;

    if (n == 0)
        frequence[0] = 1;

    while (n > 0)
    {
        chiffre = n % 10;
        frequence[chiffre]++;
        n /= 10;
    }
}

int main()
{
    int frequence[10];
    long long myNumber;

    printf("Veuillez saisir le nombre dont vous voulez connaitre la frequence de ses chiffres : ");
    scanf("%lld", &myNumber);

    frequenceChiffre(myNumber, frequence);

    printf("Frequence des chiffres :\n");
    for (int i = 0; i < 10; i++)
    {
        if (frequence[i] > 0)
        {
            printf("La frequence du chiffre %d  est : %d\n", i, frequence[i]);
        }
    }

    return 0;
}
