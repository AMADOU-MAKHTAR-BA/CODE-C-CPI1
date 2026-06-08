#include <stdio.h>

int main()
{
    char vote, continuer, choix;
    float pourcVoteA, pourcVoteB;
    int voteA = 0, voteB = 0, totalVote = 0;

    printf("Vous allez participer a un vote entre deux particpants : A( a ) et B( b ) \n \n");
    do
    {
        printf("Voulez vous y participer ? Taper O (pour OUI) et N (pour NON) : \n ");
        scanf("%c", &choix);
    } while (choix != 'O' && choix != 'o' &&
             choix != 'N' && choix != 'n');
    if (choix == 'O' || choix == 'o')
    {
        do
        {
            printf("Votez pour A( a ) ou B( b ) : \n");
            scanf(" %c", &vote);

            while (vote != 'A' && vote != 'a' && vote != 'B' && vote != 'b')
            {
                printf("Erreur. Tapez A( a ) ou B( b ) pour voter : \n");
                scanf(" %c", &vote);
            }
            if (vote == 'A' || vote == 'a')
                voteA++;
            else
                voteB++;

            printf("Voulez vous continuer de voter ? Taper O (pour OUI) et N (pour NON) : \n");
            scanf(" %c", &continuer);

            while (continuer != 'O' && continuer != 'o' &&
                   continuer != 'N' && continuer != 'n')
            {
                printf("Erreur. Tapez O ou N : \n");
                scanf(" %c", &continuer);
            }

        } while (continuer == 'O' || continuer == 'o');

        totalVote = voteA + voteB;

        pourcVoteA = (voteA * 100.0) / totalVote;
        pourcVoteB = (voteB * 100.0) / totalVote;

        if (voteA > voteB)
            printf("Le participant A( a ) gagne ave une pourcentage de  %.2f%% apres %d votes \n", pourcVoteA, totalVote);
        else if (voteB > voteA)
            printf("Le participant B( b ) gagne avec une pourcentage de %.2f%% apres %d votes\n", pourcVoteB, totalVote);
        else
            printf("Egalite apres %d votes\n", totalVote);
    }
    else
    {
        printf("Aucun vote n'a ete enregistre .\n \n");
    }
    return 0;
}
