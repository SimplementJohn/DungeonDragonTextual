#include "De.h"

#include "IHM.h"

#include "Donjon.h"

#include "Entite.h"              //Classe Mere
#include "Joueur.h"              //Classe Fille
#include "Monstre.h"             //Classe Fille
#include "MonstreElite.h"        //Classe Fille

#include "Objet.h"               //Classe Mere
#include "Potion.h"              //Classe Fille
#include "Arme.h"                //Classe Fille
#include "Bouclier.h"            //Classe Fille

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
int choixUtilisateur = 0;                  //Creation de notre variable choixUtilisateur que l'on utilisaera plus tard
//////////////////////////////////////////////////////////////////////////////////////////////////////////////    
int main()
{

    //Creation de L'IHM
    IHM IHM;                //Creation de l'objet IHM dans la classe IHM
    IHM.effacerTerminal();  //Effacement du terminal pour eviter d'avoir du texte parasite
    IHM.afficherMenu();     //Affichage du logo et des choix utilisateur

    //Creation de nos dé de jeu
    De monDe6(SIXFACE); 
    De monDe6Joueur(SIXFACE); 
    De monDe6Monstre(SIXFACE);                                         
    De monDe2(DEUXFACE);
    De monDe3(TROISFACE);

    //Creation du Donjon de jeu
    Donjon monDonjon(monDe6.lancerDe()); 

    //Creation du Perssonage de jeu                               
    Joueur Joueur1;

    //Creation des monstres du Dungeon  
    Monstre Monstre1(monDe6.lancerDe());

    //pour sortir de l'initialisation
    choixUtilisateur = IHM.attenteChoixUtilisateur();

    if (choixUtilisateur == 0)         //Choix par défault c'est la Generation du jeu, Donjon, Joueur etc
    {



        

    }  
    
    if (choixUtilisateur == 1)         //Choix 1 Lancement du Jeu
        {

            IHM.effacerTerminal();                  //On rafrechi le terminal en effacent tout
            IHM.afficherJoueurEtChateau();          //On affiche le joueur et le chateau

            //Joueur1.creationPsedo();
                    
            Monstre1.afficherPointDeVie();
            Joueur1.attaque(Monstre1.pointDeVie, monDe6Joueur.lancerDe(), monDe6Monstre.lancerDe());
            Monstre1.afficherPointDeVie();

        }   
        
    if (choixUtilisateur == 2)         //Choix 2 affichage des credits
    {
        IHM.effacerTerminal();
        IHM.afficherCredit();
    }
    
    if (choixUtilisateur ==4)          //Jeu Debuugage
    {

        



    }
    
}