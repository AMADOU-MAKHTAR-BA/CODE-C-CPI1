#include <stdio.h>

void echangerAvecPtr(float* a, float* b) {
  float temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  float a, b;
  float *pointer1, *pointer2;
  pointer1 = &a;
  pointer2 = &b;
  printf("Veuillez saisir la valeur de a : \n");
  scanf("%f", &a);
  printf("Veuillez saisir la valeur de b : \n");
  scanf("%f", &b);

  printf("Avant l'echange, a = %.2f et b = %.2f \n", a, b);
  echangerAvecPtr(pointer1, pointer2);
  printf("Apres l'echange, a = %.2f , b = %.2f \n", a, b);
  return 0;
}