#include "Monstre.h"
#include "Donjon.h"

Monstre::Monstre(int lanceDe6c) //création de l'objet entite, dans la classe entite
{
    pointDeVie = lanceDe6c * lanceDe6c;              //Un monstre est generé avec un lace de de 6
}

Monstre::~Monstre() //destruction de l'objet entite, dans la classe entite
{
}


