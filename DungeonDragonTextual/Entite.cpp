#include "Entite.h"
#include "De.h"

Entite::Entite() //création de l'objet entite, dans la classe entite
{
    pointDeVie = 100;
}

Entite::~Entite() //destruction de l'objet entite, dans la classe entite
{
}

void Entite::afficherPointDeVie(bool entite)
{
    if (entite == 0)
    {
        std::cout << "Voici le nombre de point de vie : " << pointDeVie << " du joueur. "; 
    }else{
        std::cout << "Voici le nombre de point de vie : " << pointDeVie << " du Monstre. "; 
    }
    

}

bool Entite::estEnVie()
{
    if(pointDeVie >= 1){
        std::cout << " L'entite est Vivant, "; 
        enVie = 1;                  //Stocke l'état de vie de l'entité
        return 1;
    }else{
        std::cout << " L'entite est Mort, ";
        enVie = 0;                  //Stocke l'état de vie de l'entité
        return 0;
    }
}

int Entite::attaque(int pointDeVieCible, int lanceDe6Joueur, int lanceDe6Entite){
    if (lanceDe6Joueur >= lanceDe6Entite){          //Si le joueur à un lancé supérieur ou égal au monstre il le touche
        std::cout << "Le Joueur a reussi sont attaque, ";
        pointDeVieCible = pointDeVieCible - lanceDe6Joueur;
    }
    else{                                           //Sinon le monstre esquive
        std::cout << "Le Monstre a esquive ! "; 
    }
    return pointDeVieCible;                              //on renvoie le nombre de point de Vie
}