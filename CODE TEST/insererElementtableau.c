#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, indice;
  float inserer;
  char res;
  printf("Veuillez saisir la taille de votre tableau : ");
  scanf("%d", &n);
  float* myTab = malloc((n + 1) * sizeof(float));
  printf("Veuillez saisir les elements de votre tableau\n");
  for (int i = 0; i < n; i++) {
    printf("Element %d : ", i + 1);
    scanf("%f", (myTab + i));
  }
  printf("Les elements de votre tableau sont : [ ");
  for (int i = 0; i < n; i++) {
    printf(" %.1f ", *(myTab + i));
  }
  printf(" ]\n");

  printf("Voulez vous inserez un element dans votre tableau(O/N) ? ");
  scanf(" %c", &res);
  if (res == 'O' || res == 'o') {
    printf(
        "\nVeuillez fournir l'indice ou vous voulez inserez votre element : ");
    scanf(" %d", &indice);
    while (indice < 0 || indice > n) {
      printf("Indice indisponible ( entre 1 et %d ) : ", n);
      scanf(" %d", &indice);
    }

    printf("Veuillez saisir l'element a inserer : ");
    scanf(" %f", &inserer);
    for (int i = n - 1; i >= indice - 1; i--) {
      *(myTab + i + 1) = *(myTab + i);
    }
    *(myTab + indice - 1) = inserer;
    printf("Les elements de votre tableau sont : [ ");
    for (int i = 0; i <= n; i++) {
      printf(" %.1f ", *(myTab + i));
    }
    printf(" ]");
  } else {
    printf("Ok champion, on en reste la");
  }

  free(myTab);

  return 0;
}
