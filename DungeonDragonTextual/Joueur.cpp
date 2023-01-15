#include "Joueur.h"

Joueur::Joueur() //création de l'objet entite, dans la classe entite
{
    pointDeVie = 100;

}

Joueur::~Joueur() //destruction de l'objet entite, dans la classe entite
{
}

void Joueur::creationPsedo()
{

    std::cout << "Quel Psedo voulez vous ?";        //affichage
    std::cin >> psedo;  

}