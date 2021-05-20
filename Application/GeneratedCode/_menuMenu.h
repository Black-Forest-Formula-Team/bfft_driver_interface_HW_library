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

#ifndef _menuMenu_H
#define _menuMenu_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x0009001E
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x0009001E
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_EffectsFloatEffect.h"
#include "_ViewsWarpGroup.h"
#include "_menuMenuButton.h"

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif

/* Forward declaration of the class menu::Menu */
#ifndef _menuMenu_
  EW_DECLARE_CLASS( menuMenu )
#define _menuMenu_
#endif


/* This UI component implements the menu to select the animation */
EW_DEFINE_FIELDS( menuMenu, CoreGroup )
  EW_VARIABLE( fadeOutView,     ViewsWarpGroup )
  EW_PROPERTY( OnItem1,         XSlot )
  EW_PROPERTY( OnItem2,         XSlot )
  EW_PROPERTY( OnItem3,         XSlot )
  EW_OBJECT  ( fadeOutEffect,   EffectsFloatEffect )
  EW_OBJECT  ( KeyHandler,      CoreKeyPressHandler )
  EW_OBJECT  ( Mirror1,         ViewsWarpGroup )
  EW_OBJECT  ( Mirror2,         ViewsWarpGroup )
  EW_OBJECT  ( Mirror3,         ViewsWarpGroup )
  EW_OBJECT  ( Item1,           menuMenuButton )
  EW_OBJECT  ( Item2,           menuMenuButton )
  EW_OBJECT  ( Item3,           menuMenuButton )
EW_END_OF_FIELDS( menuMenu )

/* Virtual Method Table (VMT) for the class : 'menu::Menu' */
EW_DEFINE_METHODS( menuMenu, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( drawContent,       void )( CoreGroup _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetBuffered,     void )( CoreGroup _this, XBool value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( IsDialog,          XBool )( CoreGroup _this, XBool aRecursive )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( CoreGroup _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( FindViewInDirection, CoreView )( CoreGroup _this, CoreView aView, XEnum 
    aDirection, XSet aFilter )
  EW_METHOD( FindSiblingView,   CoreView )( CoreGroup _this, CoreView aView, XSet 
    aFilter )
  EW_METHOD( RestackTop,        void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Remove,            void )( CoreGroup _this, CoreView aView )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( menuMenu )

/* This slot method is invoked when the user has selected the first button in the 
   menu. */
void menuMenu_Item1Slot( menuMenu _this, XObject sender );

/* This slot method is invoked when the user has selected the second button in the 
   menu. */
void menuMenu_Item2Slot( menuMenu _this, XObject sender );

/* This slot method is invoked when the user has selected the third button in the 
   menu. */
void menuMenu_Item3Slot( menuMenu _this, XObject sender );

/* This method is invoked from the @fadeOutEffect durring the fade-out animation. */
void menuMenu_onAnimate( menuMenu _this, XObject sender );

/* This method is invoked at the end of the fade-out animation. */
void menuMenu_onFinished( menuMenu _this, XObject sender );

/* The slot method is invoked from the @KeyHandler when the user has pressed one 
   of th cursor keys up/down/left/right. Accordingly to the pressed key the appropriate 
   button is selected. */
void menuMenu_onPressKey( menuMenu _this, XObject sender );

/* This method is invoked after the user has activated one of the menu buttons. 
   Thereupon an animation starts to fade-out the menu and show the corresponding 
   example application. */
void menuMenu_StartAnimation( menuMenu _this, menuMenuButton aItem );

#ifdef __cplusplus
  }
#endif

#endif /* _menuMenu_H */

/* Embedded Wizard */
