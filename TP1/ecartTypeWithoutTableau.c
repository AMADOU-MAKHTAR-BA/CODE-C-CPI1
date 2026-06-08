#include <stdio.h>
#include <math.h>

double EcartType(int n)
{
    int x;
    double somme = 0, sommeCarres = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Entrez la valeur d'index %d : ", i + 1);
        scanf("%d", &x);
        somme += x;
        sommeCarres += (double)x * x;
    }

    double moyenne = somme / n;
    double variance = (sommeCarres / n) - (moyenne * moyenne);
    double ecartType = sqrt(variance);
    return ecartType;
}

int main()
{
    int n;
    double ecartType;

    printf("Veuillez saisir le nombre de valeurs : ");
    scanf("%d", &n);
    ecartType = EcartType(n);
    printf("L'ecart-type de vos valeurs est : %lf\n", ecartType);
    return 0;
}