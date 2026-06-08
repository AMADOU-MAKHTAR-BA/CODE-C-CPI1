#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 5;

  // Allocation avec malloc
  char* tab1 = malloc(n * sizeof(char));
  if (!tab1) {
    printf("Espace restant insuffisante pour la reservation de tab1 !!");
    exit(EXIT_FAILURE);
  }

  // Allocation avec calloc
  int* tab2 = calloc(n, sizeof(int));
  if (!tab2) {
    printf("Espace restant insuffisante pour la reservation de tab1 !!");
    exit(EXIT_FAILURE);
  }

  printf("=== AVEC MALLOC SANS INITIALISATION===\n");
  for (int i = 0; i < n; i++) {
    printf("tab1[%d] = %d\n", i, *(tab1 + i));
  }

  printf("\n=== AVEC CALLOC SANS INITIALISATION===\n");
  for (int i = 0; i < n; i++) {
    printf("tab2[%d] = %d\n", i, *(tab2 + i));
  }

  free(tab1);
  free(tab2);

  return 0;
}