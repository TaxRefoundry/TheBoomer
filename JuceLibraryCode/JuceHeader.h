#pragma once 

#include <juce_audio_basics/juce_audio_basics.h>
#include <juce_audio_devices/juce_audio_devies.h> 
#include <juce_audio_formats/juce_audio_formats.h>
#include <juce_audio_utils/juce_audio_utils.h>
#include <juce_core/juce_core.h>
#include <juce_data_structures/juce_data_structures.h>
#include <juce_events/juce_events.h>
#include <juce_graphics/juce_graphics.h>
#include <juce_gui_basics/juce_gui_basics.h>
#include <juce_gui_extra/juce_gui_extra.h>

#if defined (JUCE_PROJUCER_VERSION) && JUCE_PROJUCER_VERSION < JUCE_VERSION 

#error "This project was last saved using an outdated version of the Projucer
! Re-save this project with the latest version to fix this error."
#endif

#if !DONT_SET_USING_JUCE_NAMESPACE
// If your code uses alot of JUCE classes, then this will obviously save you 
// a lot of typing, but can be disabled by setting DONT_SET_USING_JUCE_NAMESPACE

using namespace juce; 
#endif

#if ! JUCE_DONT_DECLARE_PROJECTINFO
namespace ProjectInfo
{
    const char* const projectName       = "TaxReFx";
    const char* const companyName       = "TaxReFx";
    const char* const versionString     = "2.0.0";
    const int         versionNumber     = 0x10000; 
}
#endif