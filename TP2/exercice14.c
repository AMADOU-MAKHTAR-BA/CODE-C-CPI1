#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nom[50];
  char prenom[50];
  char num[15];
  int age;
} Contact;

int nombreDeContact() {
  int a;
  printf(
      "Veuillez saisir le nombre de contact(s) que vous voulez enregistrer : ");
  scanf("%d", &a);
  getchar();
  return a;
}

void afficherContacts(Contact* p, int a) {
  for (int i = 0; i < a; i++) {
    printf("------ contact %d ------- \n", i + 1);
    printf("NOM : %s", p[i].nom);
    printf("PRENOM : %s", p[i].prenom);
    printf("MUMERO : %s", p[i].num);
    printf("AGE : %d \n", p[i].age);
  }
}

Contact* enregistrerContact(int a) {
  Contact* contacts = calloc(a, sizeof(Contact));

  if (!contacts) {
    printf(
        "Erreur lors de la reservatio dynamique pour l'enregistrement des "
        "contacts!!!");
    exit(EXIT_FAILURE);
  }

  printf(
      "Veillez remplir les informations suivantes pour enregistrer vos "
      "contacts \n");
  for (int i = 0; i < a; i++) {
    printf("________ contact %d ___________\n", 1 + i);
    printf("NOM : ");
    fgets(contacts[i].nom, sizeof(contacts[i].nom), stdin);
    printf("PRENOM : ");
    fgets(contacts[i].prenom, sizeof(contacts[i].prenom), stdin);
    printf("NUMERO : ");
    fgets(contacts[i].num, sizeof(contacts[i].num), stdin);
    printf("AGE : ");
    scanf("%d", &contacts[i].age);
    getchar();
    while (contacts[i].age <= 0 || contacts[i].age > 130) {
      printf(
          "L'age doit etre compris de 0 a 130 ans. Veuillez le renseigner a "
          "nouveau \n");
      printf("AGE : ");
      scanf("%d", &contacts[i].age);
      getchar();
    }

    printf("contact %d enregistre avec succes \n", i + 1);
  }

  return contacts;
}
void recherchercontactParNom(Contact* p, int a) {
  char recherche[50];
  int j = 0;

  printf("Veuillez saisir le nom d'un contact dont vous voulez rechercher : ");
  fgets(recherche, 50, stdin);

  for (int i = 0; i < a; i++) {
    if (strcmp(recherche, p[i].nom) == 0) {
      printf("\n");
      afficherContacts(&p[i], 1);
      j = 1;
    }
  }

  if (j == 0) {
    printf("Aucun contact trouve\n");
  }
}

void rechercherContactParAge(Contact* p, int a) {
  int j = 0;
  for (int i = 0; i < a; i++) {
    if (p[i].age >= 30) {
      printf("/n");
      afficherContacts(&p[i], 1);
      j = 1;
    }
  }
  if (j == 0) {
    printf("Aucun contact n'a une age strictement superieure a 30 ans ");
  }
}
int main() {
  int nombreContact;
  Contact* mesContacts;
  nombreContact = nombreDeContact();
  mesContacts = enregistrerContact(nombreContact);
  printf("\nVos contacts enregistrez sont : \n");
  afficherContacts(mesContacts, nombreContact);
  recherchercontactParNom(mesContacts, nombreContact);
  rechercherContactParAge(mesContacts, nombreContact);
  printf(
      "Liberations des espaces reservees. Alors merci a qui? Merci a free().");
  free(mesContacts);
  return 0;
}