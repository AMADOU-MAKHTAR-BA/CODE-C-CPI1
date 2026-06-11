#include <math.h>
#include <stdio.h>
int nbreChiffre(int n) {
  int compteur = 1;
  while (n > 9) {
    n /= 10;
    compteur++;
  }
  return compteur;
}
int conversionBinToDec(int binary, int compteur) {
  int decimal = 0, modulo;
  compteur--;
  while (binary >= 1) {
    modulo = binary % 10;
    if (modulo == 1) {
      decimal += pow(2, compteur);
    }
    binary /= 10;
    compteur--;
  }
  return decimal;
}
int main() {
  int binaire, nbrChiffre, decimal;

  printf("Veuillez saisir votre binaire : ");
  scanf(" %d", &binaire);
  nbrChiffre = nbreChiffre(binaire);
  decimal = conversionBinToDec(binaire, nbrChiffre);
  printf(" %d en binaire  = %d  en decimal ", binaire, decimal);
  return 0;
}
