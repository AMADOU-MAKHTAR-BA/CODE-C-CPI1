#include <stdio.h>
// Permuter avec une variable tempon
void permuterWithTempon()
{
    float number1, number2, tempNumber;
    printf("Veuillez saisir la valeur de param1 : ");
    scanf("%f", &number1);
    printf("Veuillez saisir la valeur de param2 : ");
    scanf("%f", &number2);
    printf(" Avant permutation avec une variable tempon : \n ~ la valeur de param1 est : %.2f \n ~ la valeur de param2 est : %.2f \n", number1, number2);
    tempNumber = number1;
    number1 = number2;
    number2 = tempNumber;
    printf(" Apres permutation : \n ~ la valeur de param1 est : %.2f \n ~ la valeur de param2 est : %.2f \n", number1, number2);
}
// Permutation sans variable tempon
void permuterWithoutTempon()
{
    float number1, number2;
    printf("Veuillez saisir la valeur de number1 : ");
    scanf("%f", &number1);
    printf("Veuillez saisir la valeur de number2 : ");
    scanf("%f", &number2);
    printf(" Avant permutation sans une variable tempon : \n ~ la valeur de number1 est : %.2f \n ~ la valeur de number2 est : %.2f \n", number1, number2);
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    printf(" Apres permutation : \n ~ la valeur de number1 est : %.2f \n ~ la valeur de number2 est : %.2f \n", number1, number2);
}
int main()
{
    // Permuter avec variable tempon
    permuterWithTempon();
    // Permuter sans variable tempon
    permuterWithoutTempon();
    return 0;
}