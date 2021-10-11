//
// Created by farbe on 04/10/2021.
//
#include "structure.h"
#include <stdio.h>
#define T_M 100

/* Fonction qui permet de saisir un nombre rationelle en y entrant le numerateur et le denominateur.
 * Paramètres :
 * - OUT : un nombre rationelle
 */
NombreRationnel SaisirNbRa(){
    NombreRationnel nbRat;
    int a=0,b=0;
    printf("entrer le numerateur\n");
    scanf("%d",&a);
    printf("entrer le denominateur\n");
    scanf("%d",&b);
    nbRat.num=a;
    nbRat.den=b;
    return nbRat;
}
/* Fonction qui affiche un nombre rationnelle.
 * Paramètres :
 * - IN : un nombre rationnelle
  * */
void Afficher(NombreRationnel x){
    printf("%d / %d \n",x.num,x.den);
    return;
}
/* Fonction qui multiplie 2 chiffre.
 * Paramètres :
 * - IN : 2 entier
 * - OUT : 1 entier resulta de la multiplication des entre
 * */
int MultSimple(int nbA,int nbB){
    return nbA*nbB;
}
/* Fonction qui multiplie 2 nombre rationelle.
 * Paramètres :
 * - IN : 2 entier
 * - OUT : 1 entier resulta de la multiplication des entre
 * */
NombreRationnel Multiplication(NombreRationnel nbA,NombreRationnel nbB){
    NombreRationnel mult;
    mult.num= MultSimple(nbA.num , nbB.num);
    mult.den= MultSimple(nbA.den,nbB.den);
    return mult;
}

/* Fonction qui additionne 2 nombre rationelle.
 * Paramètres :
 *
 * - IN : taille, la taille logique du tableau tab
 * - OUT : la plus grande valeur du tableau tab une fois doublé
 */
NombreRationnel Addition(NombreRationnel aAdd1, NombreRationnel aAdd2){
    NombreRationnel added;
    added.num= MultSimple(aAdd1.num,aAdd2.den) + MultSimple(aAdd2.num,aAdd1.den);
    added.den= MultSimple(aAdd1.den,aAdd2.den);
    return added;
}

/* Fonction qui determine le pgcd entre le numerateur et le denominateur d'un nombre rationelle.
 * Paramètres :
 * - IN : 1 nombre rationelle
 * - OUT : pgcd entre num et den
 * */
int Pgcd(NombreRationnel nb){
    int min= nb.num>nb.den ? nb.den : nb.num;
    int max= nb.num>nb.den ? nb.num : nb.den;
    int i=min, m1=min;
    do{
        if (min%i==0){
            m1=i;
        }
        i=i-1;
    } while (max% m1 !=0);
    m1= m1 != 1 ? m1 : 0;
    return m1;
}
/* Fonction qui simplifie un nombre rationelle a l'aide du pgcd.
 * Paramètres :
 * inout : pgcd
 * - IN : 1 nombre rationelle
 * - OUT : le nombre rationnelle simplifier
 * */
NombreRationnel Simplificateur(NombreRationnel aSimpli){//aSimpli=aSimplifier
    int divi=1;
    divi=Pgcd(aSimpli);
    if (divi==0){
       return aSimpli;
    }
    else{
        aSimpli.den=aSimpli.den/divi;
        aSimpli.num=aSimpli.num/divi;
        return aSimpli;
    }
}
// exo 2
int tabT_M[T_M];
/* Fonction qui demande un nombre de case a attribuer a une liste et la remplis selon les chiffre donner par l'utilisateur.
 * Paramètres :
 * - INOUT : tableau de 100( T_M) case
 * */
void MaxTableau(){
    int i=0;
    int max;
    int nbrCase=1;
    printf("combien de nombre avez vous besoin?\n");
    scanf("%d",&nbrCase);
    switch (nbrCase>100) {
        case 1:
            printf("ce programme ne support pas au-dessus de 100 case\n");
            return ;
        default:
            printf("entrer un nombre\n");
            scanf("%d",&max);
            tabT_M[0]=max;
            for (i=1;i<nbrCase;i++){
                printf("entrer un nombre\n");
                scanf("%d",&tabT_M[i]);
                max=max>tabT_M[i] ? max : tabT_M[i];
            }
            printf("%d\n",max);
            return ;
    }

}
//exo 3
int tab3x4[3][4];
int tab12[12];
/* Fonction qui demande un nombre de case a attribuer a une liste et la remplis selon les chiffre donner par l'utilisateur.
 * Paramètres :
 * - INOUT : tableau de 3ligne et 4colonne et 1 tableau de 12 element
 * */
void CopyCall(){
    int i=0, j=0;
    for (i=0;i<3;i++){
        printf("\n");
        for (j=0;j<4;i++){
            printf("entrer un nombre\n");
            scanf("%d",&tab3x4[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for (j=0;j<4;i++){
            tab12[i*3+j]=tab3x4[i][j];
        }
    }
    return;
}
/* Fonction qui affiche 2 tableau l'un de 3 ligne et 4 colonne l'autre avec 12 element.
 * Paramètres :
 * - INOUT : tableau de 3ligne et 4colonne et 1 tableau de 12 element
 * */
void afficherTab3x4PuisTab12(int tab3x4[3][4],int tab12[12]){
    int i=0,j=0;
    for (i=0;i<3;i++){
        printf("\n");
        for (i=0;i<3;j++)
            printf("%d ",tab3x4[i][j]);
    }
    for (i=0;i<12;i++){
        printf("%d",tab12[i]);
    }
    return;
}