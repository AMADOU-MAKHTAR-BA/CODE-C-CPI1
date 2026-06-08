#include <stdio.h>

int main(void)
{
   int age;
   char localite[50], sexe[10];
   printf("Entrez votre age: ");
   scanf("%d", &age);
   printf("Entrez votre localite: ");
   scanf("%49s", localite);
   printf("veillez saisir votre sexe : ");
   scanf("%9s", sexe);
   printf("Vous avez %d ans , vous etre de sexe %s et vous habitez a %s .\n", age, sexe , localite);
   return 0;
}