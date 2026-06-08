#include <stdio.h>
int main() {
  int entier;

  printf("Veuillez saisir un entier : ");
  scanf("%d", &entier);

  printf("La valeur de entier est : %d et son adresse est : %p \n", entier,
         &entier);

  int* pointerEntier;
  pointerEntier = &entier;

  //   &pointerEntier
  //  pointerEntier
  //   *pointerEntier

  printf("L'adresse du pointer est : %p \n", &pointerEntier);
  printf("L'adresse de la variabe que contient le pointer est : %p \n",
         pointerEntier);
  printf("La valeur de la variable que contient le pointer est : %d \n",
         *pointerEntier);

  int tab[5];
  int* pointerTab = tab;

  printf("Vous allez remplir votre tableau d'entier \n");
  for (int i = 0; i < 5; i++) {
    printf("Element %d : ", i + 1);
    scanf("%d", /*&tab[i]*/ (pointerTab + i));
  }

  printf("\nLes valeurs de votre tableau sont : \n");
  for (int i = 0; i < 5; i++) {
    printf("tab[%d] = %d \n", i + 1, /*tab[i]*/ *(pointerTab + i));
  }

  return 0;
}
