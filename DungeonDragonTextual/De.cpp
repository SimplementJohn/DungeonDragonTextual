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
    //srand(time(0));             //necessaire pour la fonction //chercher temps a la ms
    auto now = std::chrono::steady_clock::now().time_since_epoch();
    auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(now).count();
    srand(microseconds);
    resultat = (rand() % nbDeFace) + 1; 
    return resultat;
}

