#include <stdio.h>

float somme(float a, float b)
{
    float s = a + b;
    return s;
}
int main()
{
    float A, B, C, D, somme1, somme2;
    printf("Veuillez fournir la valeur de A : \n");
    scanf("%f", &A);
    printf("Veuillez fournir la valeur de B : \n");
    scanf("%f", &B);
    printf("Veuillez fournir la valeur de C : \n");
    scanf("%f", &C);
    printf("Veuillez fournir la valeur de D : \n");
    scanf("%f", &D);
    somme1 = somme(A, B);
    printf("La somme de A et de B est : %.2f \n", somme1);
    somme2 = somme(C, D);
    printf("La somme de C et de D est : %.2f \n", somme2);

    printf("Hello, World!\n");
    return 0;
}