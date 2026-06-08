#include <stdio.h>

int main(void)
{
    const int jeudi = 3;
    const int premierAvril = 1;
    const int dureeMoisAvril = 30;
    const int quatreMai = 4;
    const int differenceDate = dureeMoisAvril - premierAvril + quatreMai;
    printf("Il y a %d jours entre le %der Avril et le %d Mai    \n"
        , differenceDate, premierAvril, quatreMai);
    const int numeroJourneeQuatreMai = (differenceDate + jeudi) % 7;
    const char* jourCorrespondant = (numeroJourneeQuatreMai==0) ? "Lundi" : 
                                   (numeroJourneeQuatreMai==1) ? "Mardi" : 
                                   (numeroJourneeQuatreMai==2) ? "Mercredi" : 
                                   (numeroJourneeQuatreMai==3) ? "Jeudi" : 
                                   (numeroJourneeQuatreMai==4) ? "Vendi" : 
                                   (numeroJourneeQuatreMai==5) ? "Samedi" : "Dimanche";
    printf("Le jour correspondant au 4 mai 2004 est : %s qui est le jour numero : %d \n"
        , jourCorrespondant , numeroJourneeQuatreMai);
    return 0;
}