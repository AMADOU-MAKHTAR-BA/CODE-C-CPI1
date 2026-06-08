#include <stdio.h>

int main(){

     long number;
    int compteur = 1;

    printf("Veuillez saisir l'entier dont vous voulez connaitre le nombre de chiffre : \n");
    scanf("%ld", &number);
    while (number > 10 || number < -10)
    {
        number = number / 10;
        compteur++;
    }
    compteur++;
    printf("Votre chiffre contient : %d chiffres \n", compteur);
    return 0;
}