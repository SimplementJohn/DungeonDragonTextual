#include "De.h"

De::De(int nombreDeFace) //création de l'objet de, dans la classe de
{
    nbDeFace = nombreDeFace;
}

De::~De() //destruction de l'objet de, dans la classe de
{
}

int De::lancerDe() //création de l'objet de, dans la classe de
{
    srand(time(0));             //necessaire pour la fonction
    resultat = (rand() % nbDeFace) + 1; 
    return resultat;
}

