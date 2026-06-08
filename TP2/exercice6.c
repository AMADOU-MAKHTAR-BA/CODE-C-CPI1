#include <stdio.h>
#include <stdlib.h>
int* reservationDynamique(int n) {
  int* p;
  p = calloc(n, sizeof(int));
  return p;
}
void lectureTableau(int* p, int n) {
  printf("Veuillez entrer les valeurs de votre tableau ! \n");
  for (int i = 0; i < n; i++) {
    printf("Valeur %d : ", i + 1);
    scanf(" %d", (p + i));
  }
}
void affichageTableau(int* p, int n) {
  printf("Les valeurs de votre tableau sont : ");
  printf("[ ");
  for (int i = 0; i < n; i++) {
    printf("%d ", *(p + i));
  }
  printf("]\n");
}
void liberationMemoire(int* p) { free(p); }
int main() {
  int* myPointeur;
  int n;
  printf("Veuillez fournir la taille de votre tableau : ");
  scanf("%d", &n);
  myPointeur = reservationDynamique(n);
  lectureTableau(myPointeur, n);
  affichageTableau(myPointeur, n);
  printf("Votre espace memoire %p est entrain d'etre libere. Merci free()",
         myPointeur);
  liberationMemoire(myPointeur);
  return 0;
}