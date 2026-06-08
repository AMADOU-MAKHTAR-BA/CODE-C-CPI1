#include <stdio.h>

void pariteSomme(int a, int b)
{
    int somme = a + b;
    switch (somme % 2)
    {
        case 0:
            printf("La somme de %d et de %d qui donne %d est paire\n", a, b, somme);
            break;
        case 1:
            printf("La somme de %d et de %d qui donne %d est impaire\n", a, b, somme);
            break;
    }
}
void pariteProduit(int a, int b)
{
    int produit = a * b;
    switch (produit % 2)
    {
        case 0:
            printf("Le produit de %d et de %d qui donne %d est pair\n", a, b, produit);
            break;
        case 1:
            printf("Le produit de %d et de %d qui donne %d est impair\n", a, b, produit);
            break;
    }
}
void signeSomme(int a, int b)
{
    int somme = a + b;
    int signe = (somme > 0) - (somme < 0); 

    switch (signe)
    {
        case 1:
            printf("La somme de %d et de %d qui donne %d est positive\n", a, b, somme);
            break;
        case 0:
            printf("La somme de %d et de %d qui donne %d est nulle\n", a, b, somme);
            break;
        case -1:
            printf("La somme de %d et de %d qui donne %d est negative\n", a, b, somme);
            break;
    }
}

void signeProduit(int a, int b)
{
    int produit = a * b;
    int signe = (produit > 0) - (produit < 0); 
    switch (signe)
    {
        case 1:
            printf("Le produit de %d et de %d qui donne %d est positif\n", a, b, produit);
            break;
        case 0:
            printf("Le produit de %d et de %d qui donne %d est nul\n", a, b, produit);
            break;
        case -1:
            printf("Le produit de %d et de %d qui donne %d est negatif\n", a, b, produit);
            break;
    }
}

int main()
{
    int number1, number2;

    printf("Veuillez saisir la valeur de votre premier entier :\n");
    scanf("%d", &number1);

    printf("Veuillez saisir la valeur de votre deuxieme entier :\n");
    scanf("%d", &number2);

    pariteSomme(number1, number2);
    pariteProduit(number1, number2);
    signeSomme(number1, number2);
    signeProduit(number1, number2);

    return 0;
}
