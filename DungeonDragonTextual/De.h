#ifndef DE_H
#define DE_H

#include <iostream>

#define SIXFACE 6
#define DEUXFACE 2

class De                            //creation de la classe dé 
{
private:

    int resultat;
    int nbDeFace;            //notre de auras toujours 6 faces

public: 
    De(int nombreDeFace);                           //Constructeur de l'objet dé
    ~De();                          //Destructeur de l'objet dé

    int lancerDe();    //Création de la méthode lancé de dé

};

#endif //DE_H