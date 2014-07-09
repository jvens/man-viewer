/*
  ==============================================================================

    CommandIDs.h
    Created: 8 Jul 2014 11:09:51pm
    Author:  vens

  ==============================================================================
*/

#ifndef COMMANDIDS_H_INCLUDED
#define COMMANDIDS_H_INCLUDED


/**
    A namespace to hold all the possible command IDs.
*/
namespace CommandIDs
{
    enum
    {
        newPage                = 0x200010,
        open                   = 0x200020,
        closeDocument          = 0x200030,
        saveDocument           = 0x200040,
        saveDocumentAs         = 0x200041,

        closeProject           = 0x200051,
        saveProject            = 0x200060,
        saveAll                = 0x200080,
        openInIDE              = 0x200072,
        saveAndOpenInIDE       = 0x200073,

        showUTF8Tool           = 0x200076,
        showAppearanceSettings = 0x200077,
        showConfigPanel        = 0x200074,
        showFilePanel          = 0x200078,
        showTranslationTool    = 0x200079,
        showProjectSettings    = 0x20007a,
        showProjectModules     = 0x20007b,
        showSVGPathTool        = 0x20007c,

        closeWindow            = 0x201001,
        closeAllDocuments      = 0x201000,
        goToPreviousDoc        = 0x201002,
        goToNextDoc            = 0x201003,
        goToCounterpart        = 0x201004,
        deleteSelectedItem     = 0x201005,

        showFindPanel          = 0x2010a0,
        findSelection          = 0x2010a1,
        findNext               = 0x2010a2,
        findPrevious           = 0x2010a3
    };
}

namespace CommandCategories
{
    static const char* const general       = "General";
    static const char* const editing       = "Editing";
    static const char* const view          = "View";
    static const char* const windows       = "Windows";
}


#endif  // COMMANDIDS_H_INCLUDED
