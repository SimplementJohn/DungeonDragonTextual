#ifndef IHM_H
#define IHM_H

#include <iostream>
#include <string>
#include <stdint.h>

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
    //void afficherMonstreEtJoueur(void);
    int attenteChoixUtilisateur(void);
    void afficherCredit(void);
};

#endif //IHM