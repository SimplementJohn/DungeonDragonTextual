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
    void creationPsedo();
};

#endif //JOUEUR