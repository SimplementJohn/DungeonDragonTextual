#ifndef ENTITE_H
#define ENTITE_H

#include <iostream>

#define JOUEUR 0
#define MONSTRE 1

class Entite                            //creation de la classe Entite
{
private:

public: 
    Entite();                           //Constructeur de l'entite
    ~Entite();                          //Destructeur de l'entite

    int pointDeVie;

    bool enVie;
    bool estEnVie();
    
    void afficherPointDeVie(bool entite);
    int attaque(int pointDeVie, int lanceDe6Joueur, int lanceDe6Entite);

};

#endif //ENTITE_H
