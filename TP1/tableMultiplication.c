#include <stdio.h>

int main()
{

    int N, resultat1, M, resultat2;
    /*****************************************************************
     Utilisation de la boucle do while pour forcer une valeur comprise entre 0 et 10
     ***************************************************************/
    do
    {
        printf("Veillez saisir un entier compris entre 0 et 10 et dont vous voulez connaitre la table de multiplication: \n");
        scanf("%d", &N);
    } while (N <= 0 || N > 10);
    /**********************************************
     utilisation de la boucle for pour parcourir de les valeur de 0 a 10 et afficher leur multiplication a chaque fois
     **********************************************/
    for (int i = 0; i <= 10; i++)
    {
        resultat1 = N * i;
        printf("La multiplication de %d et de %d est : %d \n", N, i, resultat1);
    }
/**************************************************
 ici on force l'entree d'une valeur superieur strictement a 10 pour continuer la table de multiplication qu'ona commence sur la boucle precedente
 ************************************************ */
    do
    {
        printf("Veillez saisir une superieure strictement a 10 pour continuer la table de mutiptiplication de %d jusqu'a ce nombre : \n" , N);
        scanf("%d" , &M);
    } while (M < 10);

    /*****************************************************************
     On effectue de nouveau le boucle for pour continuer la multiplication de jusqu'au nombre saisie precedemment
    ****************************************************************** */
   for (int i = 11; i <= M; i++)
   {
    resultat2= N*i;
    printf("La multiplication de %d et de %d est : %d \n", N, i, resultat2);
   }
   
}