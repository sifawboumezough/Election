#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int NombPre;
    int NombElec;


    printf(" \t\t --Election Presidentielle--\n\n");
    // List présidents nommées aux élections présidentielles
    do {
        printf("----------------------------------------------Welcome----------------------------------------------\n");
        printf("Combient des Presidents nommees aux elections presidentielles (minimum 5): ");
        scanf("%d",&NombPre);
    }while( NombPre<5 );
    // We're Going To add a Variable that contains names of prisedents !
        char Pre[100] [10];
        for( int i=1 ; i<=NombPre ;i++ ){
            printf(" %d - Nom de President nomme aux elections : ",i);
            scanf("%s",Pre[i]);
            }
            printf("---------------------------------------------------------------------------------------\n");
            printf(" \t\tLa List Des Candidats Comme la Suite : \n");
            printf("---------------------------------------------------------------------------------------\n");
    // Affichage des  Candidats dans une liste !
            for ( int k=1 ; k<=NombPre; k++){
                printf(" -%d) : %s \n",k,Pre[k]);
            }
            printf("-----------------------------------------------------------------------------------------\n");
    // Combient D'electeurs + LES CIN des Voteurs !
            do {
                printf("Combient des Voteurs va Voter Sur les Condidats nommes aux elections :");
                scanf("%d",&NombElec);
            }while(NombElec<10);
            // Now We're going to add variable that contains CIN of Electeurs
                printf(" -----> CIN Des Voteurs \n");
            char CIN [8] [20];
            for(int j=1; j<=NombElec; j++) {
                printf("%d) : ",j);
                scanf(" %s",CIN[j]);
            }
            printf("---------------------------------------------------------------------------------------------------\n");
    // Affichage la list des CIN des Voteurs !
           for( int l=1 ; l<=NombElec ; l++){
            printf("CIN de %d est : %s \n\n",l,CIN[l]);

           }
         printf("```````````````````````````````````````````````````````````````````````````````````````````````````````\n");
         printf("```````````````````````````````````````````````````````````````````````````````````````````````````````\n");
    // Premier tour :
        // Vote began : Chaque electeur -------> Sur les Nombre des Presidents nommees aux selection !
        printf("Now You Are Going To Vote :");
        /*
        int VoteFor [NombPre];
        for(int i=1 ; i<=NombPre ; i++){
            printf("%d Electeur Voting For : %s");
            scanf(" %s",NombPre[i]);
        }


*/













    return 0;
}
