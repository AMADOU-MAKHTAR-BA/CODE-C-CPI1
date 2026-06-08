#include <stdio.h>
#include <string.h>

// Structure Personne
typedef struct {
  char nom[50];
  char prenom[50];
  int age;
} Personne;

int main() {
  Personne p1, p2;

  // Lecture de la première personne
  printf("=== Personne 1 ===\n");
  printf("Nom : ");
  scanf("%s", p1.nom);
  printf("Prenom : ");
  scanf("%s", p1.prenom);
  printf("Age : ");
  scanf("%d", &p1.age);

  // Lecture de la deuxième personne
  printf("\n=== Personne 2 ===\n");
  printf("Nom : ");
  scanf("%s", p2.nom);
  printf("Prenom : ");
  scanf("%s", p2.prenom);
  printf("Age : ");
  scanf("%d", &p2.age);

  if (p1.age < p2.age)
    printf("\nLa personne la moins agee est : %s %s, agee de : %d\n", p1.prenom,
           p1.nom, p1.age);
  else
    printf("\nLa personne la moins agee est : %s %s, agee : %d\n", p2.prenom,
           p2.nom, p2.age);

  return 0;
}