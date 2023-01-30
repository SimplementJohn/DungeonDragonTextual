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

    choixUtilisateur = IHM.attenteChoixUtilisateurMenu();

    
    
    if (choixUtilisateur == 1)         //Choix 1 Lancement Jeux
        {

            IHM.effacerTerminal();
            IHM.afficherJoueurEtChateau();
            IHM.afficherChargementFini();



            //Creation du Donjon de jeu
            Donjon monDonjon(monDe6.lancerDe()); 


            IHM.effacerTerminal();                                  //On rafrechi le terminal en effacent tout
            IHM.afficherJoueurEtChateau();                          //On affiche le joueur et le chateau

            for (int i = 1 ; i <= monDonjon.nombreEtage; i++)       //Pour chaque étage jouer le jeu
            {
                IHM.effacerTerminal();                              //On rafrechi le terminal en effacent tout
                IHM.afficherMonstreEtJoueur();                      //On affiche le joueur et le monstre
                IHM.attenteChoixUtilisateur();

                Joueur1.attaque(Monstre1.pointDeVie, monDe6.lancerDe(), monDe6.lancerDe());
                Monstre1.afficherPointDeVie(MONSTRE);
                IHM.afficherJoueurAttaqueMonstre();
        
            }
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