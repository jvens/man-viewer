/*
  ==============================================================================

    MainMenuBar.cpp
    Created: 8 Jul 2014 9:23:46pm
    Author:  vens

  ==============================================================================
*/

#include "MainMenuBar.h"


MainMenuBarModel::MainMenuBarModel(ApplicationCommandManager* applicationCommandManager)
{
    commandManager = applicationCommandManager;
}

StringArray MainMenuBarModel::getMenuBarNames()
{
    const char* const names[] = { "FILE", "EDIT", "VIEW", "SETTINGS", "HELP", nullptr };
    return StringArray (names);
}

PopupMenu MainMenuBarModel::getMenuForIndex (int /*topLevelMenuIndex*/, const String& menuName)
{
    PopupMenu menu;
    if(menuName == "FILE")
    {
        //menu.addCommandItem (commandManager, CommandIDs::newPage,"New Page");
        menu.addItem(1, "New Page");
    }
    else if(menuName == "EDIT")
    {
        
    }
    return menu;
}

void MainMenuBarModel::menuItemSelected (int menuItemID, int /*topLevelMenuIndex*/)
{
    //getApp().handleMainMenuCommand (menuItemID);
}
