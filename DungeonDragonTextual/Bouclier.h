#ifndef BOUCLIER_H
#define BOUCLIER_H

#include <iostream>
#include "Objet.h"

class Bouclier : public Objet                           //creation de la classe Bouclier
{
private:

public: 
    Bouclier();                           //Constructeur de l'objet Bouclier
    ~Bouclier();                          //Destructeur de l'objet Bouclier
};

#endif //Bouclier