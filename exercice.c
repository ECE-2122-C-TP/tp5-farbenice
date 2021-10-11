//
// Created by farbe on 11/10/2021.
//
#include "structure.h"
#include <stdio.h>
void exercice1(){
    NombreRationnel nbr1, nbr2;
    printf("entrer un 1er nombre rationnelle\n");
    nbr1=SaisirNbRa();
    printf("entrer un 2nd nombre rationnelle\n");
    nbr2=SaisirNbRa();
    printf("le resultat de la multiplication est \n");
    Afficher(Simplificateur(Multiplication(nbr1,nbr2)));
    printf("le resultat de l'addition est \n");
    Afficher(Simplificateur(Addition(nbr1,nbr2)));
    return;
}
void exercice2(){
    MaxTableau();
}
void exercice3(){// j'ai un problème dessus mais jsp ou est le problème
    CopyCall();
    afficherTab3x4PuisTab12();
}