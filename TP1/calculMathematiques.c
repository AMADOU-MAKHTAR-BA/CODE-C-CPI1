#include <stdio.h>
#include <math.h>

int main(void)
{
   /* ============================
      Déclaration des variables
      ============================ */

   int sommeCarreeDesPremiersEntiers;
   int sommeCubesDesPremiersEntiersImpairs;
   double sommeRacinesDesPremiersEntiersPairs;

   /* ============================
      Initialisation
      ============================ */

   sommeCarreeDesPremiersEntiers = 0;
   sommeCubesDesPremiersEntiersImpairs = 0;
   sommeRacinesDesPremiersEntiersPairs = 0.0;

   /* =========================================================
      calcul de la somme des carrés des 100 premiers entiers
      ========================================================= */

   for (int i = 1; i <= 100; i++)
   {
      sommeCarreeDesPremiersEntiers += i * i;
   }

   /* =========================================================
      calcul de la somme des cubes des 100 premiers nombres impairs
      ========================================================= */

   for (int i = 1; i <= 100; i += 2)
   {
      sommeCubesDesPremiersEntiersImpairs += i * i * i;
   }

   /* =========================================================
      calcul de la somme des racines carrées des
      100 premiers entiers pairs
      ========================================================= */

   for (int i = 0; i <= 100; i += 2)
   {
      sommeRacinesDesPremiersEntiersPairs += sqrt(i);
   }

   /* ============================
      Affichage des résultats
      ============================ */

   printf("La somme des carres des 100 premiers entiers est : %d\n",
          sommeCarreeDesPremiersEntiers);

   printf("La somme des cubes des 100 premiers entiers impairs est : %d\n",
          sommeCubesDesPremiersEntiersImpairs);

   printf("La somme des racines carrees des 100 premiers entiers pairs est : %.2f\n",
          sommeRacinesDesPremiersEntiersPairs);

   return 0;
}
