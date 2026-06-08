#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
  char titre[50];
  char auteur[50];
  int anneePub;
  int nombreExem;
} Livre;

void remplirInfoLivres(Livre* L, int a) {
  int verify = 0;
  getchar();

  for (int i = 0; i < a; i++) {
    printf("Donner le titre de votre livre N%d : ", i + 1);
    fgets(L[i].titre, sizeof(L[i].titre), stdin);
    for (int j = 0; j < i; j++) {
      if (strcmp(L[j].titre, L[i].titre) == 0) {
        verify = 1;
        break;
      }
    }

    while (verify) {
      printf(
          "Chaque titre doit etre unique. Veuillez donner un titre "
          "inexistant "
          "pour votre livre N%d : ",
          i + 1);
      fgets(L[i].titre, sizeof(L[i].titre), stdin);
      for (int j = 0; j < i; j++) {
        if (strcmp(L[j].titre, L[i].titre) == 0) {
          verify = 1;
          break;
        } else {
          verify = 0;
        }
      }
    }

    printf("Donner le nom de l'auteur de votre livre N%d : ", i + 1);
    fgets(L[i].auteur, sizeof(L[i].auteur), stdin);
    printf("Donner l'annee de publication de votre livre N%d : ", i + 1);
    scanf(" %d", &L[i].anneePub);
    getchar();
    printf("Donner le nombre d'exemplaire de votre livre N%d : ", i + 1);
    scanf(" %d", &L[i].nombreExem);
    getchar();
    printf("____________ LIVRE %d soumis avec success ___________\n", i + 1);
  }
}
void afficherInfosLivres(Livre* L, int a) {
  for (int i = 0; i < a; i++) {
    printf("\n_________ LIVRE N%d __________\n", i + 1);
    printf("TITRE : %s", L[i].titre);
    printf("AUTEUR : %s", L[i].auteur);
    printf("ANNEE DE PUBLICATION : %d\n", L[i].anneePub);
    printf("NOMBRE D'EXEMLAIRES DISPONIBLE : %d\n", L[i].nombreExem);
  }
}
void rechercherLivreParTitre(Livre* L, char* titre, int a) {
  Livre* monLivre = NULL;

  for (int i = 0; i < a; i++) {
    if (strcmp(L[i].titre, titre) == 0) {
      monLivre = &L[i];
      break;
    }
  }
  if (!monLivre) {
    printf("Aucun livre ne correspond au titre fourni \n");
    return;
  }
  afficherInfosLivres(monLivre, 1);
  free(monLivre);
}

void filtrerLivreParAnnee(Livre* L, int annee, int a) {
  Livre* livres = malloc(a * sizeof(Livre));
  if (!livres) {
    printf(
        "Allocation de la memoire echouee lors du filtre des livres par annee "
        "de publication");
    exit(EXIT_FAILURE);
  }

  int j = 0;
  for (int i = 0; i < a; i++) {
    if (L[i].anneePub > annee) {
      livres[j] = L[i];
      j++;
    }
  }
  Livre* livresFiltres = realloc(livres, j);
  if (!livresFiltres) {
    printf(
        "Allocation de la memoire echouee lors du filtre des livres par annee "
        "de publication");
    exit(EXIT_FAILURE);
  }
  afficherInfosLivres(livresFiltres, j);
  free(livresFiltres);
}

int main() {
  int nombreLivre, annee;
  char titre[50];

  printf("Veuillez saisir le nombre de livres que vous avez : ");
  scanf("%d", &nombreLivre);

  while (nombreLivre <= 0) {
    printf("Le nombre de livre doit etre un nombre strictement positif : ");
    scanf("%d", &nombreLivre);
  }

  Livre* mesLivres = calloc(nombreLivre, sizeof(Livre));
  if (!mesLivres) {
    printf("Allocation dynamique de la memoire pour le programme echoue !!!");
    exit(EXIT_FAILURE);
  }

  if (mesLivres == NULL) {
    printf("Erreur d'allocation mémoire\n");
    return 1;
  }

  remplirInfoLivres(mesLivres, nombreLivre);

  printf("\nLes livres disponibles dans votre bibliotheque sont :");
  afficherInfosLivres(mesLivres, nombreLivre);

  printf("Veuillez donner le titre du livre dont vous voulez rechercher : ");
  fgets(titre, sizeof(titre), stdin);
  rechercherLivreParTitre(mesLivres, titre, nombreLivre);

  printf(
      "Veuillez saisir l'annee a partir duquel vous voulez voir les livres "
      "publies : ");
  scanf(" %d", &annee);
  getchar();

  printf("les livres publies apres l'annee %d sont : ", annee);
  filtrerLivreParAnnee(mesLivres, annee, nombreLivre);
  printf(
      "Liberation de la memoire allouee pour ce programme. Alors, merci a qui? "
      "A free() evidemment ");
  free(mesLivres);

  return 0;
}