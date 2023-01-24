#include "Potion.h"

Potion::Potion(int lanceDe3) //création de l'objet Potion, dans la classe de
{
    if (lanceDe3 == 1)
    {
        soin = 10;
        nomPotion = "Potion Petite";
    }
    
    if (lanceDe3 == 2)
    {
        soin = 25;
        nomPotion = "Potion Moyene";
    }
    
    if (lanceDe3 == 3)
    {
        soin = 50;
        nomPotion = "Potion Grande";
    }
    
}

Potion::~Potion() //destruction de l'objet Potion, dans la classe de
{
}


