#include <stdio.h>
#include <math.h>
#define g 9.81
void calculHauteur()
{
    float t;
    printf("Veuillez saisir la valeur du temps t ( en seconde) : ");
    scanf("%f", &t);
    printf("%f", g);
    const float h = 0.5 * g * t * t;
    printf("La hauteur descendu par l'objet au bout de %f secondes est :  %f metres \n", t, h);
}
void durreeTotalChute()
{
    float h;
    printf("Veuillez saisir la hauteur du chute en metre : ");
    scanf("%f", &h);
    const float t = sqrt(2 * ((float)h / g));
    printf("La duree totale du chute pour une hauteur de %f metres est %f secondes \n", h, t);
}
int main()
{
    calculHauteur();
    durreeTotalChute();
    return 0;
}