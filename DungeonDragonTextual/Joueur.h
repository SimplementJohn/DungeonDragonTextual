#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <string>
#include "Entite.h"

class Joueur : public Entite                         //creation de la classe Fille Joueur
{
private:
public: 
    Joueur();                           //Constructeur de joueur
    ~Joueur();                          //Destructeur de joueur
    std::string psedo;
    int inventaire_tableau[10];         //création d'un inventaire du joueur sur 10 emplacement
    int tailleTableau;
    int nombreObjetsInventaire;

    void creationPsedo();
    void ajouterObjet(int objet); 
    void supprimerObjet();
};

#endif //JOUEUR