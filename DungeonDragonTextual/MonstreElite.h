#ifndef MONSTREELITE_H
#define MONSTREELITE_H

#include <iostream>
#include "Monstre.h"

class MonstreElite : public Monstre                         //creation de la classe Fille Monstre 
{
private:
public: 
    ~MonstreElite();                          //Destructeur de Monstre
    int vieMonstreEliteBoss;
    void attaqueSpeciale();
};

#endif //MONSTREElite_H