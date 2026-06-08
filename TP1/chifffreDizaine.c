#include <stdio.h>

int main(void)
{
    long long nombreSaisie;
    printf("veillez saisir le nombre dont vous voulez connaitre le chiffre des dizaines : \n");
    scanf("%lld", &nombreSaisie);
    printf("Le nombre saisie est : %lld \n", nombreSaisie);
    long long chiffreDizaineNombresaisie = (nombreSaisie / 10) % 10;
    long long chiffreCentaineNombreSaisie = (nombreSaisie / 100) % 10;
    printf("Le  chiffre des dizaines du nombre saisie %lld est : %lld \n",
           nombreSaisie, chiffreDizaineNombresaisie);
    printf("Le  chiffre des centaines du nombre saisie %lld est : %lld \n",
           nombreSaisie, chiffreCentaineNombreSaisie);
}
