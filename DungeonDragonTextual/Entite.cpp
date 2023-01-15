#include "Entite.h"

Entite::Entite() //création de l'objet entite, dans la classe entite
{
    pointDeVie = 100;
}

Entite::~Entite() //destruction de l'objet entite, dans la classe entite
{
}

void Entite::afficherPointDeVie()
{
    std::cout << "Voici le nombre de point de vie : " << pointDeVie << " de l'entite"; 
}

bool Entite::estEnVie()
{
    if(pointDeVie >= 1){
        std::cout << "Vivant"; 
        enVie = 1;                  //Stocke l'état de vie de l'entité
        return 1;
    }else{
        std::cout << "Mort";
        enVie = 0;                  //Stocke l'état de vie de l'entité
        return 0;
    }
}