#include <stdio.h>
int Max_2(int x, int y) { return (x > y) ? x : y; }
int Max_4(int w, int x, int y, int z) {
  int max1 = Max_2(w, x);
  int max2 = Max_2(y, z);
  int max = Max_2(max1, max2);
  return max;
}
int main() {
  int entier1, entier2, entier3, entier4, max;
  printf("Veuillez saisir la valeur de premier entier : ");
  scanf("%d", &entier1);
  printf("Veuillez saisir la valeur de deuxieme entier : ");
  scanf("%d", &entier2);
  printf("Veuillez saisir la valeur de troisieme entier : ");
  scanf("%d", &enti / er3);
  printf("Veuillez saisir la valeur de quatrieme entier : ");
  scanf("%d", &entier4);

  max = Max_4(entier1, entier2, entier3, entier4);
  printf("Le maximium de vos entiers max(%d,%d,%d,%d) est : %d\n", entier1,
         entier2, entier3, entier4, max);
  return 0;
}