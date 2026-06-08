#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const* argv[]) {
  float somme = 0;

  for (int i = 1; i < argc; i++) {
    somme += atof(argv[i]);
  }

  printf("Somme = %.2f\n", somme);

  return 0;
}