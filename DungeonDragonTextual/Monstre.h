#ifndef MONSTRE_H
#define MONSTRE_H

#include <iostream>
#include "Entite.h"

class Monstre : public Entite                         //creation de la classe Fille Monstre 
{
private:
public: 
    Monstre(int lanceDe6c);                           //Constructeur de Monstre
    ~Monstre();                          //Destructeur de Monstre
};


#endif //MONSTRE_H