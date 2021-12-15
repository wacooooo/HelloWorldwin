#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(togglebutton); // child of our main component this is. 
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (42.f)); // FLOAT VALUE BRUH. 
    g.setColour (juce::Colours::red);
    g.drawText ("VibeControl", getLocalBounds(), juce::Justification::centred, true);
    // drawText is a function ?? BRUH.  
    // MUST LEARN C++ before any weird shit 
}
// what are .h files doing ? 

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    togglebutton.setBounds(10, 10, 30, 30); 
}
