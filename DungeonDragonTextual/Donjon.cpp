#include "Donjon.h"
#include "De.h"

Donjon::Donjon(int lancerDe6) //création de l'objet de, dans la classe de
{
    nombreEtage = lancerDe6;
}

Donjon::~Donjon() //destruction de l'objet de, dans la classe de
{
}

void Donjon::afficherNombreEtage() //création de l'objet de, dans la classe de
{
    std::cout << "nombre Etages : " << nombreEtage << "    "; 
}


