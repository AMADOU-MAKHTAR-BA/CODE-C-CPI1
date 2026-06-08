#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c, delta, solution1, solution2;

    /****************
     * ON VA ESSAYER DE RESOUDRE DES EQUATIONS DU SECOND DEGRE DANS L'ENSEMBLE R : aX**2 + bX + c = 0
     * *******************/

    printf("Saisir la valeur du terme de : a =>>> ");
    scanf("%f", &a);
    printf("Saisir la valeur du terme de : b =>>> ");
    scanf("%f", &b);
    printf("Saisir la valeur du terme de : c =>>> ");
    scanf("%f", &c);
    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        solution1 = (-b - sqrt(delta)) / (2 * a);
        solution2 = (-b + sqrt(delta)) / (2 * a);
        printf("Les deux solutions de votre equation du second degre : %.2fx^2 + %.2fx + %.2f = 0 sont %.2f et %.2f\n", a, b, c, solution1, solution2);
    }
    else if (delta == 0)
    {

        solution1 = -b / (2 * a);
        printf("Il y a une seule solution double pour votre equation du second degre :  %.2fx^2 + %.2fx + %.2f = 0  %.2f\n", a, b, c, solution1);
    }
    else
    {

        printf("Il n'y a pas de solution réelle pour votre equation du second degre : %.2fx^2 + %.2fx + %.2f = 0  car son discriminant est strictement negatif.\n" , a, b, c);
    }

    return 0;
}
