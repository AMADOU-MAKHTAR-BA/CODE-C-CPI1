#include <stdio.h>

int main(void){

   const float pi = 3.14;
   float rayon ;
   printf("Veillez renseignez le rayon(en metre) du cercle pour lequel vous voulez calculer le perimetre et la surface\n");
   scanf("%f" , &rayon);
   const float perimetre = 2*pi*rayon;
   const float surface = pi*rayon*rayon;
   printf("Le perimetre du cercle correspondant au rayon saisi %.3fm est : %.3f  et sa surface vaut : %.3f\n" ,
     rayon , perimetre , surface);
}