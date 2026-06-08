#include <stdio.h>
#include <math.h>
#define pi 3.1415
float Perimetre(float rayon)
{
    float perimetre;
    perimetre = 2 * pi * rayon;
    return perimetre;
}
float Surface(float rayon)
{
    float surface;
    surface = pi * pow(rayon, 2);
    return surface;
}
int main()
{
    float rayon, perimetre, surface;

    printf("veuillez saisir le rayon de votre cercle : ");
    scanf("%f", &rayon);
    perimetre = Perimetre(rayon);
    surface = Surface(rayon);
    printf("Le perimetre de votre cercle de rayon %.2f est : %.3f \n", rayon, perimetre);
    printf("La surface de votre cercle de rayon %.2f est : %.3f \n", rayon, surface);
    return 0;
}