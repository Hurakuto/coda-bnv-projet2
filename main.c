#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tic-tac-toe.h"

int main(){
    int compteur=0;
    
    char tab[9];
    
    int tour=0;
    int joueur;

    int num[9];

    for (int i = 0; i < 9; i++){
        tab[i] = ' ';
    }

    printf("\nBienvenue au jeu du morpion !\n\n(Vous êtes les ronds !)\n\n");

    printf("\n 0 | 1 | 2\n ---------\n 3 | 4 | 5\n ---------\n 6 | 7 | 8\n\n");

    while (compteur<9){

        
        srand(time(NULL));

        print_tab(tab);
        win_or_lose(tab);



        if (tour==0){

            printf("\nChoisissez où jouer (0 à 8) : ");
            scanf("%d", &joueur);

            while (num[joueur]==joueur || joueur>8 || joueur<0){
                while (getchar()!='\n'){}

                printf("\nChiffre incorrect ou déjà utilisé !\nChoisissez où jouer (0 à 8) : \n");
                scanf("%d", &joueur);
            }

            tab[joueur]='O';

            num[joueur]=joueur;

            tour=1;
        }

        else {      //'tour' est égal à 0 si le if précédent n'a pas été effectué

            printf("\nAu tour de l'ordinateur.\n");

            int random_number = rand() % 8 + 0;

            while (num[random_number]==random_number){
	            random_number = rand() % 8 + 0;
            }

            tab[random_number]='X';

            num[random_number]=random_number;

            tour=0;
        }
    }

    print_tab(tab);
    win_or_lose(tab);

    exit(0);
}    

