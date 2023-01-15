#ifndef ENTITE_H
#define ENTITE_H

#include <iostream>

class Entite                            //creation de la classe Entite
{
private:

public: 
    Entite();                           //Constructeur de l'entite
    ~Entite();                          //Destructeur de l'entite

    int pointDeVie;

    bool enVie;
    bool estEnVie();
    
    void afficherPointDeVie();

};

#endif //ENTITE_H