/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 9.30
* Profile  : STM32H745
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_EffectsFloatEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetHorizontalValueBarConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetValueDisplay.h"
#include "_WidgetSetValueDisplayConfig.h"
#include "_WidgetSetVerticalSlider.h"
#include "_WidgetSetVerticalSliderConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000014, /* ratio 120.00 % */
  0xB8000900, 0x8005C452, 0xB6090283, 0x60F0C838, 0x00000040, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XPoint _Const0000 = { 45, 30 };
static const XColor _Const0001 = { 0xA7, 0xA9, 0xAC, 0xFF };
static const XColor _Const0002 = { 0xC4, 0xC6, 0xC9, 0xFF };
static const XPoint _Const0003 = { 60, 32 };
static const XPoint _Const0004 = { 39, 45 };
static const XColor _Const0005 = { 0x00, 0x00, 0x00, 0xFF };
static const XStringRes _Const0006 = { _StringsDefault0, 0x0002 };
static const XStringRes _Const0007 = { _StringsDefault0, 0x0006 };
static const XColor _Const0008 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0009 = {{ 0, 0 }, { 200, 30 }};
static const XRect _Const000A = {{ 0, 0 }, { 200, 50 }};
static const XPoint _Const000B = { 0, 0 };
static const XRect _Const000C = {{ 0, 0 }, { 50, 200 }};
static const XPoint _Const000D = { 0, 200 };
static const XPoint _Const000E = { 50, 200 };
static const XPoint _Const000F = { 50, 0 };
static const XRect _Const0010 = {{ 0, 0 }, { 150, 50 }};
static const XPoint _Const0011 = { 0, 50 };
static const XPoint _Const0012 = { 150, 50 };
static const XPoint _Const0013 = { 150, 0 };

/* Include a file containing the bitmap resource : 'WidgetSet::HorizontalValueBarMedium' */
#include "_WidgetSetHorizontalValueBarMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::HorizontalValueBarMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetHorizontalValueBarMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::ThumbKnobMedium' */
#include "_WidgetSetThumbKnobMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::ThumbKnobMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetThumbKnobMedium )

/* Include a file containing the bitmap resource : 'WidgetSet::VerticalSliderTrackMedium' */
#include "_WidgetSetVerticalSliderTrackMedium.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::VerticalSliderTrackMedium' */
EW_RES_WITHOUT_VARIANTS( WidgetSetVerticalSliderTrackMedium )

/* This autoobject provides the default customization for the 'horizontal value 
   bar' widget (WidgetSet::HorizontalValueBar) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetHorizontalValueBar_Medium, WidgetSetHorizontalValueBarConfig )

/* Initializer for the auto object 'WidgetSet::HorizontalValueBar_Medium' */
void WidgetSetHorizontalValueBar_Medium__Init( WidgetSetHorizontalValueBarConfig _this )
{
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightFrame( _this, 0 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRight( _this, EwLoadResource( &WidgetSetHorizontalValueBarMedium, 
  ResourcesBitmap ));
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftFrame( _this, 1 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeft( _this, EwLoadResource( &WidgetSetHorizontalValueBarMedium, 
  ResourcesBitmap ));
  WidgetSetHorizontalValueBarConfig_OnSetWidgetMinSize( _this, _Const0000 );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::HorizontalValueBar_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetHorizontalValueBar_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetHorizontalValueBar_Medium )

/* This autoobject provides the default customization for the 'value display' widget 
   (WidgetSet::ValueDisplay) in its medium size variant. Widgets using this configuration 
   display the value and unit aligned at the right widget edge. */
EW_DEFINE_AUTOOBJECT( WidgetSetValueDisplay_Medium, WidgetSetValueDisplayConfig )

/* Initializer for the auto object 'WidgetSet::ValueDisplay_Medium' */
void WidgetSetValueDisplay_Medium__Init( WidgetSetValueDisplayConfig _this )
{
  WidgetSetValueDisplayConfig_OnSetValueMarginRight( _this, 10 );
  WidgetSetValueDisplayConfig_OnSetValueColorNegative( _this, _Const0001 );
  WidgetSetValueDisplayConfig_OnSetValueColorPositive( _this, _Const0001 );
  WidgetSetValueDisplayConfig_OnSetValueAlignment( _this, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetValueDisplayConfig_OnSetValueFont( _this, EwLoadResource( &ResourcesFontLarge, 
  ResourcesFont ));
  WidgetSetValueDisplayConfig_OnSetUnitColorNegative( _this, _Const0002 );
  WidgetSetValueDisplayConfig_OnSetUnitColorPositive( _this, _Const0002 );
  WidgetSetValueDisplayConfig_OnSetUnitAlignment( _this, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetValueDisplayConfig_OnSetUnitFont( _this, EwLoadResource( &ResourcesFontLarge, 
  ResourcesFont ));
  WidgetSetValueDisplayConfig_OnSetFormatPlusSign( _this, 0 );
  WidgetSetValueDisplayConfig_OnSetLayout( _this, WidgetSetValueDisplayLayoutAlignValueLeftToUnit );
  WidgetSetValueDisplayConfig_OnSetWidgetMinSize( _this, _Const0003 );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::ValueDisplay_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetValueDisplay_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetValueDisplay_Medium )

/* This autoobject provides the default customization for the 'vertical slider' 
   widget (WidgetSet::VerticalSlider) in its medium size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetVerticalSlider_Medium, WidgetSetVerticalSliderConfig )

/* Initializer for the auto object 'WidgetSet::VerticalSlider_Medium' */
void WidgetSetVerticalSlider_Medium__Init( WidgetSetVerticalSliderConfig _this )
{
  WidgetSetVerticalSliderConfig_OnSetKeyRepeatPeriod( _this, 100 );
  WidgetSetVerticalSliderConfig_OnSetKeyRepeatDelay( _this, 500 );
  WidgetSetVerticalSliderConfig_OnSetThumbMarginAbove( _this, -3 );
  WidgetSetVerticalSliderConfig_OnSetThumbMarginBelow( _this, -1 );
  WidgetSetVerticalSliderConfig_OnSetThumbFrameActive( _this, 3 );
  WidgetSetVerticalSliderConfig_OnSetThumbFrameFocused( _this, 2 );
  WidgetSetVerticalSliderConfig_OnSetThumbFrameDisabled( _this, 0 );
  WidgetSetVerticalSliderConfig_OnSetThumbFrameDefault( _this, 1 );
  WidgetSetVerticalSliderConfig_OnSetThumbActive( _this, EwLoadResource( &WidgetSetThumbKnobMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetThumbFocused( _this, EwLoadResource( &WidgetSetThumbKnobMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetThumbDisabled( _this, EwLoadResource( &WidgetSetThumbKnobMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetThumbDefault( _this, EwLoadResource( &WidgetSetThumbKnobMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameActive( _this, 0 );
  WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameFocused( _this, 0 );
  WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameDisabled( _this, 0 );
  WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameDefault( _this, 0 );
  WidgetSetVerticalSliderConfig_OnSetTrackAboveActive( _this, EwLoadResource( &WidgetSetVerticalSliderTrackMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetTrackAboveFocused( _this, EwLoadResource( &WidgetSetVerticalSliderTrackMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetTrackAboveDisabled( _this, EwLoadResource( 
  &WidgetSetVerticalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetTrackAboveDefault( _this, EwLoadResource( &WidgetSetVerticalSliderTrackMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameActive( _this, 1 );
  WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameFocused( _this, 1 );
  WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameDisabled( _this, 1 );
  WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameDefault( _this, 1 );
  WidgetSetVerticalSliderConfig_OnSetTrackBelowActive( _this, EwLoadResource( &WidgetSetVerticalSliderTrackMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetTrackBelowFocused( _this, EwLoadResource( &WidgetSetVerticalSliderTrackMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetTrackBelowDisabled( _this, EwLoadResource( 
  &WidgetSetVerticalSliderTrackMedium, ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetTrackBelowDefault( _this, EwLoadResource( &WidgetSetVerticalSliderTrackMedium, 
  ResourcesBitmap ));
  WidgetSetVerticalSliderConfig_OnSetWidgetMinSize( _this, _Const0004 );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::VerticalSlider_Medium' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetVerticalSlider_Medium )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetVerticalSlider_Medium )

/* Initializer for the class 'WidgetSet::ValueDisplayConfig' */
void WidgetSetValueDisplayConfig__Init( WidgetSetValueDisplayConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetValueDisplayConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetValueDisplayConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ValueColorNegative = _Const0005;
  _this->ValueColorPositive = _Const0005;
  _this->ValueAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->UnitColorNegative = _Const0005;
  _this->UnitColorPositive = _Const0005;
  _this->UnitAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->FormatDecimalSign = EwShareString( EwLoadString( &_Const0006 ));
  _this->FormatMinusSign = EwShareString( EwLoadString( &_Const0007 ));
  _this->Layout = WidgetSetValueDisplayLayoutUnitAndValueAreIndependent;
}

/* Re-Initializer for the class 'WidgetSet::ValueDisplayConfig' */
void WidgetSetValueDisplayConfig__ReInit( WidgetSetValueDisplayConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::ValueDisplayConfig' */
void WidgetSetValueDisplayConfig__Done( WidgetSetValueDisplayConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueMarginRight()' */
void WidgetSetValueDisplayConfig_OnSetValueMarginRight( WidgetSetValueDisplayConfig _this, 
  XInt32 value )
{
  if ( _this->ValueMarginRight == value )
    return;

  _this->ValueMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueMarginLeft()' */
void WidgetSetValueDisplayConfig_OnSetValueMarginLeft( WidgetSetValueDisplayConfig _this, 
  XInt32 value )
{
  if ( _this->ValueMarginLeft == value )
    return;

  _this->ValueMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueColorNegative()' */
void WidgetSetValueDisplayConfig_OnSetValueColorNegative( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ValueColorNegative, value ))
    return;

  _this->ValueColorNegative = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueColorPositive()' */
void WidgetSetValueDisplayConfig_OnSetValueColorPositive( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->ValueColorPositive, value ))
    return;

  _this->ValueColorPositive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueAlignment()' */
void WidgetSetValueDisplayConfig_OnSetValueAlignment( WidgetSetValueDisplayConfig _this, 
  XSet value )
{
  if ( _this->ValueAlignment == value )
    return;

  _this->ValueAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetValueFont()' */
void WidgetSetValueDisplayConfig_OnSetValueFont( WidgetSetValueDisplayConfig _this, 
  ResourcesFont value )
{
  if ( _this->ValueFont == value )
    return;

  _this->ValueFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitColorNegative()' */
void WidgetSetValueDisplayConfig_OnSetUnitColorNegative( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->UnitColorNegative, value ))
    return;

  _this->UnitColorNegative = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitColorPositive()' */
void WidgetSetValueDisplayConfig_OnSetUnitColorPositive( WidgetSetValueDisplayConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->UnitColorPositive, value ))
    return;

  _this->UnitColorPositive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitAlignment()' */
void WidgetSetValueDisplayConfig_OnSetUnitAlignment( WidgetSetValueDisplayConfig _this, 
  XSet value )
{
  if ( _this->UnitAlignment == value )
    return;

  _this->UnitAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetUnitFont()' */
void WidgetSetValueDisplayConfig_OnSetUnitFont( WidgetSetValueDisplayConfig _this, 
  ResourcesFont value )
{
  if ( _this->UnitFont == value )
    return;

  _this->UnitFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetFormatDecimalSign()' */
void WidgetSetValueDisplayConfig_OnSetFormatDecimalSign( WidgetSetValueDisplayConfig _this, 
  XString value )
{
  if ( !EwCompString( _this->FormatDecimalSign, value ))
    return;

  _this->FormatDecimalSign = EwShareString( value );
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetFormatPlusSign()' */
void WidgetSetValueDisplayConfig_OnSetFormatPlusSign( WidgetSetValueDisplayConfig _this, 
  XString value )
{
  if ( !EwCompString( _this->FormatPlusSign, value ))
    return;

  _this->FormatPlusSign = EwShareString( value );
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetLayout()' */
void WidgetSetValueDisplayConfig_OnSetLayout( WidgetSetValueDisplayConfig _this, 
  XEnum value )
{
  if ( _this->Layout == value )
    return;

  _this->Layout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetWidgetMaxSize()' */
void WidgetSetValueDisplayConfig_OnSetWidgetMaxSize( WidgetSetValueDisplayConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WidgetMaxSize, value ))
    return;

  _this->WidgetMaxSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplayConfig.OnSetWidgetMinSize()' */
void WidgetSetValueDisplayConfig_OnSetWidgetMinSize( WidgetSetValueDisplayConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ValueDisplayConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetValueDisplayConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetValueDisplayConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ValueDisplayConfig' */
EW_DEFINE_CLASS( WidgetSetValueDisplayConfig, WidgetSetWidgetConfig, ValueFont, 
                 FormatDigitGroupSign, FormatDigitGroupSign, FormatDigitGroupSign, 
                 FormatDigitGroupSign, ValueMarginBottom, "WidgetSet::ValueDisplayConfig" )
EW_END_OF_CLASS( WidgetSetValueDisplayConfig )

/* Initializer for the class 'WidgetSet::HorizontalValueBarConfig' */
void WidgetSetHorizontalValueBarConfig__Init( WidgetSetHorizontalValueBarConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetHorizontalValueBarConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetHorizontalValueBarConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->SwingElastic = 1;
  _this->SwingDuration = 500;
  _this->CoverTint = _Const0008;
  _this->CoverFrame = -1;
  _this->NeedleTint = _Const0008;
  _this->NeedleFrame = -1;
  _this->TrackRightTint = _Const0008;
  _this->TrackRightFrame = -1;
  _this->TrackLeftTint = _Const0008;
  _this->TrackLeftFrame = -1;
  _this->FaceTint = _Const0008;
  _this->FaceFrame = -1;
}

/* Re-Initializer for the class 'WidgetSet::HorizontalValueBarConfig' */
void WidgetSetHorizontalValueBarConfig__ReInit( WidgetSetHorizontalValueBarConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::HorizontalValueBarConfig' */
void WidgetSetHorizontalValueBarConfig__Done( WidgetSetHorizontalValueBarConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRightFrame()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRightFrame( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrame == value )
    return;

  _this->TrackRightFrame = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackRight()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackRight( WidgetSetHorizontalValueBarConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRight == value )
    return;

  _this->TrackRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeftFrame()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeftFrame( WidgetSetHorizontalValueBarConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrame == value )
    return;

  _this->TrackLeftFrame = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetTrackLeft()' */
void WidgetSetHorizontalValueBarConfig_OnSetTrackLeft( WidgetSetHorizontalValueBarConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeft == value )
    return;

  _this->TrackLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBarConfig.OnSetWidgetMinSize()' */
void WidgetSetHorizontalValueBarConfig_OnSetWidgetMinSize( WidgetSetHorizontalValueBarConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalValueBarConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalValueBarConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalValueBarConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalValueBarConfig' */
EW_DEFINE_CLASS( WidgetSetHorizontalValueBarConfig, WidgetSetWidgetConfig, Cover, 
                 SwingDuration, SwingDuration, SwingDuration, SwingDuration, SwingDuration, 
                 "WidgetSet::HorizontalValueBarConfig" )
EW_END_OF_CLASS( WidgetSetHorizontalValueBarConfig )

/* Initializer for the class 'WidgetSet::VerticalSliderConfig' */
void WidgetSetVerticalSliderConfig__Init( WidgetSetVerticalSliderConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetVerticalSliderConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetVerticalSliderConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->KeyCodeUp = CoreKeyCodeUp;
  _this->KeyCodeDown = CoreKeyCodeDown;
  _this->CoverTintActive = _Const0008;
  _this->CoverTintFocused = _Const0008;
  _this->CoverTintDisabled = _Const0008;
  _this->CoverTintDefault = _Const0008;
  _this->CoverFrameActive = -1;
  _this->CoverFrameFocused = -1;
  _this->CoverFrameDisabled = -1;
  _this->CoverFrameDefault = -1;
  _this->ThumbTintActive = _Const0008;
  _this->ThumbTintFocused = _Const0008;
  _this->ThumbTintDisabled = _Const0008;
  _this->ThumbTintDefault = _Const0008;
  _this->ThumbFrameActive = -1;
  _this->ThumbFrameFocused = -1;
  _this->ThumbFrameDisabled = -1;
  _this->ThumbFrameDefault = -1;
  _this->TrackAboveTintActive = _Const0008;
  _this->TrackAboveTintFocused = _Const0008;
  _this->TrackAboveTintDisabled = _Const0008;
  _this->TrackAboveTintDefault = _Const0008;
  _this->TrackAboveFrameActive = -1;
  _this->TrackAboveFrameFocused = -1;
  _this->TrackAboveFrameDisabled = -1;
  _this->TrackAboveFrameDefault = -1;
  _this->TrackBelowTintActive = _Const0008;
  _this->TrackBelowTintFocused = _Const0008;
  _this->TrackBelowTintDisabled = _Const0008;
  _this->TrackBelowTintDefault = _Const0008;
  _this->TrackBelowFrameActive = -1;
  _this->TrackBelowFrameFocused = -1;
  _this->TrackBelowFrameDisabled = -1;
  _this->TrackBelowFrameDefault = -1;
  _this->FaceTintActive = _Const0008;
  _this->FaceTintFocused = _Const0008;
  _this->FaceTintDisabled = _Const0008;
  _this->FaceTintDefault = _Const0008;
  _this->FaceFrameActive = -1;
  _this->FaceFrameFocused = -1;
  _this->FaceFrameDisabled = -1;
  _this->FaceFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::VerticalSliderConfig' */
void WidgetSetVerticalSliderConfig__ReInit( WidgetSetVerticalSliderConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::VerticalSliderConfig' */
void WidgetSetVerticalSliderConfig__Done( WidgetSetVerticalSliderConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetKeyRepeatPeriod()' */
void WidgetSetVerticalSliderConfig_OnSetKeyRepeatPeriod( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatPeriod == value )
    return;

  _this->KeyRepeatPeriod = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetKeyRepeatDelay()' */
void WidgetSetVerticalSliderConfig_OnSetKeyRepeatDelay( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatDelay == value )
    return;

  _this->KeyRepeatDelay = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbMarginAbove()' */
void WidgetSetVerticalSliderConfig_OnSetThumbMarginAbove( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginAbove == value )
    return;

  _this->ThumbMarginAbove = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbMarginBelow()' */
void WidgetSetVerticalSliderConfig_OnSetThumbMarginBelow( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginBelow == value )
    return;

  _this->ThumbMarginBelow = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbFrameActive()' */
void WidgetSetVerticalSliderConfig_OnSetThumbFrameActive( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameActive == value )
    return;

  _this->ThumbFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbFrameFocused()' */
void WidgetSetVerticalSliderConfig_OnSetThumbFrameFocused( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameFocused == value )
    return;

  _this->ThumbFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbFrameDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetThumbFrameDisabled( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameDisabled == value )
    return;

  _this->ThumbFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbFrameDefault()' */
void WidgetSetVerticalSliderConfig_OnSetThumbFrameDefault( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameDefault == value )
    return;

  _this->ThumbFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbActive()' */
void WidgetSetVerticalSliderConfig_OnSetThumbActive( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbActive == value )
    return;

  _this->ThumbActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbFocused()' */
void WidgetSetVerticalSliderConfig_OnSetThumbFocused( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbFocused == value )
    return;

  _this->ThumbFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetThumbDisabled( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbDisabled == value )
    return;

  _this->ThumbDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbDefault()' */
void WidgetSetVerticalSliderConfig_OnSetThumbDefault( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbDefault == value )
    return;

  _this->ThumbDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveFrameActive()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameActive( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackAboveFrameActive == value )
    return;

  _this->TrackAboveFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveFrameFocused()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameFocused( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackAboveFrameFocused == value )
    return;

  _this->TrackAboveFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveFrameDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameDisabled( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackAboveFrameDisabled == value )
    return;

  _this->TrackAboveFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveFrameDefault()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameDefault( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackAboveFrameDefault == value )
    return;

  _this->TrackAboveFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveActive()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveActive( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackAboveActive == value )
    return;

  _this->TrackAboveActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveFocused()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveFocused( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackAboveFocused == value )
    return;

  _this->TrackAboveFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveDisabled( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackAboveDisabled == value )
    return;

  _this->TrackAboveDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveDefault()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveDefault( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackAboveDefault == value )
    return;

  _this->TrackAboveDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowFrameActive()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameActive( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackBelowFrameActive == value )
    return;

  _this->TrackBelowFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowFrameFocused()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameFocused( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackBelowFrameFocused == value )
    return;

  _this->TrackBelowFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowFrameDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameDisabled( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackBelowFrameDisabled == value )
    return;

  _this->TrackBelowFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowFrameDefault()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameDefault( WidgetSetVerticalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackBelowFrameDefault == value )
    return;

  _this->TrackBelowFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowActive()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowActive( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackBelowActive == value )
    return;

  _this->TrackBelowActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowFocused()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowFocused( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackBelowFocused == value )
    return;

  _this->TrackBelowFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowDisabled( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackBelowDisabled == value )
    return;

  _this->TrackBelowDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowDefault()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowDefault( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackBelowDefault == value )
    return;

  _this->TrackBelowDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetWidgetMinSize()' */
void WidgetSetVerticalSliderConfig_OnSetWidgetMinSize( WidgetSetVerticalSliderConfig _this, 
  XPoint value )
{
  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::VerticalSliderConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetVerticalSliderConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetVerticalSliderConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::VerticalSliderConfig' */
EW_DEFINE_CLASS( WidgetSetVerticalSliderConfig, WidgetSetWidgetConfig, CoverActive, 
                 KeyRepeatPeriod, KeyRepeatPeriod, KeyRepeatPeriod, KeyRepeatPeriod, 
                 KeyRepeatPeriod, "WidgetSet::VerticalSliderConfig" )
EW_END_OF_CLASS( WidgetSetVerticalSliderConfig )

/* Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Init( WidgetSetPushButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetPushButtonConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetPushButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->PressedFeedbackDuration = 50;
  _this->KeyCode = CoreKeyCodeEnter;
  _this->LabelColorActive = _Const0005;
  _this->LabelColorFocused = _Const0005;
  _this->LabelColorDisabled = _Const0005;
  _this->LabelColorDefault = _Const0005;
  _this->IconTintActive = _Const0008;
  _this->IconTintFocused = _Const0008;
  _this->IconTintDisabled = _Const0008;
  _this->IconTintDefault = _Const0008;
  _this->LabelAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->IconAlignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->FaceLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->FaceTintActive = _Const0008;
  _this->FaceTintFocused = _Const0008;
  _this->FaceTintDisabled = _Const0008;
  _this->FaceTintDefault = _Const0008;
  _this->FaceFrameActive = -1;
  _this->FaceFrameFocused = -1;
  _this->FaceFrameDisabled = -1;
  _this->FaceFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__ReInit( WidgetSetPushButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::PushButtonConfig' */
void WidgetSetPushButtonConfig__Done( WidgetSetPushButtonConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorActive()' */
void WidgetSetPushButtonConfig_OnSetLabelColorActive( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorActive, value ))
    return;

  _this->LabelColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorFocused()' */
void WidgetSetPushButtonConfig_OnSetLabelColorFocused( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorFocused, value ))
    return;

  _this->LabelColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDisabled()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDisabled( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDisabled, value ))
    return;

  _this->LabelColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelColorDefault()' */
void WidgetSetPushButtonConfig_OnSetLabelColorDefault( WidgetSetPushButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelColorDefault, value ))
    return;

  _this->LabelColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButtonConfig.OnSetLabelFont()' */
void WidgetSetPushButtonConfig_OnSetLabelFont( WidgetSetPushButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelFont == value )
    return;

  _this->LabelFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButtonConfig' */
EW_DEFINE_CLASS( WidgetSetPushButtonConfig, WidgetSetWidgetConfig, LabelFont, PressedFeedbackDuration, 
                 PressedFeedbackDuration, PressedFeedbackDuration, PressedFeedbackDuration, 
                 PressedFeedbackDuration, "WidgetSet::PushButtonConfig" )
EW_END_OF_CLASS( WidgetSetPushButtonConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _None, _None, _None, _None, _None, 
                 _None, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::ValueDisplay' */
void WidgetSetValueDisplay__Init( WidgetSetValueDisplay _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetValueDisplay );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetValueDisplay );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super3.viewState = CoreViewStateAlphaBlended | CoreViewStateEnabled | CoreViewStateTouchable 
  | CoreViewStateVisible;
  CoreRectView__OnSetBounds( _this, _Const0009 );
  _this->CurrentFactor = 1.000000f;
}

/* Re-Initializer for the class 'WidgetSet::ValueDisplay' */
void WidgetSetValueDisplay__ReInit( WidgetSetValueDisplay _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'WidgetSet::ValueDisplay' */
void WidgetSetValueDisplay__Done( WidgetSetValueDisplay _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetBounds()' */
void WidgetSetValueDisplay_OnSetBounds( WidgetSetValueDisplay _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    if (( _this->Appearance->WidgetMaxSize.X > 0 ) && ( ns.X > _this->Appearance->WidgetMaxSize.X ))
      ns.X = _this->Appearance->WidgetMaxSize.X;

    if (( _this->Appearance->WidgetMaxSize.Y > 0 ) && ( ns.Y > _this->Appearance->WidgetMaxSize.Y ))
      ns.Y = _this->Appearance->WidgetMaxSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetValueDisplay_UpdateViewState( WidgetSetValueDisplay _this, XSet aState )
{
  XBool needsValue;
  XBool needsUnit;
  XRect area;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsValue = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->ValueFont 
  != 0 ));
  needsUnit = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->UnitFont 
  != 0 ));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsValue && ( _this->textView1 == 0 ))
  {
    _this->textView1 = EwNewObject( ViewsText, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->textView1 ), 0 );
  }
  else
    if ( !needsValue && ( _this->textView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->textView1 ));
      _this->textView1 = 0;
    }

  if ( needsUnit && ( _this->textView2 == 0 ))
  {
    _this->textView2 = EwNewObject( ViewsText, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->textView2 ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView2, 1 );
  }
  else
    if ( !needsUnit && ( _this->textView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->textView2 ));
      _this->textView2 = 0;
    }

  if ( _this->textView1 != 0 )
  {
    XColor clr = _Const0008;
    XRect r = area;

    if ( _this->isNegative )
      clr = _this->Appearance->ValueColorNegative;
    else
      clr = _this->Appearance->ValueColorPositive;

    if (( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitLeftToValue ) 
        || ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitRightToValue ))
      ViewsText_OnSetOnUpdate( _this->textView1, EwNewSlot( _this, WidgetSetValueDisplay_onLayoutViews ));
    else
      ViewsText_OnSetOnUpdate( _this->textView1, EwNullSlot );

    if ((( _this->textView2 != 0 ) && ( EwCompString( _this->Unit, 0 ) != 0 )) && 
        !EwIsRectEmpty( ViewsText_GetContentArea( _this->textView2 )))
    {
      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueLeftToUnit )
        r.Point2.X = ViewsText_GetContentArea( _this->textView2 ).Point1.X;

      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueRightToUnit )
        r.Point1.X = ViewsText_GetContentArea( _this->textView2 ).Point2.X;
    }

    CoreRectView__OnSetBounds( _this->textView1, EwNewRect( r.Point1.X + _this->Appearance->ValueMarginLeft, 
    r.Point1.Y + _this->Appearance->ValueMarginTop, r.Point2.X - _this->Appearance->ValueMarginRight, 
    r.Point2.Y - _this->Appearance->ValueMarginBottom ));
    ViewsText_OnSetFont( _this->textView1, _this->Appearance->ValueFont );
    ViewsText_OnSetAlignment( _this->textView1, _this->Appearance->ValueAlignment );
    ViewsText_OnSetString( _this->textView1, _this->valueString );
    ViewsText_OnSetColor( _this->textView1, clr );
  }

  if ( _this->textView2 != 0 )
  {
    XColor clr = _Const0008;
    XRect r = area;

    if ( _this->isNegative )
      clr = _this->Appearance->UnitColorNegative;
    else
      clr = _this->Appearance->UnitColorPositive;

    if (( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueLeftToUnit ) 
        || ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignValueRightToUnit ))
      ViewsText_OnSetOnUpdate( _this->textView2, EwNewSlot( _this, WidgetSetValueDisplay_onLayoutViews ));
    else
      ViewsText_OnSetOnUpdate( _this->textView2, EwNullSlot );

    if (( _this->textView1 != 0 ) && ( EwCompString( _this->valueString, 0 ) != 
        0 ))
    {
      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitLeftToValue )
        r.Point2.X = ViewsText_GetContentArea( _this->textView1 ).Point1.X;

      if ( _this->Appearance->Layout == WidgetSetValueDisplayLayoutAlignUnitRightToValue )
        r.Point1.X = ViewsText_GetContentArea( _this->textView1 ).Point2.X;
    }

    CoreRectView__OnSetBounds( _this->textView2, EwNewRect( r.Point1.X + _this->Appearance->UnitMarginLeft, 
    r.Point1.Y + _this->Appearance->UnitMarginTop, r.Point2.X - _this->Appearance->UnitMarginRight, 
    r.Point2.Y - _this->Appearance->UnitMarginBottom ));
    ViewsText_OnSetFont( _this->textView2, _this->Appearance->UnitFont );
    ViewsText_OnSetAlignment( _this->textView2, _this->Appearance->UnitAlignment );
    ViewsText_OnSetString( _this->textView2, _this->Unit );
    ViewsText_OnSetColor( _this->textView2, clr );
  }
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onLayoutViews()' */
void WidgetSetValueDisplay_onLayoutViews( WidgetSetValueDisplay _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Appearance != 0 ) && ( _this->Appearance->Layout != WidgetSetValueDisplayLayoutUnitAndValueAreIndependent ))
    CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onFormatValue()' */
void WidgetSetValueDisplay_onFormatValue( WidgetSetValueDisplay _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Appearance != 0 )
  {
    XFloat theValue = ((XFloat)_this->CurrentValue * _this->CurrentFactor ) + _this->CurrentBias;
    XInt32 noOfDigits = _this->NoOfDigits;
    XString newValueString;
    XInt32 inx;

    if ( _this->Precision > 0 )
      noOfDigits = noOfDigits + 1;

    if ( theValue < 0.000000f )
      noOfDigits = noOfDigits + 1;

    newValueString = EwNewStringFloat( theValue, noOfDigits, _this->Precision );
    inx = EwStringFindChar( newValueString, '.', 0 );

    if (( inx >= 0 ) && ( EwCompString( _this->Appearance->FormatDecimalSign, EwLoadString( 
        &_Const0006 )) != 0 ))
      newValueString = EwConcatString( EwConcatString( EwStringLeft( newValueString, 
      inx ), _this->Appearance->FormatDecimalSign ), EwStringRemove( newValueString, 
      0, inx + 1 ));

    if ( theValue < 0.000000f )
    {
      newValueString = EwStringRemove( newValueString, 0, 1 );
      inx = inx - 1;
    }

    if ( EwCompString( _this->Appearance->FormatDigitGroupSign, 0 ) != 0 )
    {
      if ( inx < 0 )
        inx = EwGetStringLength( newValueString );

      for (; inx > 3; inx = inx - 3 )
        newValueString = EwConcatString( EwConcatString( EwStringLeft( newValueString, 
        inx - 3 ), _this->Appearance->FormatDigitGroupSign ), EwStringRemove( newValueString, 
        0, inx - 3 ));
    }

    if ( theValue >= 0.000000f )
      newValueString = EwConcatString( _this->Appearance->FormatPlusSign, newValueString );
    else
      newValueString = EwConcatString( _this->Appearance->FormatMinusSign, newValueString );

    if ( EwCompString( newValueString, _this->valueString ) != 0 )
    {
      _this->valueString = EwShareString( newValueString );
      _this->isNegative = (XBool)( theValue < 0.000000f );
      CoreGroup_InvalidateViewState((CoreGroup)_this );
    }
  }
  else
    if ( EwCompString( _this->valueString, 0 ) != 0 )
    {
      _this->valueString = 0;
      CoreGroup_InvalidateViewState((CoreGroup)_this );
    }
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onConfigChanged()' */
void WidgetSetValueDisplay_onConfigChanged( WidgetSetValueDisplay _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.onOutlet()' */
void WidgetSetValueDisplay_onOutlet( WidgetSetValueDisplay _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetValueDisplay_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetOutlet()' */
void WidgetSetValueDisplay_OnSetOutlet( WidgetSetValueDisplay _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetValueDisplay_onOutlet ), _this->Outlet, 
      0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetValueDisplay_onOutlet ), value, 
      0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetUnit()' */
void WidgetSetValueDisplay_OnSetUnit( WidgetSetValueDisplay _this, XString value )
{
  if ( !EwCompString( _this->Unit, value ))
    return;

  _this->Unit = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetPrecision()' */
void WidgetSetValueDisplay_OnSetPrecision( WidgetSetValueDisplay _this, XInt32 value )
{
  if ( _this->Precision == value )
    return;

  _this->Precision = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetCurrentBias()' */
void WidgetSetValueDisplay_OnSetCurrentBias( WidgetSetValueDisplay _this, XFloat 
  value )
{
  if ( _this->CurrentBias == value )
    return;

  _this->CurrentBias = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetCurrentValue()' */
void WidgetSetValueDisplay_OnSetCurrentValue( WidgetSetValueDisplay _this, XInt32 
  value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onFormatValue ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ValueDisplay.OnSetAppearance()' */
void WidgetSetValueDisplay_OnSetAppearance( WidgetSetValueDisplay _this, WidgetSetValueDisplayConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetValueDisplay_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetValueDisplay_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetValueDisplay_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ValueDisplay' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetValueDisplay )
EW_END_OF_CLASS_VARIANTS( WidgetSetValueDisplay )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ValueDisplay' */
EW_DEFINE_CLASS( WidgetSetValueDisplay, CoreGroup, textView2, Outlet, Outlet, valueString, 
                 valueString, Precision, "WidgetSet::ValueDisplay" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetValueDisplay_OnSetBounds,
  CoreGroup_drawContent,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  WidgetSetValueDisplay_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetValueDisplay )

/* Initializer for the class 'WidgetSet::HorizontalValueBar' */
void WidgetSetHorizontalValueBar__Init( WidgetSetHorizontalValueBar _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetHorizontalValueBar );

  /* ... then construct all embedded objects */
  EffectsFloatEffect__Init( &_this->FloatEffect, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetHorizontalValueBar );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000A );
  _this->setupCurrentPos = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FloatEffect, 1 );
  _this->MaxValue = 100;
  _this->CurrentValue = 50;
  _this->FloatEffect.Super1.OnFinished = EwNewSlot( _this, WidgetSetHorizontalValueBar_onEndFloatEffect );
  _this->FloatEffect.Super1.OnAnimate = EwNewSlot( _this, WidgetSetHorizontalValueBar_onFloatEffect );
}

/* Re-Initializer for the class 'WidgetSet::HorizontalValueBar' */
void WidgetSetHorizontalValueBar__ReInit( WidgetSetHorizontalValueBar _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  EffectsFloatEffect__ReInit( &_this->FloatEffect );
}

/* Finalizer method for the class 'WidgetSet::HorizontalValueBar' */
void WidgetSetHorizontalValueBar__Done( WidgetSetHorizontalValueBar _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsFloatEffect__Done( &_this->FloatEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetBounds()' */
void WidgetSetHorizontalValueBar_OnSetBounds( WidgetSetHorizontalValueBar _this, 
  XRect value )
{
  if ( EwCompRect( _this->Super2.Bounds, value ))
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));

  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    if (( _this->Appearance->WidgetMaxSize.X > 0 ) && ( ns.X > _this->Appearance->WidgetMaxSize.X ))
      ns.X = _this->Appearance->WidgetMaxSize.X;

    if (( _this->Appearance->WidgetMaxSize.Y > 0 ) && ( ns.Y > _this->Appearance->WidgetMaxSize.Y ))
      ns.Y = _this->Appearance->WidgetMaxSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetHorizontalValueBar_UpdateViewState( WidgetSetHorizontalValueBar _this, 
  XSet aState )
{
  XBool needsFace;
  XBool needsTrackLeft;
  XBool needsTrackRight;
  XBool needsNeedle;
  XBool needsCover;
  XBool restack;
  XRect area;
  XPoint needleSize;
  XInt32 marginLeft;
  XInt32 marginRight;
  XInt32 pos;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFace = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->Face != 
  0 ));
  needsTrackLeft = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->TrackLeft 
  != 0 ));
  needsTrackRight = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->TrackRight 
  != 0 ));
  needsNeedle = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->Needle 
  != 0 ));
  needsCover = (XBool)(( _this->Appearance != 0 ) && ( _this->Appearance->Cover 
  != 0 ));
  restack = 0;
  area = EwGetRectORect( _this->Super2.Bounds );
  needleSize = _Const000B;

  if ( needsFace && ( _this->frameView1 == 0 ))
  {
    _this->frameView1 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView1 ), 0 );
    restack = 1;
  }
  else
    if ( !needsFace && ( _this->frameView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView1 ));
      _this->frameView1 = 0;
    }

  if ( needsTrackLeft && ( _this->frameView2 == 0 ))
  {
    _this->frameView2 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView2 ), 0 );
    restack = 1;
  }
  else
    if ( !needsTrackLeft && ( _this->frameView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView2 ));
      _this->frameView2 = 0;
    }

  if ( needsTrackRight && ( _this->frameView3 == 0 ))
  {
    _this->frameView3 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView3 ), 0 );
    restack = 1;
  }
  else
    if ( !needsTrackRight && ( _this->frameView3 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView3 ));
      _this->frameView3 = 0;
    }

  if ( needsNeedle && ( _this->imageView == 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->imageView ), 0 );
    restack = 1;
  }
  else
    if ( !needsNeedle && ( _this->imageView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsCover && ( _this->frameView4 == 0 ))
  {
    _this->frameView4 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView4 ), 0 );
    restack = 1;
  }
  else
    if ( !needsCover && ( _this->frameView4 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView4 ));
      _this->frameView4 = 0;
    }

  if ( restack )
  {
    if ( _this->frameView1 != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView1 ));

    if ( _this->frameView2 != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView2 ));

    if ( _this->frameView3 != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView3 ));

    if ( _this->imageView != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->imageView ));

    if ( _this->frameView4 != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView4 ));
  }

  if ( _this->frameView1 != 0 )
  {
    ViewsFrame_OnSetBitmap( _this->frameView1, _this->Appearance->Face );
    ViewsFrame_OnSetColor( _this->frameView1, _this->Appearance->FaceTint );

    if ( _this->Appearance->FaceFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView1, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView1, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView1, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView1, _this->Appearance->FaceFrame );
    }
  }

  if ( _this->frameView2 != 0 )
  {
    XSet edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft 
      | GraphicsEdgesTop;

    if ( _this->Appearance->TrackLeftWithEdge )
      edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft | 
      GraphicsEdgesRight | GraphicsEdgesTop;

    ViewsFrame_OnSetBitmap( _this->frameView2, _this->Appearance->TrackLeft );
    ViewsFrame_OnSetColor( _this->frameView2, _this->Appearance->TrackLeftTint );
    ViewsFrame_OnSetEdges( _this->frameView2, edges );

    if ( _this->Appearance->TrackLeftFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView2, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView2, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView2, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView2, _this->Appearance->TrackLeftFrame );
    }
  }

  if ( _this->frameView3 != 0 )
  {
    XSet edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesRight 
      | GraphicsEdgesTop;

    if ( _this->Appearance->TrackRightWithEdge )
      edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft | 
      GraphicsEdgesRight | GraphicsEdgesTop;

    ViewsFrame_OnSetBitmap( _this->frameView3, _this->Appearance->TrackRight );
    ViewsFrame_OnSetColor( _this->frameView3, _this->Appearance->TrackRightTint );
    ViewsFrame_OnSetEdges( _this->frameView3, edges );

    if ( _this->Appearance->TrackRightFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView3, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView3, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView3, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView3, _this->Appearance->TrackRightFrame );
    }
  }

  if ( _this->frameView4 != 0 )
  {
    ViewsFrame_OnSetBitmap( _this->frameView4, _this->Appearance->Cover );
    ViewsFrame_OnSetColor( _this->frameView4, _this->Appearance->CoverTint );

    if ( _this->Appearance->CoverFrame < 0 )
    {
      ViewsFrame_OnSetAnimated( _this->frameView4, 1 );
      ViewsFrame_OnSetFrameNumber( _this->frameView4, 0 );
    }
    else
    {
      ViewsFrame_OnSetAnimated( _this->frameView4, 0 );
      ViewsFrame_OnSetFrameNumber( _this->frameView4, _this->Appearance->CoverFrame );
    }
  }

  if ( _this->imageView != 0 )
  {
    ViewsImage_OnSetBitmap( _this->imageView, _this->Appearance->Needle );
    ViewsImage_OnSetColor( _this->imageView, _this->Appearance->NeedleTint );

    if ( _this->Appearance->NeedleFrame < 0 )
    {
      ViewsImage_OnSetAnimated( _this->imageView, 1 );
      ViewsImage_OnSetFrameNumber( _this->imageView, 0 );
    }
    else
    {
      ViewsImage_OnSetAnimated( _this->imageView, 0 );
      ViewsImage_OnSetFrameNumber( _this->imageView, _this->Appearance->NeedleFrame );
    }
  }

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
    needleSize = _this->imageView->Bitmap->FrameSize;

  marginLeft = needleSize.X / 2;
  marginRight = needleSize.X - marginLeft;

  if ( _this->Appearance != 0 )
  {
    marginLeft = marginLeft + _this->Appearance->NeedleMarginLeft;
    marginRight = marginRight + _this->Appearance->NeedleMarginRight;
  }

  pos = marginLeft + (XInt32)((XFloat)(( EwGetRectW( area ) - marginRight ) - marginLeft ) 
  * _this->currentPos );

  if ( pos < 0 )
    pos = 0;

  if ( pos > EwGetRectW( area ))
    pos = EwGetRectW( area );

  if (( _this->frameView1 != 0 ) && ( _this->frameView1->Bitmap != 0 ))
  {
    XInt32 h = _this->frameView1->Bitmap->FrameSize.Y;
    CoreRectView__OnSetBounds( _this->frameView1, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( h / 2 ), EwGetRectW( area ), (( EwGetRectH( area ) / 2 ) - ( h / 2 )) 
    + h ));
  }

  if (( _this->frameView2 != 0 ) && ( _this->frameView2->Bitmap != 0 ))
  {
    XPoint s = _this->frameView2->Bitmap->FrameSize;
    CoreRectView__OnSetBounds( _this->frameView2, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( s.Y / 2 ), pos, (( EwGetRectH( area ) / 2 ) - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView2, EwSetPointX( _this->frameView2->NoEdgesLimit, 
    EwGetRectW( area ) - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView2, (XBool)( !_this->Appearance->TrackLeftWithEdge 
    || ( pos >= (( s.X / 3 ) * 2 ))));
  }

  if (( _this->frameView3 != 0 ) && ( _this->frameView3->Bitmap != 0 ))
  {
    XPoint s = _this->frameView3->Bitmap->FrameSize;
    CoreRectView__OnSetBounds( _this->frameView3, EwNewRect( pos, ( EwGetRectH( 
    area ) / 2 ) - ( s.Y / 2 ), EwGetRectW( area ), (( EwGetRectH( area ) / 2 ) 
    - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView3, EwSetPointX( _this->frameView3->NoEdgesLimit, 
    EwGetRectW( area ) - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView3, (XBool)( !_this->Appearance->TrackRightWithEdge 
    || (( EwGetRectW( area ) - pos ) >= (( s.X / 3 ) * 2 ))));
  }

  if (( _this->frameView4 != 0 ) && ( _this->frameView4->Bitmap != 0 ))
  {
    XInt32 h = _this->frameView4->Bitmap->FrameSize.Y;
    CoreRectView__OnSetBounds( _this->frameView4, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( h / 2 ), EwGetRectW( area ), (( EwGetRectH( area ) / 2 ) - ( h / 2 )) 
    + h ));
  }

  if ( _this->imageView != 0 )
    CoreRectView__OnSetBounds( _this->imageView, EwMoveRectPos( EwNewRect2Point( 
    _Const000B, needleSize ), EwNewPoint( pos - ( needleSize.X / 2 ), ( EwGetRectH( 
    area ) / 2 ) - ( needleSize.Y / 2 ))));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onUpdatePos()' */
void WidgetSetHorizontalValueBar_onUpdatePos( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  XFloat newPos;
  XInt32 swingDuration;
  XFloat ratio;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  newPos = _this->currentPos;
  swingDuration = 0;

  if ( _this->Appearance != 0 )
    swingDuration = _this->Appearance->SwingDuration;

  if ( _this->setupCurrentPos && ( _this->MaxValue != _this->MinValue ))
  {
    _this->currentPos = ((XFloat)-_this->MinValue ) / (XFloat)( _this->MaxValue 
    - _this->MinValue );
    newPos = _this->currentPos;
    _this->setupCurrentPos = 0;
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));
  }

  if ( _this->MaxValue != _this->MinValue )
    newPos = (XFloat)( WidgetSetHorizontalValueBar_OnGetCurrentValue( _this ) - 
    _this->MinValue ) / (XFloat)( _this->MaxValue - _this->MinValue );

  if ( newPos == _this->currentPos )
    return;

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 0 );

  if ( swingDuration <= 0 )
  {
    _this->currentPos = newPos;
    CoreGroup_InvalidateViewState((CoreGroup)_this );
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));
    return;
  }

  ratio = newPos - _this->currentPos;

  if ( ratio < 0.000000f )
    ratio = -ratio;

  if ( _this->Appearance->SwingElastic )
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingBack_Out );
  else
    EffectsEffect_OnSetTiming((EffectsEffect)&_this->FloatEffect, EffectsTimingFastIn_EaseOut );

  _this->FloatEffect.Value1 = _this->currentPos;
  _this->FloatEffect.Value2 = newPos;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FloatEffect, ( 10 + ( 
  swingDuration / 2 )) + ((XInt32)((XFloat)swingDuration * ratio ) / 2 ));
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 1 );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onEndFloatEffect()' */
void WidgetSetHorizontalValueBar_onEndFloatEffect( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onFloatEffect()' */
void WidgetSetHorizontalValueBar_onFloatEffect( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->currentPos = _this->FloatEffect.Value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onConfigChanged()' */
void WidgetSetHorizontalValueBar_onConfigChanged( WidgetSetHorizontalValueBar _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onUpdatePos ), ((XObject)_this ));

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.onOutlet()' */
void WidgetSetHorizontalValueBar_onOutlet( WidgetSetHorizontalValueBar _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetHorizontalValueBar_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetOutlet()' */
void WidgetSetHorizontalValueBar_OnSetOutlet( WidgetSetHorizontalValueBar _this, 
  XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onOutlet ), 
      _this->Outlet, 0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onOutlet ), 
      value, 0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnGetCurrentValue()' */
XInt32 WidgetSetHorizontalValueBar_OnGetCurrentValue( WidgetSetHorizontalValueBar _this )
{
  XInt32 value = _this->CurrentValue;

  if ( _this->MinValue > _this->MaxValue )
  {
    if ( value < _this->MaxValue )
      value = _this->MaxValue;

    if ( value > _this->MinValue )
      value = _this->MinValue;
  }
  else
  {
    if ( value < _this->MinValue )
      value = _this->MinValue;

    if ( value > _this->MaxValue )
      value = _this->MaxValue;
  }

  return value;
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetCurrentValue()' */
void WidgetSetHorizontalValueBar_OnSetCurrentValue( WidgetSetHorizontalValueBar _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onUpdatePos ), ((XObject)_this ));
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalValueBar.OnSetAppearance()' */
void WidgetSetHorizontalValueBar_OnSetAppearance( WidgetSetHorizontalValueBar _this, 
  WidgetSetHorizontalValueBarConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetHorizontalValueBar_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalValueBar_onConfigChanged ), 
    ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalValueBar' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalValueBar )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalValueBar )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalValueBar' */
EW_DEFINE_CLASS( WidgetSetHorizontalValueBar, CoreGroup, frameView4, OnUpdate, Outlet, 
                 FloatEffect, currentPos, currentPos, "WidgetSet::HorizontalValueBar" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetHorizontalValueBar_OnSetBounds,
  CoreGroup_drawContent,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  WidgetSetHorizontalValueBar_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetHorizontalValueBar )

/* Initializer for the class 'WidgetSet::VerticalSlider' */
void WidgetSetVerticalSlider__Init( WidgetSetVerticalSlider _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetVerticalSlider );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->RepetitionTimer, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerDown, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerUp, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetVerticalSlider );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000C );
  CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  CoreTimer_OnSetBegin( &_this->RepetitionTimer, 50 );
  _this->KeyHandlerDown.Filter = CoreKeyCodeDown;
  _this->KeyHandlerUp.Filter = CoreKeyCodeUp;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const000D );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const000E );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const000F );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000B );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->StepSize = 1;
  _this->MaxValue = 100;
  _this->CurrentValue = 50;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->RepetitionTimer.OnTrigger = EwNewSlot( _this, WidgetSetVerticalSlider_onRepetitionTimer );
  _this->KeyHandlerDown.OnRelease = EwNewSlot( _this, WidgetSetVerticalSlider_onReleaseKey );
  _this->KeyHandlerDown.OnPress = EwNewSlot( _this, WidgetSetVerticalSlider_onPressKey );
  _this->KeyHandlerUp.OnRelease = EwNewSlot( _this, WidgetSetVerticalSlider_onReleaseKey );
  _this->KeyHandlerUp.OnPress = EwNewSlot( _this, WidgetSetVerticalSlider_onPressKey );
  _this->TouchHandler.OnDrag = EwNewSlot( _this, WidgetSetVerticalSlider_onDragTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetVerticalSlider_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetVerticalSlider_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::VerticalSlider' */
void WidgetSetVerticalSlider__ReInit( WidgetSetVerticalSlider _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->RepetitionTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerDown );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerUp );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::VerticalSlider' */
void WidgetSetVerticalSlider__Done( WidgetSetVerticalSlider _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->RepetitionTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandlerDown );
  CoreKeyPressHandler__Done( &_this->KeyHandlerUp );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetBounds()' */
void WidgetSetVerticalSlider_OnSetBounds( WidgetSetVerticalSlider _this, XRect value )
{
  if ( EwCompRect( _this->Super2.Bounds, value ))
    EwPostSignal( _this->OnUpdate, ((XObject)_this ));

  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    if (( _this->Appearance->WidgetMaxSize.X > 0 ) && ( ns.X > _this->Appearance->WidgetMaxSize.X ))
      ns.X = _this->Appearance->WidgetMaxSize.X;

    if (( _this->Appearance->WidgetMaxSize.Y > 0 ) && ( ns.Y > _this->Appearance->WidgetMaxSize.Y ))
      ns.Y = _this->Appearance->WidgetMaxSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetVerticalSlider_UpdateViewState( WidgetSetVerticalSlider _this, XSet 
  aState )
{
  XBool needsFace;
  XBool needsTrackBelow;
  XBool needsTrackAbove;
  XBool needsThumb;
  XBool needsCover;
  XBool restack;
  XRect area;
  XPoint thumbSize;
  XBool isEnabled;
  XBool isFocused;
  XBool isPressed;
  XInt32 marginBelow;
  XInt32 marginAbove;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 newThumbPos;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFace = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->FaceDefault 
  != 0 ) || ( _this->Appearance->FaceDisabled != 0 )) || ( _this->Appearance->FaceFocused 
  != 0 )) || ( _this->Appearance->FaceActive != 0 )));
  needsTrackBelow = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->TrackBelowDefault 
  != 0 ) || ( _this->Appearance->TrackBelowDisabled != 0 )) || ( _this->Appearance->TrackBelowFocused 
  != 0 )) || ( _this->Appearance->TrackBelowActive != 0 )));
  needsTrackAbove = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->TrackAboveDefault 
  != 0 ) || ( _this->Appearance->TrackAboveDisabled != 0 )) || ( _this->Appearance->TrackAboveFocused 
  != 0 )) || ( _this->Appearance->TrackAboveActive != 0 )));
  needsThumb = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->ThumbDefault 
  != 0 ) || ( _this->Appearance->ThumbDisabled != 0 )) || ( _this->Appearance->ThumbFocused 
  != 0 )) || ( _this->Appearance->ThumbActive != 0 )));
  needsCover = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->CoverDefault 
  != 0 ) || ( _this->Appearance->CoverDisabled != 0 )) || ( _this->Appearance->CoverFocused 
  != 0 )) || ( _this->Appearance->CoverActive != 0 )));
  restack = 0;
  area = EwGetRectORect( _this->Super2.Bounds );
  thumbSize = _Const000B;

  if ( needsFace && ( _this->frameView1 == 0 ))
  {
    _this->frameView1 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView1 ), 0 );
    restack = 1;
  }
  else
    if ( !needsFace && ( _this->frameView1 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView1 ));
      _this->frameView1 = 0;
    }

  if ( needsTrackBelow && ( _this->frameView2 == 0 ))
  {
    _this->frameView2 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView2 ), 0 );
    restack = 1;
  }
  else
    if ( !needsTrackBelow && ( _this->frameView2 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView2 ));
      _this->frameView2 = 0;
    }

  if ( needsTrackAbove && ( _this->frameView3 == 0 ))
  {
    _this->frameView3 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView3 ), 0 );
    restack = 1;
  }
  else
    if ( !needsTrackAbove && ( _this->frameView3 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView3 ));
      _this->frameView3 = 0;
    }

  if ( needsThumb && ( _this->imageView == 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->imageView ), 0 );
    restack = 1;
  }
  else
    if ( !needsThumb && ( _this->imageView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsCover && ( _this->frameView4 == 0 ))
  {
    _this->frameView4 = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView4 ), 0 );
    restack = 1;
  }
  else
    if ( !needsCover && ( _this->frameView4 != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView4 ));
      _this->frameView4 = 0;
    }

  if ( restack )
  {
    if ( _this->frameView1 != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView1 ));

    if ( _this->frameView2 != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView2 ));

    if ( _this->frameView3 != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView3 ));

    if ( _this->imageView != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->imageView ));

    if ( _this->frameView4 != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView4 ));
  }

  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isFocused = (( aState & CoreViewStateFocused ) == CoreViewStateFocused );
  isPressed = (XBool)(( _this->touchActive || _this->KeyHandlerUp.Down ) || _this->KeyHandlerDown.Down );

  if ( _this->frameView1 != 0 )
  {
    ResourcesBitmap bitmap = 0;
    XInt32 frameNo = -1;
    XColor tint = _Const0008;

    if ( !isEnabled )
    {
      bitmap = _this->Appearance->FaceDisabled;
      frameNo = _this->Appearance->FaceFrameDisabled;
      tint = _this->Appearance->FaceTintDisabled;
    }
    else
      if ( isPressed )
      {
        bitmap = _this->Appearance->FaceActive;
        frameNo = _this->Appearance->FaceFrameActive;
        tint = _this->Appearance->FaceTintActive;
      }
      else
        if ( isFocused )
        {
          bitmap = _this->Appearance->FaceFocused;
          frameNo = _this->Appearance->FaceFrameFocused;
          tint = _this->Appearance->FaceTintFocused;
        }
        else
        {
          bitmap = _this->Appearance->FaceDefault;
          frameNo = _this->Appearance->FaceFrameDefault;
          tint = _this->Appearance->FaceTintDefault;
        }

    ViewsFrame_OnSetAnimated( _this->frameView1, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView1, tint );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView1, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView1, bitmap );
  }

  if ( _this->frameView2 != 0 )
  {
    ResourcesBitmap bitmap = 0;
    XInt32 frameNo = -1;
    XColor tint = _Const0008;
    XSet edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft 
      | GraphicsEdgesRight;

    if ( !isEnabled )
    {
      bitmap = _this->Appearance->TrackBelowDisabled;
      frameNo = _this->Appearance->TrackBelowFrameDisabled;
      tint = _this->Appearance->TrackBelowTintDisabled;
    }
    else
      if ( isPressed )
      {
        bitmap = _this->Appearance->TrackBelowActive;
        frameNo = _this->Appearance->TrackBelowFrameActive;
        tint = _this->Appearance->TrackBelowTintActive;
      }
      else
        if ( isFocused )
        {
          bitmap = _this->Appearance->TrackBelowFocused;
          frameNo = _this->Appearance->TrackBelowFrameFocused;
          tint = _this->Appearance->TrackBelowTintFocused;
        }
        else
        {
          bitmap = _this->Appearance->TrackBelowDefault;
          frameNo = _this->Appearance->TrackBelowFrameDefault;
          tint = _this->Appearance->TrackBelowTintDefault;
        }

    ViewsFrame_OnSetAnimated( _this->frameView2, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView2, tint );

    if ( frameNo < 0 )
      frameNo = 0;

    if ( _this->Appearance->TrackBelowWithEdge )
      edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft | 
      GraphicsEdgesRight | GraphicsEdgesTop;

    ViewsFrame_OnSetFrameNumber( _this->frameView2, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView2, bitmap );
    ViewsFrame_OnSetEdges( _this->frameView2, edges );
  }

  if ( _this->frameView3 != 0 )
  {
    ResourcesBitmap bitmap = 0;
    XInt32 frameNo = -1;
    XColor tint = _Const0008;
    XSet edges = GraphicsEdgesInterior | GraphicsEdgesLeft | GraphicsEdgesRight 
      | GraphicsEdgesTop;

    if ( !isEnabled )
    {
      bitmap = _this->Appearance->TrackAboveDisabled;
      frameNo = _this->Appearance->TrackAboveFrameDisabled;
      tint = _this->Appearance->TrackAboveTintDisabled;
    }
    else
      if ( isPressed )
      {
        bitmap = _this->Appearance->TrackAboveActive;
        frameNo = _this->Appearance->TrackAboveFrameActive;
        tint = _this->Appearance->TrackAboveTintActive;
      }
      else
        if ( isFocused )
        {
          bitmap = _this->Appearance->TrackAboveFocused;
          frameNo = _this->Appearance->TrackAboveFrameFocused;
          tint = _this->Appearance->TrackAboveTintFocused;
        }
        else
        {
          bitmap = _this->Appearance->TrackAboveDefault;
          frameNo = _this->Appearance->TrackAboveFrameDefault;
          tint = _this->Appearance->TrackAboveTintDefault;
        }

    ViewsFrame_OnSetAnimated( _this->frameView3, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView3, tint );

    if ( frameNo < 0 )
      frameNo = 0;

    if ( _this->Appearance->TrackAboveWithEdge )
      edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft | 
      GraphicsEdgesRight | GraphicsEdgesTop;

    ViewsFrame_OnSetFrameNumber( _this->frameView3, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView3, bitmap );
    ViewsFrame_OnSetEdges( _this->frameView3, edges );
  }

  if ( _this->frameView4 != 0 )
  {
    ResourcesBitmap bitmap = 0;
    XInt32 frameNo = -1;
    XColor tint = _Const0008;

    if ( !isEnabled )
    {
      bitmap = _this->Appearance->CoverDisabled;
      frameNo = _this->Appearance->CoverFrameDisabled;
      tint = _this->Appearance->CoverTintDisabled;
    }
    else
      if ( isPressed )
      {
        bitmap = _this->Appearance->CoverActive;
        frameNo = _this->Appearance->CoverFrameActive;
        tint = _this->Appearance->CoverTintActive;
      }
      else
        if ( isFocused )
        {
          bitmap = _this->Appearance->CoverFocused;
          frameNo = _this->Appearance->CoverFrameFocused;
          tint = _this->Appearance->CoverTintFocused;
        }
        else
        {
          bitmap = _this->Appearance->CoverDefault;
          frameNo = _this->Appearance->CoverFrameDefault;
          tint = _this->Appearance->CoverTintDefault;
        }

    ViewsFrame_OnSetAnimated( _this->frameView4, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView4, tint );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView4, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView4, bitmap );
  }

  if ( _this->imageView != 0 )
  {
    ResourcesBitmap bitmap = 0;
    XInt32 frameNo = -1;
    XColor tint = _Const0008;

    if ( !isEnabled )
    {
      bitmap = _this->Appearance->ThumbDisabled;
      frameNo = _this->Appearance->ThumbFrameDisabled;
      tint = _this->Appearance->ThumbTintDisabled;
    }
    else
      if ( isPressed )
      {
        bitmap = _this->Appearance->ThumbActive;
        frameNo = _this->Appearance->ThumbFrameActive;
        tint = _this->Appearance->ThumbTintActive;
      }
      else
        if ( isFocused )
        {
          bitmap = _this->Appearance->ThumbFocused;
          frameNo = _this->Appearance->ThumbFrameFocused;
          tint = _this->Appearance->ThumbTintFocused;
        }
        else
        {
          bitmap = _this->Appearance->ThumbDefault;
          frameNo = _this->Appearance->ThumbFrameDefault;
          tint = _this->Appearance->ThumbTintDefault;
        }

    ViewsImage_OnSetAnimated( _this->imageView, (XBool)( frameNo < 0 ));
    ViewsImage_OnSetColor( _this->imageView, tint );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
    ViewsImage_OnSetBitmap( _this->imageView, bitmap );
  }

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
    thumbSize = _this->imageView->Bitmap->FrameSize;

  marginBelow = thumbSize.Y / 2;
  marginAbove = thumbSize.Y - marginBelow;

  if ( _this->Appearance != 0 )
  {
    marginBelow = marginBelow + _this->Appearance->ThumbMarginBelow;
    marginAbove = marginAbove + _this->Appearance->ThumbMarginAbove;
  }

  minPos = marginBelow;
  maxPos = EwGetRectH( area ) - marginAbove;
  newThumbPos = marginBelow;

  if ( _this->MaxValue != _this->MinValue )
    newThumbPos = EwGetRectH( area ) - ((XInt32)(((XFloat)( WidgetSetVerticalSlider_OnGetCurrentValue( 
    _this ) - _this->MinValue ) * (XFloat)( maxPos - minPos )) / (XFloat)( _this->MaxValue 
    - _this->MinValue )) + minPos );

  if ( newThumbPos < 0 )
    newThumbPos = 0;

  if ( newThumbPos > EwGetRectH( area ))
    newThumbPos = EwGetRectH( area );

  if (( _this->frameView1 != 0 ) && ( _this->frameView1->Bitmap != 0 ))
  {
    XInt32 w = _this->frameView1->Bitmap->FrameSize.X;
    CoreRectView__OnSetBounds( _this->frameView1, EwNewRect(( EwGetRectW( area ) 
    / 2 ) - ( w / 2 ), 0, (( EwGetRectW( area ) / 2 ) - ( w / 2 )) + w, EwGetRectH( 
    area )));
  }

  if (( _this->frameView2 != 0 ) && ( _this->frameView2->Bitmap != 0 ))
  {
    XPoint s = _this->frameView2->Bitmap->FrameSize;
    CoreRectView__OnSetBounds( _this->frameView2, EwNewRect(( EwGetRectW( area ) 
    / 2 ) - ( s.X / 2 ), newThumbPos, (( EwGetRectW( area ) / 2 ) - ( s.X / 2 )) 
    + s.X, EwGetRectH( area )));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView2, EwSetPointY( _this->frameView2->NoEdgesLimit, 
    EwGetRectH( area ) - ( s.Y / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView2, (XBool)( !_this->Appearance->TrackBelowWithEdge 
    || (( EwGetRectH( area ) - newThumbPos ) >= (( s.Y / 3 ) * 2 ))));
  }

  if (( _this->frameView3 != 0 ) && ( _this->frameView3->Bitmap != 0 ))
  {
    XPoint s = _this->frameView3->Bitmap->FrameSize;
    CoreRectView__OnSetBounds( _this->frameView3, EwNewRect(( EwGetRectW( area ) 
    / 2 ) - ( s.X / 2 ), 0, (( EwGetRectW( area ) / 2 ) - ( s.X / 2 )) + s.X, newThumbPos ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView3, EwSetPointY( _this->frameView3->NoEdgesLimit, 
    EwGetRectH( area ) - ( s.Y / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView3, (XBool)( !_this->Appearance->TrackAboveWithEdge 
    || ( newThumbPos >= (( s.Y / 3 ) * 2 ))));
  }

  if (( _this->frameView4 != 0 ) && ( _this->frameView4->Bitmap != 0 ))
  {
    XInt32 w = _this->frameView4->Bitmap->FrameSize.X;
    CoreRectView__OnSetBounds( _this->frameView4, EwNewRect(( EwGetRectW( area ) 
    / 2 ) - ( w / 2 ), 0, (( EwGetRectW( area ) / 2 ) - ( w / 2 )) + w, EwGetRectH( 
    area )));
  }

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XRect thumbArea = EwNewRect2Point( _Const000B, thumbSize );
    CoreRectView__OnSetBounds( _this->imageView, EwMoveRectPos( EwMoveRectNeg( thumbArea, 
    EwGetRectCenter( thumbArea )), EwNewPoint( EwGetRectW( area ) / 2, newThumbPos )));
  }
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.onConfigChanged()' */
void WidgetSetVerticalSlider_onConfigChanged( WidgetSetVerticalSlider _this, XObject 
  sender )
{
  XEnum oldKeyCodeUp;
  XEnum oldKeyCodeDown;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCodeUp = _this->KeyHandlerUp.Filter;
  oldKeyCodeDown = _this->KeyHandlerDown.Filter;

  if ( _this->Appearance != 0 )
  {
    _this->KeyHandlerUp.Filter = _this->Appearance->KeyCodeUp;
    _this->KeyHandlerDown.Filter = _this->Appearance->KeyCodeDown;
  }
  else
  {
    _this->KeyHandlerUp.Filter = CoreKeyCodeUp;
    _this->KeyHandlerDown.Filter = CoreKeyCodeDown;
  }

  if (((( oldKeyCodeUp == CoreKeyCodeNoKey ) || ( oldKeyCodeDown == CoreKeyCodeNoKey )) 
      && ( _this->KeyHandlerUp.Filter != CoreKeyCodeNoKey )) && ( _this->KeyHandlerDown.Filter 
      != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if ((( oldKeyCodeUp != CoreKeyCodeNoKey ) && ( oldKeyCodeDown != CoreKeyCodeNoKey )) 
      && (( _this->KeyHandlerUp.Filter == CoreKeyCodeNoKey ) || ( _this->KeyHandlerDown.Filter 
      == CoreKeyCodeNoKey )))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, _this->Appearance->KeyRepeatDelay );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, _this->Appearance->KeyRepeatPeriod );
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, 0 );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  }

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.onOutlet()' */
void WidgetSetVerticalSlider_onOutlet( WidgetSetVerticalSlider _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetVerticalSlider_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.onRepetitionTimer()' */
void WidgetSetVerticalSlider_onRepetitionTimer( WidgetSetVerticalSlider _this, XObject 
  sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldValue = WidgetSetVerticalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = _this->StepSize;

  if (( _this->KeyHandlerDown.Down && ( _this->MaxValue > _this->MinValue )) || 
      ( _this->KeyHandlerUp.Down && ( _this->MaxValue < _this->MinValue )))
    delta = -delta;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetVerticalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetVerticalSlider_OnGetCurrentValue( _this ))
    return;

  EwPostSignal( _this->OnChange, ((XObject)_this ));

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetVerticalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.onReleaseKey()' */
void WidgetSetVerticalSlider_onReleaseKey( WidgetSetVerticalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 0 );
  EwPostSignal( _this->OnEnd, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.onPressKey()' */
void WidgetSetVerticalSlider_onPressKey( WidgetSetVerticalSlider _this, XObject 
  sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnStart, ((XObject)_this ));
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 1 );
  oldValue = WidgetSetVerticalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = _this->StepSize;

  if ((( sender == ((XObject)&_this->KeyHandlerDown )) && ( _this->MaxValue > _this->MinValue )) 
      || (( sender == ((XObject)&_this->KeyHandlerUp )) && ( _this->MaxValue < _this->MinValue )))
    delta = -delta;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetVerticalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetVerticalSlider_OnGetCurrentValue( _this ))
    return;

  EwPostSignal( _this->OnChange, ((XObject)_this ));

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetVerticalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.onDragTouch()' */
void WidgetSetVerticalSlider_onDragTouch( WidgetSetVerticalSlider _this, XObject 
  sender )
{
  XInt32 marginBelow;
  XInt32 marginAbove;
  XPoint delta;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 oldValue;
  XInt32 newValue;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  marginBelow = 0;
  marginAbove = 0;

  if ( _this->Appearance != 0 )
  {
    marginBelow = _this->Appearance->ThumbMarginBelow;
    marginAbove = _this->Appearance->ThumbMarginAbove;
  }

  delta = EwMovePointNeg( _this->TouchHandler.CurrentPos, _this->TouchHandler.HittingPos );
  minPos = marginBelow;
  maxPos = EwGetRectH( _this->Super2.Bounds ) - marginAbove;
  oldValue = WidgetSetVerticalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
    maxPos = maxPos - EwGetRectH( _this->imageView->Super1.Bounds );

  if ( maxPos > minPos )
    newValue = (XInt32)((((XFloat)-delta.Y ) * (XFloat)( _this->MaxValue - _this->MinValue )) 
    / (XFloat)( maxPos - minPos )) + _this->touchStartValue;

  WidgetSetVerticalSlider_OnSetCurrentValue( _this, newValue - ( newValue % _this->StepSize ));

  if ( oldValue == WidgetSetVerticalSlider_OnGetCurrentValue( _this ))
    return;

  EwPostSignal( _this->OnChange, ((XObject)_this ));

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetVerticalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.onReleaseTouch()' */
void WidgetSetVerticalSlider_onReleaseTouch( WidgetSetVerticalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  _this->touchActive = 0;
  _this->KeyHandlerUp.Enabled = 1;
  _this->KeyHandlerDown.Enabled = 1;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnEnd, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.onPressTouch()' */
void WidgetSetVerticalSlider_onPressTouch( WidgetSetVerticalSlider _this, XObject 
  sender )
{
  XInt32 dragLimit;
  XRect touchArea;
  XBool hasThumb;
  XBool insideThumb;
  XBool adjustAtTouch;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  dragLimit = CoreView__GetRoot( _this )->CursorDragLimit;
  touchArea = EwMoveRectPos( EwNewRect2Point( EwNewPoint( -dragLimit, -dragLimit ), 
  EwNewPoint( dragLimit + 1, dragLimit + 1 )), _this->TouchHandler.CurrentPos );
  hasThumb = (XBool)(( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 
  0 ));
  insideThumb = (XBool)( hasThumb && !EwIsRectEmpty( EwIntersectRect( _this->imageView->Super1.Bounds, 
  touchArea )));
  adjustAtTouch = (XBool)(( _this->Appearance != 0 ) && _this->Appearance->ThumbUpdateAtTouch );

  if (( hasThumb && !insideThumb ) && !adjustAtTouch )
  {
    CoreRoot root = CoreView__GetRoot( _this );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
    CoreRoot_RetargetCursor( root, ((CoreView)root ), 0 );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
    return;
  }

  _this->touchActive = 1;
  _this->KeyHandlerUp.Enabled = 0;
  _this->KeyHandlerDown.Enabled = 0;
  EwPostSignal( _this->OnStart, ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->touchStartValue = WidgetSetVerticalSlider_OnGetCurrentValue( _this );

  if ( adjustAtTouch && !insideThumb )
  {
    XInt32 marginBelow = 0;
    XInt32 marginAbove = 0;
    XInt32 thumbHeight = 0;
    XInt32 hitPos;
    XInt32 minPos;
    XInt32 maxPos;
    XInt32 oldValue;
    XInt32 newValue;

    if ( _this->Appearance != 0 )
    {
      marginBelow = _this->Appearance->ThumbMarginBelow;
      marginAbove = _this->Appearance->ThumbMarginAbove;
    }

    if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
      thumbHeight = EwGetRectH( _this->imageView->Super1.Bounds );

    hitPos = ( EwGetRectH( _this->Super2.Bounds ) - _this->TouchHandler.HittingPos.Y ) 
    - ( thumbHeight / 2 );
    minPos = marginBelow;
    maxPos = ( EwGetRectH( _this->Super2.Bounds ) - marginAbove ) - thumbHeight;
    oldValue = WidgetSetVerticalSlider_OnGetCurrentValue( _this );
    newValue = oldValue;

    if ( maxPos > minPos )
      newValue = (XInt32)(((XFloat)( hitPos - minPos ) * (XFloat)( _this->MaxValue 
      - _this->MinValue )) / (XFloat)( maxPos - minPos )) + _this->MinValue;

    WidgetSetVerticalSlider_OnSetCurrentValue( _this, newValue - ( newValue % _this->StepSize ));

    if ( oldValue == WidgetSetVerticalSlider_OnGetCurrentValue( _this ))
      return;

    EwPostSignal( _this->OnChange, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetInt32( _this->Outlet, WidgetSetVerticalSlider_OnGetCurrentValue( _this ));
      EwNotifyRefObservers( _this->Outlet, 0 );
    }

    _this->touchStartValue = WidgetSetVerticalSlider_OnGetCurrentValue( _this );
  }
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetOutlet()' */
void WidgetSetVerticalSlider_OnSetOutlet( WidgetSetVerticalSlider _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetVerticalSlider_onOutlet ), _this->Outlet, 
      0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetVerticalSlider_onOutlet ), value, 
      0 );

  if ( value.Object != 0 )
    EwPostSignal( EwNewSlot( _this, WidgetSetVerticalSlider_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetStepSize()' */
void WidgetSetVerticalSlider_OnSetStepSize( WidgetSetVerticalSlider _this, XInt32 
  value )
{
  if ( value < 0 )
    value = 1;

  _this->StepSize = value;
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetMaxValue()' */
void WidgetSetVerticalSlider_OnSetMaxValue( WidgetSetVerticalSlider _this, XInt32 
  value )
{
  if ( _this->MaxValue == value )
    return;

  _this->MaxValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnGetCurrentValue()' */
XInt32 WidgetSetVerticalSlider_OnGetCurrentValue( WidgetSetVerticalSlider _this )
{
  XInt32 value = _this->CurrentValue;

  if ( _this->MinValue > _this->MaxValue )
  {
    if ( value < _this->MaxValue )
      value = _this->MaxValue;

    if ( value > _this->MinValue )
      value = _this->MinValue;
  }
  else
  {
    if ( value < _this->MinValue )
      value = _this->MinValue;

    if ( value > _this->MaxValue )
      value = _this->MaxValue;
  }

  return value;
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetCurrentValue()' */
void WidgetSetVerticalSlider_OnSetCurrentValue( WidgetSetVerticalSlider _this, XInt32 
  value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetAppearance()' */
void WidgetSetVerticalSlider_OnSetAppearance( WidgetSetVerticalSlider _this, WidgetSetVerticalSliderConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetVerticalSlider_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetVerticalSlider_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetVerticalSlider_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::VerticalSlider' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetVerticalSlider )
EW_END_OF_CLASS_VARIANTS( WidgetSetVerticalSlider )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::VerticalSlider' */
EW_DEFINE_CLASS( WidgetSetVerticalSlider, CoreGroup, frameView4, OnUpdate, Outlet, 
                 RepetitionTimer, touchStartValue, touchStartValue, "WidgetSet::VerticalSlider" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetVerticalSlider_OnSetBounds,
  CoreGroup_drawContent,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  WidgetSetVerticalSlider_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetVerticalSlider )

/* Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Init( WidgetSetPushButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( WidgetSetPushButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( WidgetSetPushButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0010 );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0011 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const0012 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0013 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000B );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->IconFrameActive = -1;
  _this->IconFrameFocused = -1;
  _this->IconFrameDisabled = -1;
  _this->IconFrameDefault = -1;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetPushButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetPushButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetPushButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetPushButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetPushButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__ReInit( WidgetSetPushButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::PushButton' */
void WidgetSetPushButton__Done( WidgetSetPushButton _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetBounds()' */
void WidgetSetPushButton_OnSetBounds( WidgetSetPushButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    if (( _this->Appearance->WidgetMaxSize.X > 0 ) && ( ns.X > _this->Appearance->WidgetMaxSize.X ))
      ns.X = _this->Appearance->WidgetMaxSize.X;

    if (( _this->Appearance->WidgetMaxSize.Y > 0 ) && ( ns.Y > _this->Appearance->WidgetMaxSize.Y ))
      ns.Y = _this->Appearance->WidgetMaxSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetPushButton_UpdateViewState( WidgetSetPushButton _this, XSet aState )
{
  XBool needsFace;
  XBool needsIcon;
  XBool needsLabel;
  XBool restack;
  XRect area;
  XBool isEnabled;
  XBool isFocused;
  XBool isPressed;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFace = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->FaceDefault 
  != 0 ) || ( _this->Appearance->FaceDisabled != 0 )) || ( _this->Appearance->FaceFocused 
  != 0 )) || ( _this->Appearance->FaceActive != 0 )));
  needsIcon = (XBool)( _this->Icon != 0 );
  needsLabel = (XBool)((( _this->Appearance != 0 ) && ( EwCompString( _this->Label, 
  0 ) != 0 )) && ( _this->Appearance->LabelFont != 0 ));
  restack = 0;
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFace && ( _this->frameView == 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->frameView ), 0 );
    restack = 1;
  }
  else
    if ( !needsFace && ( _this->frameView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsIcon && ( _this->imageView == 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->imageView ), 0 );
    restack = 1;
  }
  else
    if ( !needsIcon && ( _this->imageView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( needsLabel && ( _this->textView == 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup__Add( _this, ((CoreView)_this->textView ), 0 );
    restack = 1;
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsLabel && ( _this->textView != 0 ))
    {
      CoreGroup__Remove( _this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( restack )
  {
    if ( _this->frameView != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->frameView ));

    if ( _this->imageView != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->imageView ));

    if ( _this->textView != 0 )
      CoreGroup__RestackTop( _this, ((CoreView)_this->textView ));
  }

  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isFocused = (( aState & CoreViewStateFocused ) == CoreViewStateFocused );
  isPressed = (XBool)((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) 
  || _this->KeyHandler.Down ) || _this->FlashTimer.Enabled );

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap = 0;
    XInt32 frameNo = -1;
    XColor tint = _Const0008;
    XSet layout = _this->Appearance->FaceLayout;
    XRect r = area;

    if ( !isEnabled )
    {
      bitmap = _this->Appearance->FaceDisabled;
      frameNo = _this->Appearance->FaceFrameDisabled;
      tint = _this->Appearance->FaceTintDisabled;
    }
    else
      if ( isPressed )
      {
        bitmap = _this->Appearance->FaceActive;
        frameNo = _this->Appearance->FaceFrameActive;
        tint = _this->Appearance->FaceTintActive;
      }
      else
        if ( isFocused )
        {
          bitmap = _this->Appearance->FaceFocused;
          frameNo = _this->Appearance->FaceFrameFocused;
          tint = _this->Appearance->FaceTintFocused;
        }
        else
        {
          bitmap = _this->Appearance->FaceDefault;
          frameNo = _this->Appearance->FaceFrameDefault;
          tint = _this->Appearance->FaceTintDefault;
        }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, tint );

    if ( frameNo < 0 )
      frameNo = 0;

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XInt32 w = bitmap->FrameSize.X;

      if ( alignToLeft && !alignToRight )
        r.Point2.X = ( r.Point1.X + w );
      else
        if ( !alignToLeft && alignToRight )
          r.Point1.X = ( r.Point2.X - w );
        else
        {
          r.Point1.X = (( EwGetRectW( r ) / 2 ) - ( w / 2 ));
          r.Point2.X = ( r.Point1.X + w );
        }
    }

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XInt32 h = bitmap->FrameSize.Y;

      if ( alignToTop && !alignToBottom )
        r.Point2.Y = ( r.Point1.Y + h );
      else
        if ( !alignToTop && alignToBottom )
          r.Point1.Y = ( r.Point2.Y - h );
        else
        {
          r.Point1.Y = (( EwGetRectH( r ) / 2 ) - ( h / 2 ));
          r.Point2.Y = ( r.Point1.Y + h );
        }
    }

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
  }

  if (( _this->imageView != 0 ) && ( _this->Appearance != 0 ))
  {
    XInt32 frameNo = -1;
    XColor clr = _Const0008;

    if ( !isEnabled )
    {
      frameNo = _this->IconFrameDisabled;
      clr = _this->Appearance->IconTintDisabled;
    }
    else
      if ( isPressed )
      {
        frameNo = _this->IconFrameActive;
        clr = _this->Appearance->IconTintActive;
      }
      else
        if ( isFocused )
        {
          frameNo = _this->IconFrameFocused;
          clr = _this->Appearance->IconTintFocused;
        }
        else
        {
          frameNo = _this->IconFrameDefault;
          clr = _this->Appearance->IconTintDefault;
        }

    ViewsImage_OnSetAnimated( _this->imageView, (XBool)( frameNo < 0 ));

    if ( frameNo < 0 )
      frameNo = 0;

    CoreRectView__OnSetBounds( _this->imageView, EwNewRect( area.Point1.X + _this->Appearance->IconMarginLeft, 
    area.Point1.Y + _this->Appearance->IconMarginTop, area.Point2.X - _this->Appearance->IconMarginRight, 
    area.Point2.Y - _this->Appearance->IconMarginBottom ));
    ViewsImage_OnSetAlignment( _this->imageView, _this->Appearance->IconAlignment );
    ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
    ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
    ViewsImage_OnSetColor( _this->imageView, clr );
  }
  else
    if ( _this->imageView != 0 )
    {
      XInt32 frameNo = -1;

      if ( !isEnabled )
      {
        frameNo = _this->IconFrameDisabled;
      }
      else
        if ( isPressed )
        {
          frameNo = _this->IconFrameActive;
        }
        else
          if ( isFocused )
          {
            frameNo = _this->IconFrameFocused;
          }
          else
          {
            frameNo = _this->IconFrameDefault;
          }

      CoreRectView__OnSetBounds( _this->imageView, area );
      ViewsImage_OnSetAlignment( _this->imageView, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter );
      ViewsImage_OnSetBitmap( _this->imageView, _this->Icon );
      ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
      ViewsImage_OnSetColor( _this->imageView, _Const0008 );
    }

  if ( _this->textView != 0 )
  {
    XColor clr = _Const0008;

    if ( !isEnabled )
      clr = _this->Appearance->LabelColorDisabled;
    else
      if ( isPressed )
        clr = _this->Appearance->LabelColorActive;
      else
        if ( isFocused )
          clr = _this->Appearance->LabelColorFocused;
        else
          clr = _this->Appearance->LabelColorDefault;

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X + _this->Appearance->LabelMarginLeft, 
    area.Point1.Y + _this->Appearance->LabelMarginTop, area.Point2.X - _this->Appearance->LabelMarginRight, 
    area.Point2.Y - _this->Appearance->LabelMarginBottom ));
    ViewsText_OnSetAlignment( _this->textView, _this->Appearance->LabelAlignment );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    ViewsText_OnSetFont( _this->textView, _this->Appearance->LabelFont );
    ViewsText_OnSetString( _this->textView, _this->Label );
    ViewsText_OnSetColor( _this->textView, clr );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onConfigChanged()' */
void WidgetSetPushButton_onConfigChanged( WidgetSetPushButton _this, XObject sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;

  if ( _this->Appearance != 0 )
    _this->KeyHandler.Filter = _this->Appearance->KeyCode;
  else
    _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.onFlashTimer()' */
void WidgetSetPushButton_onFlashTimer( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnActivate, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseKey()' */
void WidgetSetPushButton_onReleaseKey( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  EwPostSignal( _this->OnLeave, ((XObject)_this ));
  EwPostSignal( _this->OnRelease, ((XObject)_this ));
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressKey()' */
void WidgetSetPushButton_onPressKey( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
  EwPostSignal( _this->OnPress, ((XObject)_this ));
  EwPostSignal( _this->OnEnter, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onLeaveTouch()' */
void WidgetSetPushButton_onLeaveTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnLeave, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onEnterTouch()' */
void WidgetSetPushButton_onEnterTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnEnter, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.onReleaseTouch()' */
void WidgetSetPushButton_onReleaseTouch( WidgetSetPushButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = _this->Appearance->PressedFeedbackDuration;

  _this->KeyHandler.Enabled = 1;
  EwPostSignal( _this->OnRelease, ((XObject)_this ));

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::PushButton.onPressTouch()' */
void WidgetSetPushButton_onPressTouch( WidgetSetPushButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    EwPostSignal( _this->OnActivate, ((XObject)_this ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
  }

  EwPostSignal( _this->OnPress, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetLabel()' */
void WidgetSetPushButton_OnSetLabel( WidgetSetPushButton _this, XString value )
{
  if ( !EwCompString( _this->Label, value ))
    return;

  _this->Label = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::PushButton.OnSetAppearance()' */
void WidgetSetPushButton_OnSetAppearance( WidgetSetPushButton _this, WidgetSetPushButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetPushButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetPushButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetPushButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::PushButton' */
EW_DEFINE_CLASS( WidgetSetPushButton, CoreGroup, textView, OnLeave, FlashTimer, 
                 FlashTimer, Label, onPressKeyTime, "WidgetSet::PushButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetPushButton_OnSetBounds,
  CoreGroup_drawContent,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  WidgetSetPushButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( WidgetSetPushButton )

/* Embedded Wizard */
