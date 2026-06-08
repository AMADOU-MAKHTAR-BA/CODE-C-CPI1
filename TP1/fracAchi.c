#include <stdio.h>

int main()
{
    int number1, number2;
    float myReel;

    printf(" \n ============ EXERCICES LANGUAGE C ============\n\n");

    printf("Veuillez saisir le premier entier (number1) : ");
    scanf("%d", &number1);

    printf("Veuillez saisir le deuxieme entier (number2) : ");
    scanf("%d", &number2);

    const int quotient = number1 / number2;
    const float frac = (float)number1/number2 - quotient;

    printf("\n=== RESULTATS DU QUOTIENT DE : (number1 par number2)===\n");
    printf("La partie entiere du quotient de number1/number2 est : %d\n", quotient);
    printf("La partie fractionnaire du quotient de number1/number2 est : %.3f\n\n", frac);

    printf("Veuillez saisir un nombre reel : \n");
    scanf("%f", &myReel);

    const int produitFracReel = ((int)(myReel * frac)) % 256;

    printf("\n===  ===\n");
    printf("Le produit de votre (reel par la partie fractinnaire de la division de nuber1 par number2 ) modulo 256 est : %d\n", produitFracReel);
    return 0;
}