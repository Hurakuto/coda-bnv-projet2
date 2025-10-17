#include <stdio.h>
#include <stdlib.h>

void print_tab(char tab[9]){
    printf(
        "\n %c | %c | %c\n ---------\n %c | %c | %c\n ---------\n %c | %c | %c\n\n",       //affichage du jeu 
        tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8]);
}

void win_or_lose(char tab[9]){

    int compteur=0;
    int i=0;

    if (tab[0]=='O'&&tab[0]==tab[1]&&tab[1]==tab[2]){ // O | O | O 
        printf("\nVous avez gagné !\n");              //   |   |
        exit(0);                                      //   |   |   -> gagné
    }

    if (tab[3]=='O'&&tab[3]==tab[4]&&tab[4]==tab[5]){ //   |   |
        printf("\nVous avez gagné !\n");              // O | O | O
        exit(0);                                      //   |   |   -> gagné
    }

    if (tab[6]=='O'&&tab[6]==tab[7]&&tab[7]==tab[8]){ //   |   |
        printf("\nVous avez gagné !\n");              //   |   |  
        exit(0);                                      // O | O | O -> gagné
    }

    if (tab[0]=='O'&&tab[0]==tab[3]&&tab[3]==tab[6]){ // O |   |
        printf("\nVous avez gagné !\n");              // O |   |
        exit(0);                                      // O |   |   -> gagné
    }

    if (tab[1]=='O'&&tab[1]==tab[4]&&tab[4]==tab[7]){ //   | O |
        printf("\nVous avez gagné !\n");              //   | O |
        exit(0);                                      //   | O |   -> gagné
    }

    if (tab[2]=='O'&&tab[2]==tab[5]&&tab[5]==tab[8]){ //   |   | O
        printf("\nVous avez gagné !\n");              //   |   | O
        exit(0);                                      //   |   | O -> gagné
    }
    
    if (tab[0]=='O'&&tab[0]==tab[4]&&tab[4]==tab[8]){ // O |   |
        printf("\nVous avez gagné !\n");              //   | O |
        exit(0);                                      //   |   | O -> gagné
    }

    if (tab[2]=='O'&&tab[2]==tab[4]&&tab[4]==tab[6]){ //   |   | O
        printf("\nVous avez gagné !\n");              //   | O |
        exit(0);                                      // O |   |   -> gagné
    }

    if (tab[0]=='X'&&tab[0]==tab[1]&&tab[1]==tab[2]){ // O | O | O 
        printf("\nVous avez perdu...\n");             //   |   |
        exit(0);                                      //   |   |   -> perdu
    }

    if (tab[3]=='X'&&tab[3]==tab[4]&&tab[4]==tab[5]){ //   |   |
        printf("\nVous avez perdu...\n");             // O | O | O
        exit(0);                                      //   |   |   -> perdu
    }

    if (tab[6]=='X'&&tab[6]==tab[7]&&tab[7]==tab[8]){ //   |   |
        printf("\nVous avez perdu...\n");             //   |   |  
        exit(0);                                      // O | O | O -> perdu
    }

    if (tab[0]=='X'&&tab[0]==tab[3]&&tab[3]==tab[6]){ // O |   |
        printf("\nVous avez perdu...\n");             // O |   |
        exit(0);                                      // O |   |   -> perdu
    }

    if (tab[1]=='X'&&tab[1]==tab[4]&&tab[4]==tab[7]){ //   | O |
        printf("\nVous avez perdu...\n");             //   | O |
        exit(0);                                      //   | O |   -> perdu
    }

    if (tab[2]=='X'&&tab[2]==tab[5]&&tab[5]==tab[8]){ //   |   | O
        printf("\nVous avez perdu...\n");             //   |   | O
        exit(0);                                      //   |   | O -> perdu
    }
    
    if (tab[0]=='X'&&tab[0]==tab[4]&&tab[4]==tab[8]){ // O |   |
        printf("\nVous avez perdu...\n");             //   | O |
        exit(0);                                      //   |   | O -> perdu
    }

    if (tab[2]=='X'&&tab[2]==tab[4]&&tab[4]==tab[6]){ //   |   | O
        printf("\nVous avez perdu...\n");             //   | O |
        exit(0);                                      // O |   |   -> perdu
    }

    while (compteur!=9){
        if (tab[compteur]!=' '){
            i++;
        }
        compteur++;
    }

    if (i==9){
        printf("\nÉgalité\n");
        exit(0);
    }
}