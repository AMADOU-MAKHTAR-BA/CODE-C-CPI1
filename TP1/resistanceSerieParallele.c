#include <stdio.h>

int main()
{
    float resistance1, resistance2, resistance3, resistanceEquivalentSerie, resistanceEquivalentParallele;
    /*************************************************
     on utilise la boucle do while pour forcer l'utilisateur a donner une resistance strictement positive pour resistance1
     * ***********************************************/
    do
    {
        printf("Veillez donner la valeur de la premiere resistance ( resistance1 ) : \n");
        scanf("%f", &resistance1);
    } while (resistance1 <= 0);
    /*************************************************
     on utilise la boucle do while pour forcer l'utilisateur a donner une resistance strictement positive pour resistance2
     * ***********************************************/
    do
    {
        printf("Veillez donner la valeur de la deuxieme resistance ( resistance2 ) : \n");
        scanf("%f", &resistance2);
    } while (resistance2 <= 0);
    /*************************************************
     on utilise la boucle do while pour forcer l'utilisateur a donner une resistance strictement positive pour resistance3
     * ***********************************************/
    do
    {
        printf("Veillez donner la valeur de la troisieme resistance ( resistance3) : \n");
        scanf("%f", &resistance3);
    } while (resistance3 <= 0);
    /*************************************************
     on utise les formules de calcul de la resisitance equivante en serie puis en parallele
     * ********************************************* */
    resistanceEquivalentSerie = resistance1 + resistance2 + resistance3;
    resistanceEquivalentParallele = (resistance1 * resistance2 * resistance3) / (resistance1 * resistance2 + resistance1 * resistance3 + resistance2 * resistance3);
/******************************************
 on affiche les resultats des calculs
 * *************************************** */
    printf("La resistance equivalente des trois resistors de resistances : %.3f ohm , %.3f ohm et %.3f ohm est : %.3f \n ", resistance1, resistance2, resistance3, resistanceEquivalentSerie);
    printf("La resistance equivalente des trois resistors de resistances : %.3f ohm , %.3f ohm et %.3f ohm est : %.3f \n ", resistance1, resistance2, resistance3, resistanceEquivalentParallele);

    return 0;
}