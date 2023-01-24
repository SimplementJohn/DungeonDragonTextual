#ifndef POTION_H
#define POTION_H

#include <iostream>
#include <string>
#include "Objet.h"

class Potion : public Objet                           //creation de la classe Potion
{
private:

public: 
    Potion(int lanceDe3);                           //Constructeur de l'objet Potion
    ~Potion();                          //Destructeur de l'objet Potion
    int soin;
    std::string nomPotion;
};

#endif //Potion