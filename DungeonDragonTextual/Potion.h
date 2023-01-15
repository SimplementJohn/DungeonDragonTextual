#ifndef POTION_H
#define POTION_H

#include <iostream>
#include "Objet.h"

class Potion : public Objet                           //creation de la classe Potion
{
private:

public: 
    Potion();                           //Constructeur de l'objet Potion
    ~Potion();                          //Destructeur de l'objet Potion
};

#endif //Potion