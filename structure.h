//
// Created by farbe on 04/10/2021.
//

#ifndef UNTITLED1_STRUCTURE_H
#define UNTITLED1_STRUCTURE_H
typedef struct {
    int num,den;
}NombreRationnel;

// debut fonction exo 1
int Pgcd(NombreRationnel nb);
NombreRationnel SaisirNbRa();
int MultSimple(int nbA,int nbB);
NombreRationnel Multiplication(NombreRationnel nbA,NombreRationnel nbB);
NombreRationnel Simplificateur(NombreRationnel aSimpli);
NombreRationnel Addition(NombreRationnel aAdd1, NombreRationnel aAdd2);
void Afficher(NombreRationnel x);
//fin fonction exo 1
// debut exo 2
void MaxTableau();
//fin exo 2
//debut exo 3
void CopyCall();
void afficherTab3x4PuisTab12();
//fin exo 3
#endif //UNTITLED1_STRUCTURE_H
