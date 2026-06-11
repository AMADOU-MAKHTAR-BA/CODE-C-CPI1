#include <stdio.h>
int estPremier(int n) {
  if (n < 2) return 0;
  if (n == 2) return 1;
  if (n % 2 == 0) return 0;
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return 0;
  }
  return 1;
}
int nbreChiffre(int n) {
  int compteur = 1;
  while (n > 9) {
    n /= 10;
    compteur++;
  }
  return compteur;
}
void remplirTabInt(int n, int* tab) {
  int compteur = 1, indice = 0, element;
  while (n > 9) {
    element = n % 10;
    n /= 10;
    *(tab + indice) = element;
    compteur++;
    indice++;
  }
  *(tab + indice) = n;
}
int estPalindrome(int tab[], int n) {
  for (int i = 0; i < n / 2; i++) {
    if (tab[i] != tab[n - i - 1]) {
      return 0;
    }
  }
  return 1;
}
int main() {
  int repetition;
  int nbrInt, nbrChiffreInt;
  do {
    printf("Veuillez saisir votre entier : ");
    scanf(" %d", &nbrInt);
    int verifyPremier = estPremier(nbrInt);
    while (verifyPremier == 0 || nbrInt <= 0) {
      printf("Votre entier doit etre positif et premier  : ");
      scanf(" %d", &nbrInt);
      verifyPremier = estPremier(nbrInt);
    }
    nbrChiffreInt = nbreChiffre(nbrInt);
    int tabInt[nbrChiffreInt];
    remplirTabInt(nbrInt, tabInt);
    int verifyPalindrome = estPalindrome(tabInt, nbrChiffreInt);
    if (verifyPalindrome == 1) {
      printf("%d est PREMIER et est aussi un PALINDROME", nbrInt);
    } else {
      printf("%d n'est pas un palindrome", nbrInt);
    }
    printf(
        "\nSi vous voulez relancer le programme, entrer un entier different de "
        "-1 "
        ": ");
    scanf("%d", &repetition);
  } while (repetition != -1);
  printf("FIN DU PROGRAMME");
  return 0;
}
