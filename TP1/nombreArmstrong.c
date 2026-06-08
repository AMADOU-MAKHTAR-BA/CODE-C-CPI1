#include <stdio.h>
#include <math.h>
int nombreChiffre(long long number)
{
    int compteur = 1;

    while (number >= 10)
    {
        number = number / 10;
        compteur++;
    }
    // compteur++;
    return compteur;
}

int nombreArmstrong(long long nombre, int nombreChiffre)
{
    int modulo, sommeModulo = 0;
    long long myNumber;
    myNumber = nombre;
    while (myNumber > 9)
    {
        modulo = myNumber % 10;
        sommeModulo += pow(modulo, nombreChiffre);
        myNumber = (int)myNumber / 10;
    }
    sommeModulo += pow(myNumber, nombreChiffre);
    if (sommeModulo == nombre)
    {
        return 1;
        // printf("Le nombre %lld est un nombre Armstrong \n ", nombre);
    }
    else
    {
        return 0;
        // printf("Le nombre %lld n'est pas un nombre Armstrong", nombre);
    }
}

int main()
{
    int myNumber;
    long long nombre, nombre_chiffre;
    do
    {
        printf("veuillez saisir le nombre ( positif ) dont vous voulez verifier s'il est ou non un nombre Armstrong : ");
        scanf("%lld", &nombre);
    } while (nombre < 0);
    nombre_chiffre = nombreChiffre(nombre);
    myNumber = nombreArmstrong(nombre, nombre_chiffre);
    (myNumber == 1) ? printf("Le nombre %lld est un nombre Armstrong \n ", nombre) : printf("Le nombre %lld n'est pas un nombre Armstrong", nombre);
    return 0;
}