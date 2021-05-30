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
#include "_CoreView.h"
#include "_DriverInterfceDriverInterface.h"
#include "_GUIGUI.h"
#include "GUI.h"

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 270 }};

/* Initializer for the class 'GUI::GUI' */
void GUIGUI__Init( GUIGUI _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_GCT = EW_CLASS_GCT( GUIGUI );

  /* ... then construct all embedded objects */
  DriverInterfceDriverInterface__Init( &_this->DriverInterface, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( GUIGUI );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->DriverInterface, _Const0000 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->DriverInterface, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DriverInterface ), 0 );
}

/* Re-Initializer for the class 'GUI::GUI' */
void GUIGUI__ReInit( GUIGUI _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  DriverInterfceDriverInterface__ReInit( &_this->DriverInterface );
}

/* Finalizer method for the class 'GUI::GUI' */
void GUIGUI__Done( GUIGUI _this )
{
  /* Finalize this class */
  _this->_Super._VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  DriverInterfceDriverInterface__Done( &_this->DriverInterface );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_Super );
}

/* Variants derived from the class : 'GUI::GUI' */
EW_DEFINE_CLASS_VARIANTS( GUIGUI )
EW_END_OF_CLASS_VARIANTS( GUIGUI )

/* Virtual Method Table (VMT) for the class : 'GUI::GUI' */
EW_DEFINE_CLASS( GUIGUI, CoreRoot, DriverInterface, DriverInterface, DriverInterface, 
                 DriverInterface, _None, _None, "GUI::GUI" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_drawContent,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetBuffered,
  CoreRoot_OnSetOpacity,
  CoreRoot_IsDialog,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_RestackTop,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( GUIGUI )

/* Embedded Wizard */
