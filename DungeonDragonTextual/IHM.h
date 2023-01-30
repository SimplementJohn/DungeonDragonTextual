#ifndef IHM_H
#define IHM_H

#include <iostream>
#include <string>
#include <stdint.h>

#define CHOIX1 1
#define CHOIX2 2
#define CHOIX3 3

class IHM
{
private:
public: 
    IHM();                           //Constructeur de l'objet IHM
    ~IHM();                          //Destructeur de l'objet IHM
    void effacerTerminal(void);
    void afficherMenu(void);
    void afficherInterface(void);
    void afficherJoueur(void);
    void afficherJoueurEtChateau(void);
    //void afficherMonstre();
    void afficherMonstreEtJoueur(void);
    int attenteChoixUtilisateur(void);
    void afficherCredit(void);
    void afficherGameOver(void);   
    void afficherMonstreAttaqueJoueur();                  
    void afficherJoueurAttaqueMonstre();   
    int attenteChoixUtilisateurMenu();
    void afficherChargementFini();
};

#endif //IHM