#include "De.h"

#include "Donjon.h"

#include "Entite.h"              //Classe Mere
#include "Joueur.h"              //Classe Fille
#include "Monstre.h"             //Classe Fille
#include "MonstreElite.h"        //Classe Fille

#include "Objet.h"               //Classe Mere
#include "Potion.h"              //Classe Fille
#include "Arme.h"                //Classe Fille
#include "Bouclier.h"            //Classe Fille

int main()
{
    //Creation de nos dé de jeu
    De monDe6(SIXFACE);                                         
    De monDe2(DEUXFACE);

    //Creation du Donjon de jeu
    Donjon monDonjon(monDe6.lancerDe()); 
    monDonjon.afficherNombreEtage();


    //Creation du Perssonage de jeu
    //Entite monEntite;                           
    
    Joueur Joueur1;
    //Joueur1.estEnVie();
    //Joueur1.creationPsedo();

    //Creation des monstres du Dungeon  
    Monstre Monstre1(monDe6.lancerDe());
    Monstre1.afficherPointDeVie();

    
    
    
    
    
    // J'arrive pas a récupérer le nombreEtage; du donjon 


}