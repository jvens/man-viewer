/*
  ==============================================================================

    MainMenuBar.h
    Created: 8 Jul 2014 9:23:46pm
    Author:  vens

  ==============================================================================
*/

#ifndef MAINMENUBAR_H_INCLUDED
#define MAINMENUBAR_H_INCLUDED

#include "JuceHeader.h"
#include "CommandIDs.h"

class MainMenuBarModel : public MenuBarModel
{
public:
    MainMenuBarModel(ApplicationCommandManager* applicationCommandManager);
    StringArray getMenuBarNames();
    PopupMenu getMenuForIndex (int /*topLevelMenuIndex*/, const String& menuName);
    void menuItemSelected (int menuItemID, int /*topLevelMenuIndex*/);
private:
    ScopedPointer<ApplicationCommandManager> commandManager;
};



#endif  // MAINMENUBAR_H_INCLUDED
