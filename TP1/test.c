#include <stdio.h>

int main(void){
     int n1 , n2  , quotient;
  float frac , division ,l ;
printf ("veuiller saisir la valeur de n1 \n"); 
  scanf("%d", &n1 );
printf("veuiller saisir la valeur de n2 \n" );
scanf("%d", &n2 )  ;
   division =(float)n1/n2;
   quotient =n1/n2;
   frac= (float)division - quotient;
   printf("la partie entiere de n1/n2 est %d et la partie fractionnaire de n1/n2 est %f\n", quotient, frac);
   printf("veuiller saisir la valeur de l \n");
   scanf("%f",&l);
   int b= (int)(l*frac)%256;
   printf("la valeur de b est %d",b);
   return 0 ;
}