#include <stdio.h>
void Permuter(float* x, float* y) {
  float temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
int main() {
  float number1, number2;
  printf("Veuillez saisir votre premier entier number1 : ");
  scanf("%f", &number1);
  printf("Veuillez saisir votre scond entier number2 : ");
  scanf("%f", &number2);
  printf(
      "Avant la permutation, la valeur de number1 est : %.2f et celle de "
      "number2 est : %.2f \n",
      number1, number2);
  Permuter(&number1, &number2);
  printf(
      "Apres la permutation, la valeur de number1 est : %.2f et celle de "
      "number2 est : %.2f \n",
      number1, number2);
  return 0;
}