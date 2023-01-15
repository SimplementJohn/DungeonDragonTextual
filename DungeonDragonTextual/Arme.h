#ifndef ARME_H
#define ARME_H

#include <iostream>
#include "Objet.h"

class Arme : public Objet                           //creation de la classe Arme
{
private:

public: 
    Arme();                           //Constructeur de l'objet Arme

    ~Arme();                          //Destructeur de l'objet Arme

};

#endif //Arme