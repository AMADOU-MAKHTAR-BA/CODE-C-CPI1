#include <stdio.h>

/*
typeDeRetour nomFonction(int a , float b, char c ,....){
    logique de fonction
    return valeurDeretour
}
*/

int main() {
  float myNumber, somme;
  printf("Veuillez saisir un reel: ");
  scanf("%f", &myNumber);
  somme = 2 * myNumber;
  printf("la somme est : %f \n", somme);

  printf("Veuillez saisir un reel: \n");
  scanf("%f", &myNumber);
  somme = 2 * myNumber;
  printf("la somme est : %f \n", somme);

  printf("Veuillez saisir un reel: \n");
  scanf("%f", &myNumber);
  somme = 2 * myNumber;
  printf("la somme est : %f", somme);
  return 0;
}