#include <math.h>
#include <stdio.h>
int puissanceReccursive(int number, int p) {
  if (p == 0) return 1;
  return number * puissanceReccursive(number, p - 1);
}
int main() {
  int number, numberPuissance, puissance;
  printf("Veuillei saisir l'entier dont vous voulez calculer la puissance : ");
  scanf("%d", &number);
  printf("Veuillez saisr la valeur de la puissance : ");
  scanf("%d", &puissance);
  while (puissance < 0) {
    printf("La puissance doit etre positif : ");
    scanf("%d", &puissance);
  }
  numberPuissance = puissanceReccursive(number, puissance);
  printf(" %d^%d = %d ", number, puissance, numberPuissance);
  return 0;
}
