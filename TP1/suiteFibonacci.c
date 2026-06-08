#include <stdio.h>

int suiteFibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    return suiteFibonacci(n - 1) + suiteFibonacci(n - 2);
}

int main()
{
    int rang, valeurSuite;
    printf("Veuillez saisir le rang dont vous voulez calculer la suite de Fibonacci : ");
    scanf("%d", &rang);
    valeurSuite = suiteFibonacci(rang);
    printf("Au rang %d , la suite de Fibonnacci prend la valeur : %d", rang, valeurSuite);
    return 0;
}