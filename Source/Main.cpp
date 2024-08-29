//  Main.cpp
//  The Boomer
//
//  Created by JayDoe on 8/27/24.

#include <JuceHeader.h>
#include "MainComponent.h"

//======================================================================
class NewProjectApplication : public juce::JUCEApplication
{
public:
    //==================================================================
    NewProjectApplication() {}
    
    const juce::String getApplicationName() override    { return ProjectInfo::projectName; }
    const juce::String getApplicationVersion() override { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed() override          { return true; }
    //===================================================================
    void initialise (const juce::String& commandLine) override
    {
        // them thangs, them thangs, don't even ask me
        mainWindow.reset (newMainWindow (getApplicationName()));
    }
    void shutdown() override
    {
        //Them thangs
        mainWindow = nullptr;
    }
    //====================================================================
    void systemRequestedQuit() override
    {
        // THem Thangs
        quit();
    }
    void anotherInstanceStarted (const juce::String& commandLine) override
    {
        // Them Thangs
    }
    class MainWindow        : public juce::DocumentWindow
    {
    public:
        MainWindow (juce::String name)
        : DocumentWindow (name,
                          juce::Desktop::getInstance().getDefaultLookAndFeel()
                          .findColour (juce::ResizableWindow::backgroundC olourId),
                          DocumentWindow::allButtons)
        {
            setUsingNativeTitleBar (true);
            setContentOwned (new MainComponent(), true);
            
#if JUCE_IOS || JUCE_ANDROID
            setFullScreen (true);
#else
            setResizable (true, true);
            centreWithSize (getWidth(), getHeight());
#endif
            
            setVisible (true);
        }
        void closeButtonPressed() override
        {
            //Them Thangs
            JUCEApplication::getInstance()->systemRequestedQuit();
        };
    private:
        std::unique_ptr<MainWIndow> mainWindow;
    };
};
//===============================================================================
START_JUCE_APPLICATION (NewProjectApplication)

