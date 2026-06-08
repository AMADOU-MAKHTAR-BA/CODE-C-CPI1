#include <stdio.h>
#include <stdlib.h>

// Définition de la structure
typedef struct {
  int num;
  int den;
} NombreRationnel;

// Fonction de saisie
NombreRationnel saisir() {
  NombreRationnel r;
  printf("Veuillez renseigner votre rationnel \n");
  printf("Numerateur : ");
  scanf("%d", &r.num);
  printf("Denominateur : ");
  scanf("%d", &r.den);
  while (r.den == 0) {
    printf(" Le denominateur doit etre different de zero (!= 0) : ");
    scanf("%d", &r.den);
  }

  return r;
}

// Fonction d'affichage
void afficher(NombreRationnel r) { printf("%d/%d \n", r.num, r.den); }

// Addition
NombreRationnel addition(NombreRationnel a, NombreRationnel b) {
  NombreRationnel res;

  res.num = a.num * b.den + b.num * a.den;
  res.den = a.den * b.den;

  return res;
}

// Multiplication
NombreRationnel multiplication(NombreRationnel a, NombreRationnel b) {
  NombreRationnel res;
  res.num = a.num * b.num;
  res.den = a.den * b.den;
  return res;
}

int main() {
  NombreRationnel r1, r2, somme, produit;

  printf("=== Saisie du premier rationnel ===\n");
  r1 = saisir();

  printf("=== Saisie du deuxième rationnel ===\n");
  r2 = saisir();

  printf("Votre premier rationnel est : ");
  afficher(r1);

  printf("Votre second rationnel est : ");
  afficher(r2);

  somme = addition(r1, r2);
  produit = multiplication(r1, r2);

  printf("La somme de vos deux rationnels vaut : ");
  afficher(somme);

  printf("Le produit de vos deux rationnnels vaut : ");
  afficher(produit);

  return 0;
}