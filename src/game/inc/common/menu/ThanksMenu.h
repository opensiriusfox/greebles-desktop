#ifndef THANKS_MENU_H
#define THANKS_MENU_H

#include "menu/BaseMenu.h"

// Shorthand for adding menu choices
#define ADD_TM_MC(x, y, w, h, hover, clicked) menuChoices.push_back(new MenuChoice{ {x, y, w, h}, hover, clicked, CID_MENU_THANKS_HOVER, CID_MENU_THANKS_PRESSED })

class ThanksMenu : public BaseMenu
{
public:
    
    /**
     * Constructor
     */
    ThanksMenu();

    /**
     * Destructor
     */
    ~ThanksMenu();

    /**
     * This method takes care of drawing the idle texture
     * for the main menu. Individual MenuChoices draw the 
     * hover and pressed stages.
     */
    virtual void Render();

};

#endif