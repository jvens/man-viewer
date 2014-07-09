/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "GUIComponents.h"

GUIComponents* comp;
//==============================================================================
MainContentComponent::MainContentComponent()
{
    setSize (500, 400);
    comp = new GUIComponents();
    addAndMakeVisible(comp,-1);
    
}

MainContentComponent::~MainContentComponent()
{
    deleteAllChildren();
    //delete comp;
}

void MainContentComponent::paint (Graphics& g)
{
    //g.fillAll (Colour (0xffeeddff));

    //g.setFont (Font (16.0f));
    //g.setColour (Colours::black);
    //g.drawText ("Jeramie Vens!", getLocalBounds(), Justification::centred, true);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
