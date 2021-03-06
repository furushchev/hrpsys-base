
//////////////////////////////////////////////////////////////
//
// Header file for HpanedUI
//
//    This file is generated by RapidApp 1.2
//
//    This class implements the user interface portion of a class
//    Normally it is not used directly.
//    Instead the subclass, Hpaned is instantiated
//
//    To extend or alter the behavior of this class, you should
//    modify the Hpaned files
//
//    Restrict changes to those sections between
//    the "//--- Start/End editable code block" markers
//
//    This will allow RapidApp to integrate changes more easily
//
//    This class is a ViewKit user interface "component".
//    For more information on how components are used, see the
//    "ViewKit Programmers' Manual", and the RapidApp
//    User's Guide.
//
//////////////////////////////////////////////////////////////
#ifndef HPANEDUI_H
#define HPANEDUI_H
#include <Vk/VkComponent.h>


//---- Start editable code block: headers and declarations


//---- End editable code block: headers and declarations


// Externally defined classes referenced by this class:

class SoXtExaminerViewer;


class HpanedUI : public VkComponent
{ 

  public:

    HpanedUI ( const char *, Widget );
    HpanedUI ( const char * );
    ~HpanedUI();
    void create ( Widget );
    const char *  className();

    //---- Start editable code block: Hpaned public



    //---- End editable code block: Hpaned public


  protected:


    // Classes created by this class

    class SoXtExaminerViewer *_viewer;

    // Widgets created by this class

    Widget  _autoToggle;
    Widget  _bulletinBoard;
    Widget  _hpaned;
    Widget  _scale;
    Widget  _speedScale;


    // These virtual functions are called from the private callbacks (below)
    // Intended to be overriden in derived classes to define actions

    virtual void autoToggleCB ( Widget, XtPointer );
    virtual void speedScaleCB ( Widget, XtPointer );

    //---- Start editable code block: Hpaned protected


    //---- End editable code block: Hpaned protected


  private: 

    // Array of default resources

    static String      _defaultHpanedUIResources[];


    // Callbacks to interface with Motif

    static void autoToggleCBCallback ( Widget, XtPointer, XtPointer );
    static void speedScaleCBCallback ( Widget, XtPointer, XtPointer );

    //---- Start editable code block: Hpaned private


    //---- End editable code block: Hpaned private
};
//---- Start editable code block: End of generated code


//---- End editable code block: End of generated code

#endif

