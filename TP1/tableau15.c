#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50

// Fonction pour afficher un tableau
void afficherTableau(int tab[], int taille) {
  printf("[");
  for (int i = 0; i < taille; i++) {
    printf("%d", tab[i]);
    if (i < taille - 1) printf(", ");
  }
  printf("]\n");
}

// Fonction pour trouver le plus petit élément
int trouverMin(int tab[], int taille) {
  int min = tab[0];
  for (int i = 1; i < taille; i++) {
    if (tab[i] < min) min = tab[i];
  }
  return min;
}

// Fonction pour trouver le plus grand élément
int trouverMax(int tab[], int taille) {
  int max = tab[0];
  for (int i = 1; i < taille; i++) {
    if (tab[i] > max) max = tab[i];
  }
  return max;
}

// Fonction pour compter les éléments nuls aux indices impairs
int compterNulsIndicesImpairs(int tab[], int taille) {
  int count = 0;
  for (int i = 1; i < taille; i += 2) {
    if (tab[i] == 0) count++;
  }
  return count;
}

// Fonction pour compter les occurrences d'une valeur
int compterOccurrences(int tab[], int taille, int valeur) {
  int count = 0;
  for (int i = 0; i < taille; i++) {
    if (tab[i] == valeur) count++;
  }
  return count;
}

// Fonction pour trouver l'élément le plus fréquent
int elementLePlusFrequent(int tab[], int taille) {
  int maxFreq = 0;
  int elementFreq = tab[0];
  for (int i = 0; i < taille; i++) {
    int freq = 1;
    // Compter les occurrences
    for (int j = i + 1; j < taille; j++) {
      if (tab[j] == tab[i]) freq++;
    }
    if (freq > maxFreq) {
      maxFreq = freq;
      elementFreq = tab[i];
    }
  }
  return elementFreq;
}

// Fonction pour calculer la somme des carrés des différences
int sommeCarresDifferences(int tab[], int taille) {
  int somme = 0;
  for (int i = 0; i < taille - 1; i++) {
    int diff = tab[i + 1] - tab[i];
    somme += diff * diff;
  }
  return somme;
}

// Fonction pour afficher les indices où une valeur apparaît
void afficherIndices(int tab[], int taille, int valeur) {
  printf("Indices de %d : ", valeur);
  int premier = 1;
  for (int i = 0; i < taille; i++) {
    if (tab[i] == valeur) {
      if (!premier) printf(", ");
      printf("%d", i);
      premier = 0;
    }
  }
  if (premier) printf("aucun");
  printf("\n");
}

// Fonction pour tester si un nombre est premier
int estPremier(int n) {
  if (n < 2) return 0;
  if (n == 2) return 1;
  if (n % 2 == 0) return 0;
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return 0;
  }
  return 1;
}

// Fonction pour supprimer les nombres premiers du tableau (modifie le tableau
// et la taille)
void supprimerPremiers(int tab[], int* taille) {
  int nouveauTaille = 0;
  int isPremier;
  for (int i = 0; i < *taille; i++) {
    isPremier = estPremier(tab[i]);
    if (!isPremier) {
      tab[nouveauTaille] = tab[i];
      nouveauTaille++;
    }
  }
  *taille = nouveauTaille;
}

int main() {
  srand(time(NULL));
  int tableau[SIZE];

  // 1. Générer un tableau aléatoire
  for (int i = 0; i < SIZE; i++) {
    tableau[i] = rand() % 100;
  }

  // 2. Afficher les éléments
  printf("Tableau genere : ");
  afficherTableau(tableau, SIZE);

  // 3. Plus petit élément
  printf("Plus petit element : %d\n", trouverMin(tableau, SIZE));

  // 4. Plus grand élément
  printf("Plus grand element : %d\n", trouverMax(tableau, SIZE));

  // 5. Nombre d'éléments nuls aux indices impairs
  printf("Nombre d'elements nuls aux indices impairs : %d\n",
         compterNulsIndicesImpairs(tableau, SIZE));

  // 6. Occurrences d'une valeur donnée
  int valeur;
  printf("Entrez une valeur pour compter ses occurrences : ");
  scanf("%d", &valeur);
  printf("Nombre d'occurrences de %d : %d\n", valeur,
         compterOccurrences(tableau, SIZE, valeur));

  // 7. Élément le plus fréquent
  printf("Element le plus frequent : %d\n",
         elementLePlusFrequent(tableau, SIZE));

  // 8. Somme des carrés des différences (consécutives)
  printf("Somme des carres des differences consecutives : %d\n",
         sommeCarresDifferences(tableau, SIZE));

  // 9. Afficher les indices d'une valeur donnée
  printf("Entrez une valeur pour afficher ses indices : ");
  scanf("%d", &valeur);
  afficherIndices(tableau, SIZE, valeur);

  // 10. Supprimer les nombres premiers
  int tailleActuelle = SIZE;
  printf("Tableau avant suppression : ");
  afficherTableau(tableau, tailleActuelle);
  printf("\n--- Suppression des nombres premiers ---\n");
  supprimerPremiers(tableau, &tailleActuelle);
  printf("Tableau apres suppression : ");
  afficherTableau(tableau, tailleActuelle);

  return 0;
}