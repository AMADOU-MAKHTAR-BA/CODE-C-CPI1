#include <math.h>
#include <stdio.h>

// Structure Point
typedef struct {
  float x;
  float y;
} Point;

// Initialisation
Point initialiserPoint(float x, float y) {
  Point p;
  p.x = x;
  p.y = y;
  return p;
}

// Distance
float distance(Point a, Point b) {
  float distance = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
  return distance;
}

// Structure Carré
typedef struct {
  Point coinBasGauche;
  float cote;
} Carre;

// Vérifier appartenance
int estDansCarre(Point p, Carre c) {
  if (p.x >= c.coinBasGauche.x && p.x <= c.coinBasGauche.x + c.cote &&
      p.y >= c.coinBasGauche.y && p.y <= c.coinBasGauche.y + c.cote) {
    return 1;
  }
  return 0;
}

// Surface
float surfaceCarre(Carre c) {
  float surface = c.cote * c.cote;
  return surface;
}

int main() {
  Point A, B, p;
  Carre carre;
  float abs1, abs2, ord1, ord2, abs3, ord3, longueurSegment;
  int appartientAuCarre;
  // Segment
  printf("Abscisse point A : ");
  scanf("%f", &abs1);
  printf("Ordonnee point A : ");
  scanf("%f", &ord1);

  printf("Abscisse point B : ");
  scanf("%f", &abs2);
  printf("Ordonnee point B : ");
  scanf("%f", &ord2);

  A = initialiserPoint(abs1, ord1);
  B = initialiserPoint(abs2, ord2);

  longueurSegment = distance(A, B);
  printf("Distance AB = %.2f\n", longueurSegment);

  // Carré
  printf("\nCoin bas gauche du carre :\n");
  printf("Abscisse : ");
  scanf("%f", &abs3);
  printf("Ordonnee : ");
  scanf("%f", &ord3);

  carre.coinBasGauche = initialiserPoint(abs3, ord3);

  printf("Longueur du cote : ");
  scanf("%f", &carre.cote);

  // Point à tester
  printf("\nPoint a tester :\n");
  printf("Abscisse : ");
  scanf("%f", &p.x);
  printf("Ordonnee : ");
  scanf("%f", &p.y);
  appartientAuCarre = estDansCarre(p, carre);
  if (appartientAuCarre)
    printf("Le point est dans le carre\n");
  else
    printf("Le point est hors du carre\n");

  printf("Surface du carre = %.2f\n", surfaceCarre(carre));

  return 0;
}