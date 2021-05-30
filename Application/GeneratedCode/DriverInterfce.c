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
#include "_DriverInterfceDummySide.h"
#include "_DriverInterfceStartSide.h"
#include "_EffectsPointEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_WidgetSetGauge.h"
#include "_WidgetSetGaugeConfig.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetHorizontalValueBarConfig.h"
#include "_WidgetSetValueDisplay.h"
#include "_WidgetSetValueDisplayConfig.h"
#include "_WidgetSetVerticalSlider.h"
#include "_WidgetSetVerticalSliderConfig.h"
#include "BezierClock.h"
#include "Core.h"
#include "DriverInterfce.h"
#include "Dummy.h"
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
static const XRect _Const0005 = {{ 180, 37 }, { 400, 97 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x0002 };
static const XRect _Const0007 = {{ 188, 91 }, { 408, 151 }};
static const XRect _Const0008 = {{ 230, 3 }, { 420, 38 }};
static const XStringRes _Const0009 = { _StringsDefault0, 0x0009 };
static const XColor _Const000A = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const000B = {{ 0, 21 }, { 50, 221 }};
static const XRect _Const000C = {{ 60, 50 }, { 231, 201 }};
static const XRect _Const000D = {{ 0, 0 }, { 470, 270 }};
static const XRect _Const000E = {{ 29, 130 }, { 153, 244 }};
static const XRect _Const000F = {{ 238, 131 }, { 383, 242 }};
static const XRect _Const0010 = {{ 184, 81 }, { 434, 281 }};
static const XRect _Const0011 = {{ -90, 66 }, { 270, 296 }};
static const XRect _Const0012 = {{ 263, 177 }, { 353, 222 }};
static const XStringRes _Const0013 = { _StringsDefault0, 0x0011 };
static const XColor _Const0014 = { 0xF7, 0x00, 0x1D, 0xFF };
static const XRect _Const0015 = {{ 35, 184 }, { 135, 214 }};
static const XStringRes _Const0016 = { _StringsDefault0, 0x001C };
static const XRect _Const0017 = {{ 421, 100 }, { 471, 250 }};
static const XRect _Const0018 = {{ 2, 133 }, { 172, 193 }};
static const XRect _Const0019 = {{ 244, 130 }, { 369, 197 }};
static const XRect _Const001A = {{ 50, 10 }, { 150, 40 }};
static const XStringRes _Const001B = { _StringsDefault0, 0x0023 };
static const XColor _Const001C = { 0xFF, 0x23, 0x23, 0xFF };
static const XRect _Const001D = {{ 3, -28 }, { 473, 247 }};

/* Initializer for the class 'DriverInterfce::DriverInterface' */
void DriverInterfceDriverInterface__Init( DriverInterfceDriverInterface _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( DriverInterfceDriverInterface );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->FormulaStudentImage, &_this->_XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_XObject, 0 );
  CoreOutline__Init( &_this->Outline, &_this->_XObject, 0 );
  DriverInterfceStartSide__Init( &_this->FirstSeit, &_this->_XObject, 0 );
  DriverInterfceDummySide__Init( &_this->SecoundSeit, &_this->_XObject, 0 );
  EffectsPointEffect__Init( &_this->PointEffect, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DriverInterfceDriverInterface );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->FormulaStudentImage, _Const0001 );
  ViewsImage_OnSetAutoSize( &_this->FormulaStudentImage, 1 );
  ViewsImage_OnSetAlphaBlended( &_this->FormulaStudentImage, 1 );
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
  CoreGroup__Add( _this, ((CoreView)&_this->FormulaStudentImage ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Outline ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FirstSeit ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SecoundSeit ), 0 );
  ViewsImage_OnSetBitmap( &_this->FormulaStudentImage, EwLoadResource( &SetSpeedDriv, 
  ResourcesBitmap ));
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
  ViewsImage__ReInit( &_this->FormulaStudentImage );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreOutline__ReInit( &_this->Outline );
  DriverInterfceStartSide__ReInit( &_this->FirstSeit );
  DriverInterfceDummySide__ReInit( &_this->SecoundSeit );
  EffectsPointEffect__ReInit( &_this->PointEffect );
}

/* Finalizer method for the class 'DriverInterfce::DriverInterface' */
void DriverInterfceDriverInterface__Done( DriverInterfceDriverInterface _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->FormulaStudentImage );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreOutline__Done( &_this->Outline );
  DriverInterfceStartSide__Done( &_this->FirstSeit );
  DriverInterfceDummySide__Done( &_this->SecoundSeit );
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
EW_DEFINE_CLASS( DriverInterfceDriverInterface, CoreGroup, FormulaStudentImage, 
                 FormulaStudentImage, FormulaStudentImage, FormulaStudentImage, 
                 _None, _None, "DriverInterfce::DriverInterface" )
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

/* Initializer for the class 'DriverInterfce::DummySide' */
void DriverInterfceDummySide__Init( DriverInterfceDummySide _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( DriverInterfceDummySide );

  /* ... then construct all embedded objects */
  WidgetSetValueDisplay__Init( &_this->ValueDisplay, &_this->_XObject, 0 );
  WidgetSetValueDisplay__Init( &_this->ValueDisplay_Fixpoint, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Dummy_Text, &_this->_XObject, 0 );
  WidgetSetVerticalSlider__Init( &_this->VerticalSlider, &_this->_XObject, 0 );
  WidgetSetGauge__Init( &_this->Gauge, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DriverInterfceDummySide );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0004 );
  CoreRectView__OnSetBounds( &_this->ValueDisplay, _Const0005 );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplay, EwLoadString( &_Const0006 ));
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplay, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplay_Fixpoint, _Const0007 );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplay_Fixpoint, EwLoadString( 
  &_Const0006 ));
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplay_Fixpoint, 2 );
  WidgetSetValueDisplay_OnSetCurrentBias( &_this->ValueDisplay_Fixpoint, 0.000000f );
  CoreRectView__OnSetBounds( &_this->Dummy_Text, _Const0008 );
  ViewsText_OnSetString( &_this->Dummy_Text, EwLoadString( &_Const0009 ));
  ViewsText_OnSetColor( &_this->Dummy_Text, _Const000A );
  CoreRectView__OnSetBounds( &_this->VerticalSlider, _Const000B );
  CoreRectView__OnSetBounds( &_this->Gauge, _Const000C );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplay ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplay_Fixpoint ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Dummy_Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalSlider ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Gauge ), 0 );
  CoreGroup__OnSetFocus( &_this->ValueDisplay, 0 );
  WidgetSetValueDisplay_OnSetOutlet( &_this->ValueDisplay, EwNewRef( _this, DriverInterfceDummySide_OnGetDummy, 
  DriverInterfceDummySide_OnSetDummy ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplay, EwGetAutoObject( 
  &DummyDummyValueDisplayConfig, WidgetSetValueDisplayConfig ));
  WidgetSetValueDisplay_OnSetOutlet( &_this->ValueDisplay_Fixpoint, EwNewRef( _this, 
  DriverInterfceDummySide_OnGetDummy, DriverInterfceDummySide_OnSetDummy ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplay_Fixpoint, EwGetAutoObject( 
  &DummyDummyValueDisplayConfig, WidgetSetValueDisplayConfig ));
  ViewsText_OnSetFont( &_this->Dummy_Text, EwLoadResource( &ResourcesFontLarge, 
  ResourcesFont ));
  WidgetSetVerticalSlider_OnSetOutlet( &_this->VerticalSlider, EwNewRef( _this, 
  DriverInterfceDummySide_OnGetDummy, DriverInterfceDummySide_OnSetDummy ));
  WidgetSetVerticalSlider_OnSetAppearance( &_this->VerticalSlider, EwGetAutoObject( 
  &WidgetSetVerticalSlider_Medium, WidgetSetVerticalSliderConfig ));
  WidgetSetGauge_OnSetOutlet( &_this->Gauge, EwNewRef( _this, DriverInterfceDummySide_OnGetDummy, 
  DriverInterfceDummySide_OnSetDummy ));
  WidgetSetGauge_OnSetAppearance( &_this->Gauge, EwGetAutoObject( &WidgetSetGauge_Medium, 
  WidgetSetGaugeConfig ));
}

/* Re-Initializer for the class 'DriverInterfce::DummySide' */
void DriverInterfceDummySide__ReInit( DriverInterfceDummySide _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplay );
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplay_Fixpoint );
  ViewsText__ReInit( &_this->Dummy_Text );
  WidgetSetVerticalSlider__ReInit( &_this->VerticalSlider );
  WidgetSetGauge__ReInit( &_this->Gauge );
}

/* Finalizer method for the class 'DriverInterfce::DummySide' */
void DriverInterfceDummySide__Done( DriverInterfceDummySide _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  WidgetSetValueDisplay__Done( &_this->ValueDisplay );
  WidgetSetValueDisplay__Done( &_this->ValueDisplay_Fixpoint );
  ViewsText__Done( &_this->Dummy_Text );
  WidgetSetVerticalSlider__Done( &_this->VerticalSlider );
  WidgetSetGauge__Done( &_this->Gauge );

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
void DriverInterfceDummySide_UpdateLayout( DriverInterfceDummySide _this, XPoint 
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
void DriverInterfceDummySide_UpdateViewState( DriverInterfceDummySide _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'DriverInterfce::DummySide.OnSetDummy()' */
void DriverInterfceDummySide_OnSetDummy( DriverInterfceDummySide _this, XInt32 value )
{
  if ( _this->Dummy == value )
    return;

  _this->Dummy = value;
}

/* 'C' function for method : 'DriverInterfce::DummySide.OnGetDummy()' */
XInt32 DriverInterfceDummySide_OnGetDummy( DriverInterfceDummySide _this )
{
  return _this->Dummy;
}

/* Variants derived from the class : 'DriverInterfce::DummySide' */
EW_DEFINE_CLASS_VARIANTS( DriverInterfceDummySide )
EW_END_OF_CLASS_VARIANTS( DriverInterfceDummySide )

/* Virtual Method Table (VMT) for the class : 'DriverInterfce::DummySide' */
EW_DEFINE_CLASS( DriverInterfceDummySide, CoreGroup, ValueDisplay, ValueDisplay, 
                 ValueDisplay, ValueDisplay, Dummy, Dummy, "DriverInterfce::DummySide" )
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
  DriverInterfceDummySide_UpdateLayout,
  DriverInterfceDummySide_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( DriverInterfceDummySide )

/* Initializer for the class 'DriverInterfce::StartSide' */
void DriverInterfceStartSide__Init( DriverInterfceStartSide _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( DriverInterfceStartSide );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Bullet, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->street, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->TyreSpeed_2, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->TyreSpeed_1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->x1000_min, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_XObject, 0 );
  WidgetSetVerticalSlider__Init( &_this->VerticalSlider, &_this->_XObject, 0 );
  WidgetSetHorizontalValueBar__Init( &_this->Batterie, &_this->_XObject, 0 );
  WidgetSetValueDisplay__Init( &_this->ValueDisplay_Speed, &_this->_XObject, 0 );
  WidgetSetValueDisplay__Init( &_this->ValueDisplay_RPM, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Battery, &_this->_XObject, 0 );
  BezierClockBezierClock__Init( &_this->clock, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( DriverInterfceStartSide );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000D );
  CoreRectView__OnSetBounds( &_this->Bullet, _Const000E );
  CoreRectView__OnSetBounds( &_this->street, _Const000F );
  CoreRectView__OnSetBounds( &_this->TyreSpeed_2, _Const0010 );
  CoreRectView__OnSetBounds( &_this->TyreSpeed_1, _Const0011 );
  CoreRectView__OnSetBounds( &_this->x1000_min, _Const0012 );
  ViewsText_OnSetString( &_this->x1000_min, EwLoadString( &_Const0013 ));
  ViewsText_OnSetColor( &_this->x1000_min, _Const0014 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const0015 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0016 ));
  ViewsText_OnSetColor( &_this->Text1, _Const0014 );
  CoreRectView__OnSetBounds( &_this->VerticalSlider, _Const0017 );
  WidgetSetVerticalSlider_OnSetStepSize( &_this->VerticalSlider, 1 );
  WidgetSetVerticalSlider_OnSetMaxValue( &_this->VerticalSlider, 240 );
  WidgetSetVerticalSlider_OnSetCurrentValue( &_this->VerticalSlider, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplay_Speed, _Const0018 );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplay_Speed, 0 );
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplay_Speed, 0 );
  CoreRectView__OnSetBounds( &_this->ValueDisplay_RPM, _Const0019 );
  WidgetSetValueDisplay_OnSetUnit( &_this->ValueDisplay_RPM, 0 );
  WidgetSetValueDisplay_OnSetPrecision( &_this->ValueDisplay_RPM, 0 );
  WidgetSetValueDisplay_OnSetCurrentBias( &_this->ValueDisplay_RPM, 0.000000f );
  CoreRectView__OnSetBounds( &_this->Battery, _Const001A );
  ViewsText_OnSetEllipsis( &_this->Battery, 1 );
  ViewsText_OnSetWrapText( &_this->Battery, 1 );
  ViewsText_OnSetString( &_this->Battery, EwLoadString( &_Const001B ));
  ViewsText_OnSetColor( &_this->Battery, _Const001C );
  CoreRectView__OnSetBounds( &_this->clock, _Const001D );
  CoreGroup__Add( _this, ((CoreView)&_this->Bullet ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->street ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TyreSpeed_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TyreSpeed_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->x1000_min ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalSlider ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Batterie ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplay_Speed ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ValueDisplay_RPM ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Battery ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->clock ), 0 );
  ViewsImage_OnSetBitmap( &_this->Bullet, EwLoadResource( &SetSpeedpng_transparent_road_finish_line_miscellaneous_angle_triangle_thumbnail, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->street, EwLoadResource( &SetSpeedpng_transparent_road_finish_line_miscellaneous_angle_triangle_thumbnail, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->TyreSpeed_2, EwLoadResource( &SetSpeedReifen, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->TyreSpeed_1, EwLoadResource( &SetSpeedReifen, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->x1000_min, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourcesFontSmall, ResourcesFont ));
  _this->VerticalSlider.OnChange = EwNullSlot;
  WidgetSetVerticalSlider_OnSetOutlet( &_this->VerticalSlider, EwNewRef( _this, 
  DriverInterfceStartSide_OnGetSpeed, DriverInterfceStartSide_OnSetSpeed ));
  WidgetSetVerticalSlider_OnSetAppearance( &_this->VerticalSlider, EwGetAutoObject( 
  &WidgetSetVerticalSlider_Medium, WidgetSetVerticalSliderConfig ));
  WidgetSetHorizontalValueBar_OnSetOutlet( &_this->Batterie, EwNewRef( _this, DriverInterfceStartSide_OnGetBatteryValue, 
  DriverInterfceStartSide_OnSetBatteryValue ));
  WidgetSetHorizontalValueBar_OnSetAppearance( &_this->Batterie, EwGetAutoObject( 
  &WidgetSetHorizontalValueBar_Medium, WidgetSetHorizontalValueBarConfig ));
  WidgetSetValueDisplay_OnSetOutlet( &_this->ValueDisplay_Speed, EwNewRef( _this, 
  DriverInterfceStartSide_OnGetRotaionSpeed, DriverInterfceStartSide_OnSetRotaionSpeed ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplay_Speed, EwGetAutoObject( 
  &SetSpeedSpeedValueDisplayConfig, WidgetSetValueDisplayConfig ));
  WidgetSetValueDisplay_OnSetOutlet( &_this->ValueDisplay_RPM, EwNewRef( _this, 
  DriverInterfceStartSide_OnGetSpeed, DriverInterfceStartSide_OnSetSpeed ));
  WidgetSetValueDisplay_OnSetAppearance( &_this->ValueDisplay_RPM, EwGetAutoObject( 
  &SetSpeedSpeedValueDisplayConfigDrehzahl, WidgetSetValueDisplayConfig ));
  ViewsText_OnSetFont( &_this->Battery, EwLoadResource( &BezierClockFontL, ResourcesFont ));
}

/* Re-Initializer for the class 'DriverInterfce::StartSide' */
void DriverInterfceStartSide__ReInit( DriverInterfceStartSide _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Bullet );
  ViewsImage__ReInit( &_this->street );
  ViewsImage__ReInit( &_this->TyreSpeed_2 );
  ViewsImage__ReInit( &_this->TyreSpeed_1 );
  ViewsText__ReInit( &_this->x1000_min );
  ViewsText__ReInit( &_this->Text1 );
  WidgetSetVerticalSlider__ReInit( &_this->VerticalSlider );
  WidgetSetHorizontalValueBar__ReInit( &_this->Batterie );
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplay_Speed );
  WidgetSetValueDisplay__ReInit( &_this->ValueDisplay_RPM );
  ViewsText__ReInit( &_this->Battery );
  BezierClockBezierClock__ReInit( &_this->clock );
}

/* Finalizer method for the class 'DriverInterfce::StartSide' */
void DriverInterfceStartSide__Done( DriverInterfceStartSide _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Bullet );
  ViewsImage__Done( &_this->street );
  ViewsImage__Done( &_this->TyreSpeed_2 );
  ViewsImage__Done( &_this->TyreSpeed_1 );
  ViewsText__Done( &_this->x1000_min );
  ViewsText__Done( &_this->Text1 );
  WidgetSetVerticalSlider__Done( &_this->VerticalSlider );
  WidgetSetHorizontalValueBar__Done( &_this->Batterie );
  WidgetSetValueDisplay__Done( &_this->ValueDisplay_Speed );
  WidgetSetValueDisplay__Done( &_this->ValueDisplay_RPM );
  ViewsText__Done( &_this->Battery );
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
void DriverInterfceStartSide_UpdateLayout( DriverInterfceStartSide _this, XPoint 
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
void DriverInterfceStartSide_UpdateViewState( DriverInterfceStartSide _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* 'C' function for method : 'DriverInterfce::StartSide.OnSetSpeed()' */
void DriverInterfceStartSide_OnSetSpeed( DriverInterfceStartSide _this, XInt32 value )
{
  if ( _this->Speed == value )
    return;

  _this->Speed = value;
}

/* 'C' function for method : 'DriverInterfce::StartSide.OnGetSpeed()' */
XInt32 DriverInterfceStartSide_OnGetSpeed( DriverInterfceStartSide _this )
{
  return _this->Speed;
}

/* 'C' function for method : 'DriverInterfce::StartSide.OnSetRotaionSpeed()' */
void DriverInterfceStartSide_OnSetRotaionSpeed( DriverInterfceStartSide _this, XInt32 
  value )
{
  if ( _this->RotaionSpeed == value )
    return;

  _this->RotaionSpeed = value;
}

/* 'C' function for method : 'DriverInterfce::StartSide.OnGetRotaionSpeed()' */
XInt32 DriverInterfceStartSide_OnGetRotaionSpeed( DriverInterfceStartSide _this )
{
  return _this->RotaionSpeed;
}

/* 'C' function for method : 'DriverInterfce::StartSide.OnSetBatteryValue()' */
void DriverInterfceStartSide_OnSetBatteryValue( DriverInterfceStartSide _this, XInt32 
  value )
{
  if ( _this->BatteryValue == value )
    return;

  _this->BatteryValue = value;
}

/* 'C' function for method : 'DriverInterfce::StartSide.OnGetBatteryValue()' */
XInt32 DriverInterfceStartSide_OnGetBatteryValue( DriverInterfceStartSide _this )
{
  return _this->BatteryValue;
}

/* Variants derived from the class : 'DriverInterfce::StartSide' */
EW_DEFINE_CLASS_VARIANTS( DriverInterfceStartSide )
EW_END_OF_CLASS_VARIANTS( DriverInterfceStartSide )

/* Virtual Method Table (VMT) for the class : 'DriverInterfce::StartSide' */
EW_DEFINE_CLASS( DriverInterfceStartSide, CoreGroup, Bullet, Bullet, Bullet, Bullet, 
                 Speed, Speed, "DriverInterfce::StartSide" )
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
  DriverInterfceStartSide_UpdateLayout,
  DriverInterfceStartSide_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( DriverInterfceStartSide )

/* Embedded Wizard */
