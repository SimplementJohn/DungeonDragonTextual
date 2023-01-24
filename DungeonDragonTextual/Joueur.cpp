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

void Joueur::ajouterObjet(int objet){
    if (tailleTableau < 10) {
        inventaire_tableau[tailleTableau] = objet;
        nombreObjetsInventaire++;
        tailleTableau++;
        }
    else {
        std::cout << "Tableau plein, impossible d'ajouter un nouvel objet.";
    }
}

void supprimerObjet() {}