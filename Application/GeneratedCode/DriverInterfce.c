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
#include "_BezierClockBezierClock.h"
#include "_CoreOutline.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreView.h"
#include "_DriverInterfceDriverInterface.h"
#include "_DriverInterfceFirstSeit.h"
#include "_DriverInterfceSecoundSeit.h"
#include "_EffectsPointEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetHorizontalValueBarConfig.h"
#include "_WidgetSetValueDisplay.h"
#include "_WidgetSetValueDisplayConfig.h"
#include "_WidgetSetVerticalSlider.h"
#include "_WidgetSetVerticalSliderConfig.h"
#include "BezierClock.h"
#include "Core.h"
#include "DriverInterfce.h"
#include "Effects.h"
#include "Resources.h"
#include "SetSpeed.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x0000005A, /* ratio 84.44 % */
  0xB8000F00, 0x000AA452, 0x00D20037, 0x21A003A0, 0x88458182, 0xA003A800, 0x7900454D,
  0x0058021A, 0x18800F11, 0x1C846000, 0xC2215169, 0x2E090286, 0x0002F8B9, 0x200A8D1A,
  0x6610010A, 0x0032CDA1, 0xC8D460E4, 0x00002033, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 270 }};
static const XRect _Const0001 = {{ -465, -27 }, { 733, 349 }};
static const XPoint _Const0002 = { 800, 0 };
static const XRect _Const0003 = {{ 490, -10 }, { 980, 270 }};
static const XRect _Const0004 = {{ 0, 0 }, { 410, 270 }};
static const XRect _Const0005 = {{ 45, 65 }, { 285, 135 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x0002 };
static const XRect _Const0007 = {{ 66, 150 }, { 286, 210 }};
static const XRect _Const0008 = {{ 93, 20 }, { 283, 55 }};
static const XStringRes _Const0009 = { _StringsDefault0, 0x0009 };
static const XColor _Const000A = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const000B = {{ 0, 0 }, { 470, 270 }};
static const XRect _Const000C = {{ 29, 130 }, { 153, 244 }};
static const XRect _Const000D = {{ 238, 131 }, { 383, 242 }};
static const XRect _Const000E = {{ 184, 81 }, { 434, 281 }};
static const XRect _Const000F = {{ -90, 66 }, { 270, 296 }};
static const XRect _Const0010 = {{ 263, 177 }, { 353, 222 }};
static const XStringRes _Const0011 = { _StringsDefault0, 0x0011 };
static const XColor _Const0012 = { 0xF7, 0x00, 0x1D, 0xFF };
static const XRect _Const0013 = {{ 35, 184 }, { 135, 214 }};
static const XStringRes _Const0014 = { _StringsDefault0, 0x001C };
static const XRect _Const0015 = {{ 421, 100 }, { 471, 250 }};
static const XRect _Const0016 = {{ 2, 133 }, { 172, 193 }};
static const XRect _Const0017 = {{ 244, 130 }, { 369, 197 }};
static const XRect _Const0018 = {{ 50, 10 }, { 150, 40 }};
static const XStringRes _Const0019 = { _StringsDefault0, 0x0023 };
static const XColor _Const001A = { 0xFF, 0x23, 0x23, 0xFF };
static const XRect _Const001B = {{ 3, -28 }, { 473, 247 }};

/* Initializer for the class 'DriverInterfce::DriverInterface' */
void DriverInterfceDriverInterface__Init( DriverInterfceDriverInterface _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( DriverInterfceDriverInterface );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  CoreOutline__Init( &_this->Outline, &_this->_XObject, 0 );
  DriverInterfceFirstSeit__Init( &_this->FirstSeit, &_this->_XObject, 0 );
  DriverInterfceSecoundSeit__Init( &_this->SecoundSeit, &_this->_XObject, 0 );
  EffectsPointEffect__Init( &_this->PointEffect, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DriverInterfceDriverInterface );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0001 );
  ViewsImage_OnSetAutoSize( &_this->Image, 1 );
  ViewsImage_OnSetAlphaBlended( &_this->Image, 1 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0000 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const0002 );
  _this->SlideTouchHandler.SlideVert = 0;
  CoreSlideTouchHandler_OnSetResetSpace( &_this->SlideTouchHandler, 150 );
  CoreRectView__OnSetBounds( &_this->Outline, _Const0000 );
  CoreOutline_OnSetFormation( &_this->Outline, CoreFormationLeftToRight );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->FirstSeit, 1 );
  CoreRectView__OnSetBounds( &_this->SecoundSeit, _Const0003 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->SecoundSeit, 1 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->PointEffect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->PointEffect, 200 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FirstSeit ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SecoundSeit ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &SetSpeedDriv, ResourcesBitmap ));
  _this->SlideTouchHandler.OnSlide = EwNullSlot;
  _this->Outline.OnUpdate = EwNullSlot;
  CoreOutline_OnSetSlideHandler( &_this->Outline, &_this->SlideTouchHandler );
}

/* Re-Initializer for the class 'DriverInterfce::DriverInterface' */
void DriverInterfceDriverInterface__ReInit( DriverInterfceDriverInterface _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreOutline__ReInit( &_this->Outline );
  DriverInterfceFirstSeit__ReInit( &_this->FirstSeit );
  DriverInterfceSecoundSeit__ReInit( &_this->SecoundSeit );
  EffectsPointEffect__ReInit( &_this->PointEffect );
}

/* Finalizer method for the class 'DriverInterfce::DriverInterface' */
void DriverInterfceDriverInterface__Done( DriverInterfceDriverInterface _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreOutline__Done( &_this->Outline );
  DriverInterfceFirstSeit__Done( &_this->FirstSeit );
  DriverInterfceSecoundSeit__Done( &_this->SecoundSeit );
  EffectsPointEffect__Done( &_this->PointEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void DriverInterfceDriverInterface_UpdateLayout( DriverInterfceDriverInterface _this, 
  XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
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
void DriverInterfceDriverInterface_UpdateViewState( DriverInterfceDriverInterface _this, 
  XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* Variants derived from the class : 'DriverInterfce::DriverInterface' */
EW_DEFINE_CLASS_VARIANTS( DriverInterfceDriverInterface )
EW_END_OF_CLASS_VARIANTS( DriverInterfceDriverInterface )

/* Virtual Method Table (VMT) for the class : 'DriverInterfce::DriverInterface' */
EW_DEFINE_CLASS( DriverInterfceDriverInterface, CoreGroup, Image, Image, Image, 
                 Image, _None, _None, "DriverInterfce::DriverInterface" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_drawContent,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  DriverInterfceDriverInterface_UpdateLayout,
  DriverInterfceDriverInterface_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( DriverInterfceDriverInterface )

/* Initializer for the class 'DriverInterfce::SecoundSeit' */
void DriverInterfceSecoundSeit__Init( DriverInterfceSecoundSeit _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( DriverInterfceSecoundSeit );

  /* ... then construct all embedded objects */
  WidgetSetValueDisplay__Init( &_this->ValueDisplay, &_this->_XObject, 0 );
  WidgetSetValueDisplay__Init( &_this->ValueDisplay1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DriverInterfceSecoundSeit );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0004 );
  CoreRectView__OnSetBounds( &_this->ValueDisplay, _Const0005 );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplay, EwLoadString( &_Const0006 ));
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplay, 1 );
  CoreRectView__OnSetBounds( &_this->ValueDisplay1, _Const0007 );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplay1, EwLoadString( &_Const0006 ));
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplay1, 1 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0008 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0009 ));
  ViewsText_OnSetColor( &_this->Text, _Const000A );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplay ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplay1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplay, EwGetAutoObject( 
  &WidgetSetValueDisplay_Medium, WidgetSetValueDisplayConfig ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplay1, EwGetAutoObject( 
  &WidgetSetValueDisplay_Medium, WidgetSetValueDisplayConfig ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ResourcesFontLarge, ResourcesFont ));
}

/* Re-Initializer for the class 'DriverInterfce::SecoundSeit' */
void DriverInterfceSecoundSeit__ReInit( DriverInterfceSecoundSeit _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplay );
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplay1 );
  ViewsText__ReInit( &_this->Text );
}

/* Finalizer method for the class 'DriverInterfce::SecoundSeit' */
void DriverInterfceSecoundSeit__Done( DriverInterfceSecoundSeit _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  WidgetSetValueDisplay__Done( &_this->ValueDisplay );
  WidgetSetValueDisplay__Done( &_this->ValueDisplay1 );
  ViewsText__Done( &_this->Text );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void DriverInterfceSecoundSeit_UpdateLayout( DriverInterfceSecoundSeit _this, XPoint 
  aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
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
void DriverInterfceSecoundSeit_UpdateViewState( DriverInterfceSecoundSeit _this, 
  XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* Variants derived from the class : 'DriverInterfce::SecoundSeit' */
EW_DEFINE_CLASS_VARIANTS( DriverInterfceSecoundSeit )
EW_END_OF_CLASS_VARIANTS( DriverInterfceSecoundSeit )

/* Virtual Method Table (VMT) for the class : 'DriverInterfce::SecoundSeit' */
EW_DEFINE_CLASS( DriverInterfceSecoundSeit, CoreGroup, ValueDisplay, ValueDisplay, 
                 ValueDisplay, ValueDisplay, _None, _None, "DriverInterfce::SecoundSeit" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_drawContent,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  DriverInterfceSecoundSeit_UpdateLayout,
  DriverInterfceSecoundSeit_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( DriverInterfceSecoundSeit )

/* Initializer for the class 'DriverInterfce::FirstSeit' */
void DriverInterfceFirstSeit__Init( DriverInterfceFirstSeit _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( DriverInterfceFirstSeit );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->kugel, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Strasse, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Image1, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->SpeedReifen, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_XObject, 0 );
  WidgetSetVerticalSlider__Init( &_this->VerticalSlider, &_this->_XObject, 0 );
  WidgetSetHorizontalValueBar__Init( &_this->Batterie, &_this->_XObject, 0 );
  WidgetSetValueDisplay__Init( &_this->ValueDisplayDrehzahl, &_this->_XObject, 0 );
  WidgetSetValueDisplay__Init( &_this->ValueDisplay, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_XObject, 0 );
  BezierClockBezierClock__Init( &_this->clock, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DriverInterfceFirstSeit );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000B );
  CoreRectView__OnSetBounds( &_this->kugel, _Const000C );
  CoreRectView__OnSetBounds( &_this->Strasse, _Const000D );
  CoreRectView__OnSetBounds( &_this->Image1, _Const000E );
  CoreRectView__OnSetBounds( &_this->SpeedReifen, _Const000F );
  CoreRectView__OnSetBounds( &_this->Text2, _Const0010 );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const0011 ));
  ViewsText_OnSetColor( &_this->Text2, _Const0012 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const0013 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0014 ));
  ViewsText_OnSetColor( &_this->Text1, _Const0012 );
  CoreRectView__OnSetBounds( &_this->VerticalSlider, _Const0015 );
  WidgetSetVerticalSlider_OnSetStepSize( &_this->VerticalSlider, 1 );
  WidgetSetVerticalSlider_OnSetMaxValue( &_this->VerticalSlider, 240 );
  WidgetSetVerticalSlider_OnSetCurrentValue( &_this->VerticalSlider, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplayDrehzahl, _Const0016 );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplayDrehzahl, 0 );
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplayDrehzahl, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplay, _Const0017 );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplay, 0 );
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplay, 0 );
  WidgetSetValueDisplay_OnSetCurrentBias( &_this->ValueDisplay, 0.000000f );
  CoreRectView__OnSetBounds( &_this->Text, _Const0018 );
  ViewsText_OnSetEllipsis( &_this->Text, 1 );
  ViewsText_OnSetWrapText( &_this->Text, 1 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0019 ));
  ViewsText_OnSetColor( &_this->Text, _Const001A );
  CoreRectView__OnSetBounds( &_this->clock, _Const001B );
  CoreGroup__Add( _this, ((CoreView)&_this->kugel ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Strasse ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpeedReifen ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalSlider ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Batterie ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplayDrehzahl ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplay ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->clock ), 0 );
  ViewsImage_OnSetBitmap( &_this->kugel, EwLoadResource( &SetSpeedpng_transparent_road_finish_line_miscellaneous_angle_triangle_thumbnail, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Strasse, EwLoadResource( &SetSpeedpng_transparent_road_finish_line_miscellaneous_angle_triangle_thumbnail, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Image1, EwLoadResource( &SetSpeedReifen, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->SpeedReifen, EwLoadResource( &SetSpeedReifen, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  _this->VerticalSlider.OnChange = EwNullSlot;
  WidgetSetVerticalSlider_OnSetOutlet( &_this->VerticalSlider, EwNewRef( _this, 
  DriverInterfceFirstSeit_OnGetSpeed, DriverInterfceFirstSeit_OnSetSpeed ));
  WidgetSetVerticalSlider_OnSetAppearance( &_this->VerticalSlider, EwGetAutoObject( 
  &WidgetSetVerticalSlider_Medium, WidgetSetVerticalSliderConfig ));
  WidgetSetHorizontalValueBar_OnSetOutlet( &_this->Batterie, EwNewRef( _this, DriverInterfceFirstSeit_OnGetSpeed, 
  DriverInterfceFirstSeit_OnSetSpeed ));
  WidgetSetHorizontalValueBar_OnSetAppearance( &_this->Batterie, EwGetAutoObject( 
  &WidgetSetHorizontalValueBar_Medium, WidgetSetHorizontalValueBarConfig ));
  WidgetSetValueDisplay_OnSetOutlet( &_this->ValueDisplayDrehzahl, EwNewRef( _this, 
  DriverInterfceFirstSeit_OnGetSpeed, DriverInterfceFirstSeit_OnSetSpeed ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplayDrehzahl, EwGetAutoObject( 
  &SetSpeedSpeedValueDisplayConfig, WidgetSetValueDisplayConfig ));
  WidgetSetValueDisplay_OnSetOutlet( &_this->ValueDisplay, EwNewRef( _this, DriverInterfceFirstSeit_OnGetSpeed, 
  DriverInterfceFirstSeit_OnSetSpeed ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplay, EwGetAutoObject( 
  &SetSpeedSpeedValueDisplayConfigDrehzahl, WidgetSetValueDisplayConfig ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &BezierClockFontL, ResourcesFont ));
}

/* Re-Initializer for the class 'DriverInterfce::FirstSeit' */
void DriverInterfceFirstSeit__ReInit( DriverInterfceFirstSeit _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->kugel );
  ViewsImage__ReInit( &_this->Strasse );
  ViewsImage__ReInit( &_this->Image1 );
  ViewsImage__ReInit( &_this->SpeedReifen );
  ViewsText__ReInit( &_this->Text2 );
  ViewsText__ReInit( &_this->Text1 );
  WidgetSetVerticalSlider__ReInit( &_this->VerticalSlider );
  WidgetSetHorizontalValueBar__ReInit( &_this->Batterie );
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplayDrehzahl );
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplay );
  ViewsText__ReInit( &_this->Text );
  BezierClockBezierClock__ReInit( &_this->clock );
}

/* Finalizer method for the class 'DriverInterfce::FirstSeit' */
void DriverInterfceFirstSeit__Done( DriverInterfceFirstSeit _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->kugel );
  ViewsImage__Done( &_this->Strasse );
  ViewsImage__Done( &_this->Image1 );
  ViewsImage__Done( &_this->SpeedReifen );
  ViewsText__Done( &_this->Text2 );
  ViewsText__Done( &_this->Text1 );
  WidgetSetVerticalSlider__Done( &_this->VerticalSlider );
  WidgetSetHorizontalValueBar__Done( &_this->Batterie );
  WidgetSetValueDisplay__Done( &_this->ValueDisplayDrehzahl );
  WidgetSetValueDisplay__Done( &_this->ValueDisplay );
  ViewsText__Done( &_this->Text );
  BezierClockBezierClock__Done( &_this->clock );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void DriverInterfceFirstSeit_UpdateLayout( DriverInterfceFirstSeit _this, XPoint 
  aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
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
void DriverInterfceFirstSeit_UpdateViewState( DriverInterfceFirstSeit _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'DriverInterfce::FirstSeit.OnSetSpeed()' */
void DriverInterfceFirstSeit_OnSetSpeed( DriverInterfceFirstSeit _this, XInt32 value )
{
  if ( _this->Speed == value )
    return;

  _this->Speed = value;
}

/* 'C' function for method : 'DriverInterfce::FirstSeit.OnGetSpeed()' */
XInt32 DriverInterfceFirstSeit_OnGetSpeed( DriverInterfceFirstSeit _this )
{
  return _this->Speed;
}

/* Variants derived from the class : 'DriverInterfce::FirstSeit' */
EW_DEFINE_CLASS_VARIANTS( DriverInterfceFirstSeit )
EW_END_OF_CLASS_VARIANTS( DriverInterfceFirstSeit )

/* Virtual Method Table (VMT) for the class : 'DriverInterfce::FirstSeit' */
EW_DEFINE_CLASS( DriverInterfceFirstSeit, CoreGroup, kugel, kugel, kugel, kugel, 
                 Speed, Speed, "DriverInterfce::FirstSeit" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_drawContent,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  DriverInterfceFirstSeit_UpdateLayout,
  DriverInterfceFirstSeit_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( DriverInterfceFirstSeit )

/* Embedded Wizard */
