#include <stdio.h>
#include <stdlib.h>

int sommeWithArry(int n) {
  int tab[n], somme = 0;
  printf("Veuillez saisir les valeurs de votre tableau \n");
  for (int i = 0; i < n; i++) {
    printf("Valeur %d : ", i + 1);
    scanf(" %d", &tab[i]);
  }
  for (int i = 0; i < n; i++) {
    somme += tab[i];
  }
  return somme;
}
int sommeWithPointer(int n) {
  int* p;
  int somme = 0;
  p = malloc(n * sizeof(int));
  printf("Veuillez saisir les valeurs liees a votre pointer \n");
  for (int i = 0; i < n; i++) {
    printf("Valeur %d : ", i + 1);
    scanf(" %d", (p + i));
  }
  for (int i = 0; i < n; i++) {
    somme += *(p + i);
  }
  return somme;
}
int main() {
  int sommeArray, n;
  printf(
      "--------------------------- PARTIE CONCERNANT LES TABLEAUX "
      "---------------------------\n");
  printf("Veuillez saisir la taille de votre tableau : ");
  scanf("%d", &n);
  sommeArray = sommeWithArry(n);
  printf("La somme des entiers de votre tableau est : %d \n \n", sommeArray);
  printf(
      "--------------------------- PARTIE CONCERNANT LES TABLEAUX "
      "---------------------------\n");
  printf(
      "--------------------------- PARTIE CONCERNANT LES TABLEAUX "
      "---------------------------\n");
  int sommePointer, m;
  printf("Veuillez saisir le nombre d'elements lies a votre pointer : ");
  scanf("%d", &m);
  sommePointer = sommeWithPointer(m);
  printf("La somme des entiers lies a votre pointer est : %d", sommePointer);
  return 0;
}