#include <stdio.h>

void echangeSansPtr(float a, float b) {
  float temp;

  printf("Avant l'echange, a = %.2f et b = %.2f \n", a, b);
  temp = a;
  a = b;
  b = temp;
  printf("Apres l'echange, a = %.2f , b = %.2f \n", a, b);
}

int main() {
  float a, b;
  printf("Veuillez saisir la valeur de a : \n");
  scanf("%f", &a);
  printf("Veuillez saisir la valeur de b : \n");
  scanf("%f", &b);

  echangeSansPtr(a, b);

  return 0;
}