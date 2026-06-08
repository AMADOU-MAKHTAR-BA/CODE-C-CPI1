#include <stdio.h>
int main()
{
    float raison, firstTerme, rang , valeurSuite;
    printf("Veuillez saisir le premier terme de votre suite arithmetique : \n");
    scanf("%f", &firstTerme);
    printf("Veuillez saisir la raison de votre suite arithmetique : \n");
    scanf("%f", &raison);

    printf("Vous avez donnez la suite arithmetique suivante : %.2f + %.2fn \n" , firstTerme , raison);

    do
    {
        printf("veuillez saisir le rang ( n > 0 ) pour lequel vous voulez calculer la valeur de votre suite : \n");
        scanf("%f", &rang);
    } while (rang < 0);

    valeurSuite = firstTerme + (float)raison*rang;
printf("La valeur de votre suite au rang %.2f est : %.2f" , rang , valeurSuite);
return 0;

}