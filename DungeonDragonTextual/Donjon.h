#ifndef DONJON_H
#define DONJON_H

class Donjon                           //creation de la classe dé 
{
private:

public: 
    Donjon(int lanceDe6);                           //Constructeur de l'objet donjon
    ~Donjon();                                     //Destructeur de l'objet donjon

    void afficherNombreEtage();

    float nombreEtage;
    bool nombreMonstreEtage1;
    bool nombreMonstreEtage2;
    bool nombreMonstreEtage3;
    bool nombreMonstreEtage4;
    bool nombreMonstreEtage5;
    bool nombreMonstreEtage6;

};

#endif //DONJON_H